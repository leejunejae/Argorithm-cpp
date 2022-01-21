// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Pro4.h"
#include "Animation/AnimInstance.h"
#include "Pro4AnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class PRO4_API UPro4AnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	UPro4AnimInstance();

private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Pawn, Meta=(AllowPrivateAccess=true))
	float CurrentPawnSpeed;
};
