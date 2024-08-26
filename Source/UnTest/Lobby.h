#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Lobby.generated.h"

UCLASS()
class UNTEST_API ULobby: public UUserWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "LobbyHUD")
	void SetupLobbyHUD();

	UFUNCTION(BlueprintCallable, Category = "LobbyHUD")
	void UpdatePlayerList(const TArray<FString>& PlayerNames);

protected:
	virtual void NativeConstruct() override;

private:
	UPROPERTY(meta = (BindWidget))
	class UListView* PlayerListView;
	
	UPROPERTY(meta = (BindWidget))
	class UButton* StartGameButton;

	UPROPERTY(meta = (BindWidget))
	class UButton* LeaveLobbyButton;

	UFUNCTION()
	void OnStartGameClicked();

	UFUNCTION()
	void OnLeaveLobbyClicked();
};
