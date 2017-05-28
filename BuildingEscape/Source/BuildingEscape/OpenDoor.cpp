// Copyright KMSA 2017

#include "BuildingEscape.h"
#include "OpenDoor.h"


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

}

void UOpenDoor::OpenDoor()
{
	// Find owning actor
	AActor* Owner = GetOwner();

	FRotator NewRotation = FRotator(0.0f, -60.0f, 0.0f);

	Owner->SetActorRotation(NewRotation);
}


// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	// poll trigger volume
	//if the actor who opens is in the volume
	/*if (PressurePlate->IsOverlappingActor(ActorThatOpens))
	{
		OpenDoor();
	}*/
	      //open the door
	
}

