// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/GutsAnimInstance.h"
#include "Characters/BloodAndGutsCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

void UGutsAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	BloodAndGutsCharacter = Cast<ABloodAndGutsCharacter>(TryGetPawnOwner());

	if (BloodAndGutsCharacter)
	{
		GutsMovement = BloodAndGutsCharacter->GetCharacterMovement();
	}
	
}

void UGutsAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	if (GutsMovement)
	{
		GroundSpeed = UKismetMathLibrary::VSizeXY(GutsMovement->Velocity);
	}
}
