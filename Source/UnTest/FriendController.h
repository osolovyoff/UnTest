#pragma once

#include "CoreMinimal.h"
#include "Data.h"

#include "FriendController.generated.h"

/** whats doing friend controller?
 * This is class which process events from network or engine and 
 */
UCLASS()
class UNTEST_API UFriendController : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Friend Controller")
	UDataTable* FriendDataTable;

	UFUNCTION(BlueprintCallable, Category = "Friend Controller")
	TArray<FFriendData> GetConnectedFriends() const;

	UFUNCTION(BlueprintCallable, Category = "Friend Controller")
	TArray<FFriendData> GetDisconnectedFriends() const;

	UFUNCTION(BlueprintCallable, Category = "Friend Controller")
	void SimulateConnectionChanges();
    
	void SetDataTable(UDataTable* InDataTable);
};