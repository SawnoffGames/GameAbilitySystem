#include "CPPChar_TypeB.h"
#include "CPPAtrSet_01.h" // <-- must be included
#include "CPPAtrSet_02.h" // <-- must be included
#include "AbilitySystemComponent.h"

ACPPChar_TypeB::ACPPChar_TypeB()
{
	PrimaryActorTick.bCanEverTick = true;

	ASC_02 = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("GASC_02")); // GASC_01 name of this object
}

void ACPPChar_TypeB::BeginPlay()
{
	Super::BeginPlay();

	if (IsValid(ASC_02))
	{
		ATRBSet_01 = ASC_02->GetSet<UCPPAtrSet_01>(); // Get attribute set
		ATRBSet_02 = ASC_02->GetSet<UCPPAtrSet_02>(); // Get attribute set
		
		UE_LOG(LogTemp, Warning, TEXT("dbug --  GASC_02 created "));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("dbug --  GASC_02 not valid object "));
	}
}

void ACPPChar_TypeB::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACPPChar_TypeB::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}
