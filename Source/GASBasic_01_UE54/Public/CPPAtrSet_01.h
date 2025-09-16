#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h" // <-- must be included
#include "CPPAtrSet_01.generated.h"

#define ATRB_ACCESS_01(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

UCLASS()
class GASBASIC_01_UE54_API UCPPAtrSet_01 : public UAttributeSet{
	GENERATED_BODY()

public:
	
	UCPPAtrSet_01();


	UPROPERTY(BlueprintReadOnly, Category = "ATR_01")
	FGameplayAttributeData Health_01;
	ATRB_ACCESS_01(UCPPAtrSet_01, Health_01);

	UPROPERTY(BlueprintReadOnly, Category = "ATR_01")
	FGameplayAttributeData Shield_01;
	ATRB_ACCESS_01(UCPPAtrSet_01, Shield_01);


	UPROPERTY(BlueprintReadOnly, Category = "ATR_01")
	FGameplayAttributeData Magic_01;

	UPROPERTY(BlueprintReadOnly, Category = "ATR_01")
	FGameplayAttributeData SuperMagic_01;
	
};
