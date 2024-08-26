#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Data.generated.h"

/**
 * FFriendData - all needed for player data 
 */
USTRUCT(BlueprintType)
struct FFriendData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Friend")
	FString Nickname;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Friend")
	int32 Level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Friend")
	bool bIsConnected;

	FFriendData()
		: Nickname(TEXT(""))
		, Level(1)
		, bIsConnected(false)
	{}
};
