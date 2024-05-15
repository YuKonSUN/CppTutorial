#include "CppTutorialEditor.h"
#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"

IMPLEMENT_GAME_MODULE(FCppTutorialEditorModule, CppTutorialEditor);

void FCppTutorialEditorModule::StartupModule()
{
	if (GUnrealEd)
	{
		TSharedPtr<FMovementComponentVisualizer> MoveVisualizer = MakeShareable(new FMovementComponentVisualizer);
		GUnrealEd->RegisterComponentVisualizer(UMoveComponent::StaticClass()->GetFName(), MoveVisualizer);
		MoveVisualizer->OnRegister();
	}
}

void FCppTutorialEditorModule::ShutdownModule()
{
	if (GUnrealEd)
	{
		GUnrealEd->UnregisterComponentVisualizer(UMoveComponent::StaticClass()->GetFName());
	}
}
