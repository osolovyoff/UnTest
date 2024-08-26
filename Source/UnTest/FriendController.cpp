#include "FriendController.h"

#include "GameplayTags.h"
#include "GameplayTagsManager.h"

TArray<FFriendData> UFriendController::GetConnectedFriends() const
{
	// checkf(GameplayRootTag.IsValid(), TEXT("ConstructGameplayTagTree() must be called before PopulateTreeFromDataTable()"));
	// static const FString ContextString(TEXT("UGameplayTagsManager::PopulateTreeFromDataTable"));
	//
	// TArray<FGameplayTagTableRow*> TagTableRows;
	// InTable->GetAllRows<FGameplayTagTableRow>(ContextString, TagTableRows);
	//
	// FName SourceName = InTable->GetOutermost()->GetFName();
	//
	// FGameplayTagSource* FoundSource = FindOrAddTagSource(SourceName, EGameplayTagSourceType::DataTable);
	//
	// for (const FGameplayTagTableRow* TagRow : TagTableRows)
	// {
	// 	if (TagRow)
	// 	{
	// 		AddTagTableRow(*TagRow, SourceName);
	// 	}
	// }
	TArray<FFriendData> result;
	return result;
}

TArray<FFriendData> UFriendController::GetDisconnectedFriends() const
{
	static const FString ContextString(TEXT("UGameplayTagsManager::PopulateTreeFromDataTable"));
	
	TArray<FGameplayTagTableRow*> TagTableRows;
	this->FriendDataTable->GetAllRows<FGameplayTagTableRow>(ContextString, TagTableRows);

	TArray<FFriendData> Data;
	for (const FGameplayTagTableRow* TagRow : TagTableRows)
	{
		if (TagRow)
		{
			// TagRow
		}
	}
	return Data;
}

void UFriendController::SetDataTable(UDataTable* InDataTable)
{
	
}

void UFriendController::SimulateConnectionChanges()
{
	
}
