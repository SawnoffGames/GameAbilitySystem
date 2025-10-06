#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h" // Ability system interface
#include "CPPChar_TypeB.generated.h"

UCLASS()
class GASBASIC_01_UE54_API ACPPChar_TypeB : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	ACPPChar_TypeB();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GAS_02", meta = (AllowPrivateAccess = "true"))
	UAbilitySystemComponent* ASC_02;

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override
	{
		return ASC_02;
	}

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GAS_02", meta = (AllowPrivateAccess = "true"))
	const class UCPPAtrSet_01* ATRBSet_01;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GAS_02", meta = (AllowPrivateAccess = "true"))
	const class UCPPAtrSet_02* ATRBSet_02;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;
};
