#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h" // abiltiy system interface
#include "CPPChar_TypeA.generated.h"

UCLASS()
class GASBASIC_01_UE54_API ACPPChar_TypeA : public ACharacter, public IAbilitySystemInterface {
	GENERATED_BODY()

public:
	ACPPChar_TypeA();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GAS_01", meta = (AllowPrivateAccess = "true"))
	class UAbilitySystemComponent* ASC_01;

	virtual class UAbilitySystemComponent* GetAbilitySystemComponent() const override {
		return ASC_01; 
	}

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GAS_01", meta = (AllowPrivateAccess = "true"))
	const class UCPPAtrSet_01* ATRBSet_01;


public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
