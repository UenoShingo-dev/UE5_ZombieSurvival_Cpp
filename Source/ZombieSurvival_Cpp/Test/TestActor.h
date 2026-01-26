// © 2026 Ueno Shingo. All rights reserved.
// Zombie Survival Game in Unreal Engine 5 (C++)
// Developed by Ueno Shingo
//
// This project is created using Unreal Engine 5 and C++ programming.
// All trademarks and registered trademarks are the property of their respective owners.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestActor.generated.h"

UCLASS()
class ZOMBIESURVIVAL_CPP_API ATestActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATestActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
