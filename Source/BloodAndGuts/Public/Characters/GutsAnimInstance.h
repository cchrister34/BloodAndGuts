// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GutsAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class BLOODANDGUTS_API UGutsAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	UPROPERTY(BlueprintReadWrite)
	class ABloodAndGutsCharacter* BloodAndGutsCharacter;

	UPROPERTY(BlueprintReadWrite, Category = Movement)
	class UCharacterMovementComponent* GutsMovement;

	UPROPERTY(BlueprintReadWrite, Category = Movement)
	float GroundSpeed;
	
	UPROPERTY(BlueprintReadWrite, Category = Movement)
	bool isFalling;
	
	
};
