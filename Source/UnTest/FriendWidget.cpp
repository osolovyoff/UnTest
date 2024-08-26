#include "FriendWidget.h"

void UFriendWidget::SetupFriendWidget(const FFriendData& FriendData)
{
	if (this->FriendNameText)
	{
		this->FriendNameText->SetText(FText::FromString(FriendData.Nickname));
	}
}

void UFriendWidget::NativeConstruct()
{
	Super::NativeConstruct();
}
