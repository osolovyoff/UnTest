#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "Data.h"
#include "FriendWidget.generated.h"

/**
 * 
 */
UCLASS()
class UNTEST_API UFriendWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "FriendWidget")
	void SetupFriendWidget(const FFriendData& FriendData);
	
protected:
	virtual void NativeConstruct() override;
	
private:
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* FriendNameText;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* FriendLevelText;
};
