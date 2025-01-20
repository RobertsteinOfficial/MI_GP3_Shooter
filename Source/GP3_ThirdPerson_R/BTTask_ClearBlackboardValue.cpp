// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_ClearBlackboardValue.h"
#include "BehaviorTree/BlackboardComponent.h"


UBTTask_ClearBlackboardValue::UBTTask_ClearBlackboardValue()
{
	NodeName = TEXT("Clear Blackboard Value");

	bCreateNodeInstance = true;
}

uint16 UBTTask_ClearBlackboardValue::GetInstanceMemorySize() const
{
	return sizeof(MyBTStruct);
}

EBTNodeResult::Type UBTTask_ClearBlackboardValue::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{/*
	MyBTStruct* value = reinterpret_cast<MyBTStruct*>(NodeMemory);
	value->value = 2;

	bNotifyTick = true;*/

	Super::ExecuteTask(OwnerComp, NodeMemory);

	OwnerComp.GetBlackboardComponent()->ClearValue(GetSelectedBlackboardKey());

	return EBTNodeResult::Succeeded;
}

//void UBTTask_ClearBlackboardValue::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
//{
//	if (NodeMemory == nullptr) return;
//
//	MyBTStruct* value = reinterpret_cast<MyBTStruct*>(NodeMemory);
//
//	UE_LOG(LogTemp, Warning, TEXT("Value %d"), value->value);
//}
