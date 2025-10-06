#include "CPPChar_TypeA.h"
#include "CPPAtrSet_01.h" // <-- must be included
#include "AbilitySystemComponent.h"

ACPPChar_TypeA::ACPPChar_TypeA()
{
	PrimaryActorTick.bCanEverTick = true;

	ASC_01 = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("GASC_01")); // GASC_01 name of this object
}

void ACPPChar_TypeA::BeginPlay()
{
	Super::BeginPlay();

	if (IsValid(ASC_01))
	{
		ATRBSet_01 = ASC_01->GetSet<UCPPAtrSet_01>(); // Get attribute set
		
		UE_LOG(LogTemp, Warning, TEXT("dbug --  GASC_01 created "));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("dbug --  GASC_01 not valid object "));
	}
}

void ACPPChar_TypeA::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACPPChar_TypeA::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}