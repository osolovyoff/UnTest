#include "MainHUD.h"

#include "Blueprint/UserWidget.h"

AMainHUD::AMainHUD()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AMainHUD::BeginPlay()
{
	Super::BeginPlay();

	if (LobbyHUDClass)
	{
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), LobbyHUDClass);
		if (CurrentWidget)
		{
			CurrentWidget->AddToViewport();
		}
	}
}

