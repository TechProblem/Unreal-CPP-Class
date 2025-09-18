// Fill out your copyright notice in the Description page of Project Settings.


#include "SomeCharacter.h"

// Sets default values
ASomeCharacter::ASomeCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASomeCharacter::BeginPlay()
{
	Super::BeginPlay();
	AnimRootMotionTranslationScale = 2.0f;
	
}

// Called every frame
void ASomeCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASomeCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ASomeCharacter::DoJump(float howHigh)
{
	
}
