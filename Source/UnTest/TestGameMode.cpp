#include "TestGameMode.h"
#include "MainHUD.h"

ATestGameMode::ATestGameMode()
{
	PrimaryActorTick.bCanEverTick = false;
	HUDClass = AMainHUD::StaticClass();
}