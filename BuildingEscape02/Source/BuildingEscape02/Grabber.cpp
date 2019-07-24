// Neko

#include "Grabber.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "Components/InputComponent.h"
#include "GameFramework/Actor.h"
#include "DrawDebugHelpers.h"

#define OUT

// Sets default values for this component's properties
UGrabber::UGrabber()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

}


// Called when the game starts
void UGrabber::BeginPlay()
{
	Super::BeginPlay();	
	FindPhysicsComponent();
	SetupInputComponent();
	// ...
	
}

void UGrabber::FindPhysicsComponent() {
	PhysicsHandle = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();
	if (PhysicsHandle == nullptr) {
		UE_LOG(LogTemp, Error, TEXT("Physics Handler can't be found on %s"), *GetOwner()->GetName())
	}
}

void UGrabber::SetupInputComponent() {
	InputComponent = GetOwner()->FindComponentByClass<UInputComponent>();

	if (InputComponent) {
		/// Bind input axis
		InputComponent->BindAction("Grab", IE_Pressed, this, &UGrabber::Grab);
		InputComponent->BindAction("Grab", IE_Released, this, &UGrabber::Release);
	} else {
		UE_LOG(LogTemp, Error, TEXT("InputComponent can't be found on %s"), *GetOwner()->GetName())
	}
}



void UGrabber::Grab() {

		// Reach any actors with physics body collision channel set
	auto HitResult = GetFirstPhysicsBody();
	auto ToGrab = HitResult.GetComponent();
	auto ActorHit = HitResult.GetActor();

	if(ActorHit) {
	PhysicsHandle->GrabComponentAtLocation(
		ToGrab,
		NAME_None,
		ToGrab->GetOwner()->GetActorLocation()
	);
}
}

void UGrabber::Release() {
	UE_LOG(LogTemp, Warning, TEXT("Object released!"))

		PhysicsHandle->ReleaseComponent();
}


// Called every frame
void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!PhysicsHandle) {
		return;
	}
	
	if (PhysicsHandle->GrabbedComponent) {
		PhysicsHandle->SetTargetLocation(PlayerViewPoint());
	}
	
	
	// ...
}

const FVector UGrabber::PlayerViewPoint() {
	FVector PlayerViewLocation;
	FRotator PlayerViewRotation;
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(
		OUT PlayerViewLocation,
		OUT PlayerViewRotation
	);


	FVector LineTraceEnd = PlayerViewLocation + PlayerViewRotation.Vector() * Reach;

	return LineTraceEnd;
}

const FHitResult UGrabber::GetFirstPhysicsBody() {

	FVector PlayerViewLocation;

	/// Setup query parameters
	FCollisionQueryParams TraceParams = (FName(TEXT("")), false, GetOwner());

	FHitResult Hit;
	GetWorld()->LineTraceSingleByObjectType(
		OUT Hit,
		PlayerViewLocation,
		PlayerViewPoint(),
		FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody),
		TraceParams
	);
	AActor *ActorHit = Hit.GetActor();
	if (ActorHit) {
		UE_LOG(LogTemp, Warning, TEXT("Actor is hitting %s"), *(ActorHit->GetName()))
	}
	return Hit;
}

