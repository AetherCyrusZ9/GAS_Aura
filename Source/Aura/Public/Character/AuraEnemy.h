// Copyright AetherCyrus

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "Interaction/EnemyInterface.h"
#include "AuraEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public AAuraCharacterBase , public IEnemyInterface
{
	GENERATED_BODY()
public:
	AAuraEnemy();

	// Enemy Interface
	void HighlightActor() override;
	void UnHighlightActor() override;

protected:
	virtual void BeginPlay() override;
	
};
