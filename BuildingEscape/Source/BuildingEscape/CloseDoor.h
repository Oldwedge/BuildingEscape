// Copyright KMSA 2017

#pragma once

#include "Components/ActorComponent.h"
#include "CloseDoor.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDINGESCAPE_API UCloseDoor : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCloseDoor();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	void CloseDoor();

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	UPROPERTY(EditAnywhere)
	ATriggerVolume* PressurePlate;

	UPROPERTY(VisibleAnywhere)
	float CloseAngle = 0.0f;

	AActor* ActorThatCloses;	
};
