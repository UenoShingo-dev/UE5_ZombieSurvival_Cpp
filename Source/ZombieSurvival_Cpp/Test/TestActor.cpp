// © 2026 Ueno Shingo. All rights reserved.
// Zombie Survival Game in Unreal Engine 5 (C++)
// Developed by Ueno Shingo
//
// This project is created using Unreal Engine 5 and C++ programming.
// All trademarks and registered trademarks are the property of their respective owners.



#include "TestActor.h"

// Sets default values
ATestActor::ATestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestActor::BeginPlay()
{
	Super::BeginPlay();
	
	UE_LOG(LogTemp, Warning, TEXT("TestActor BeginPlay"));
}

// Called every frame
void ATestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

