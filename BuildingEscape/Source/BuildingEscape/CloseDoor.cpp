// Copyright KMSA 2017

#include "BuildingEscape.h"
#include "CloseDoor.h"


// Sets default values for this component's properties
UCloseDoor::UCloseDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCloseDoor::BeginPlay()
{
	Super::BeginPlay();

	// ...
	ActorThatCloses = GetWorld()->GetFirstPlayerController()->GetPawn();
	
}

void UCloseDoor::CloseDoor()
{

	// Find owning actor
	AActor* Owner = GetOwner();

	FRotator NewRotation = FRotator(0.0f, CloseAngle, 0.0f);

	Owner->SetActorRotation(NewRotation);

}


// Called every frame
void UCloseDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	if (!PressurePlate->IsOverlappingActor(ActorThatCloses))
	{
		CloseDoor();
	}

}

