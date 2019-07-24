// Neko

#include "OpenDoor.h"
#include "Components/ActorComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"

#define OUT

// Sets default values for this component's properties
UOpenDoor::UOpenDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();
	Owner = GetOwner();

	// ...
	
}

void UOpenDoor::OpenDoor()
{
	/*Owner->SetActorRotation(FRotator(0.f, OpenAngle, 0.f));*/
	OpenRequest.Broadcast();
}

void UOpenDoor::CloseDoor()
{
	FRotator NewRotation = FRotator(0.f, 0, 0.f);
	Owner->SetActorRotation(NewRotation);
}


// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (GetMassOnPlate() > 50.f) {
		OpenDoor();
		LastDoorOpenTime = GetWorld()->GetTimeSeconds();
	}

	// Check time to close door
	/*if (!(PressurePlate && PressurePlate->IsOverlappingActor(PressureActor))) {
		CloseDoor();
	}*/
	if (GetWorld()->GetTimeSeconds() - LastDoorOpenTime > DoorCloseDelay) {
		CloseDoor();
	}

	
}

float UOpenDoor::GetMassOnPlate() {
	float TotalMass = 0.f;

	TSet<AActor*> OverlappingActors;
	PressurePlate->GetOverlappingActors(OUT OverlappingActors);

	for (auto* Actor : OverlappingActors) {
		TotalMass += Actor->FindComponentByClass<UPrimitiveComponent>()->GetMass();
		UE_LOG(LogTemp, Warning, TEXT("%s on Pressure Plate"), *Actor->GetName())
	}

	
	
	return TotalMass;
}

