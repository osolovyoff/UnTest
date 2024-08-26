#include "Lobby.h"
#include "Components/ListView.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"

class UTextBlock;

void ULobby::SetupLobbyHUD()
{
	// Setup logic for the lobby HUD
}

void ULobby::NativeConstruct()
{
	Super::NativeConstruct();

	if (StartGameButton)
	{
		StartGameButton->OnClicked.AddDynamic(this, &ULobby::OnStartGameClicked);
	}

	if (LeaveLobbyButton)
	{
		LeaveLobbyButton->OnClicked.AddDynamic(this, &ULobby::OnLeaveLobbyClicked);
	}

	
}

void ULobby::UpdatePlayerList(const TArray<FString>& PlayerNames)
{
	if (PlayerListView)
	{
		PlayerListView->ClearListItems();
		for (const FString& PlayerName : PlayerNames)
		{
			UTextBlock* TextBlock = NewObject<UTextBlock>();
			TextBlock->SetText(FText::FromString(PlayerName));
			PlayerListView->AddItem(TextBlock);
		}
	}
}


void ULobby::OnStartGameClicked()
{
	// Handle the start game button click
}

void ULobby::OnLeaveLobbyClicked()
{
	// Logic to leave the lobby
}
