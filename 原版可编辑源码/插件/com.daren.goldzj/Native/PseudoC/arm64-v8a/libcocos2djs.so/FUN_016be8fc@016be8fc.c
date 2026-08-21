
void FUN_016be8fc(JSGraph *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,Node **param_6,int param_7,undefined8 param_8,undefined8 param_9
                 )

{
  Graph *this;
  CommonOperatorBuilder *pCVar1;
  undefined4 uVar2;
  Operator *pOVar3;
  Node *pNVar4;
  undefined8 uVar5;
  Node *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  this = *(Graph **)param_1;
  pCVar1 = *(CommonOperatorBuilder **)(param_1 + 8);
  pOVar3 = (Operator *)v8::internal::compiler::CommonOperatorBuilder::StateValues(pCVar1,param_7,0);
  pNVar4 = (Node *)v8::internal::compiler::Graph::NewNode(this,pOVar3,param_7,param_6,false);
  uVar2 = v8::internal::Builtins::GetContinuationBailoutId(param_3);
  uVar5 = v8::internal::compiler::CommonOperatorBuilder::CreateFrameStateFunctionInfo
                    (pCVar1,param_2,param_7,0,param_9);
  pOVar3 = (Operator *)
           v8::internal::compiler::CommonOperatorBuilder::FrameState
                     (pCVar1,uVar2,0xffffffffffffffff,uVar5);
  uVar5 = v8::internal::compiler::JSGraph::EmptyStateValues(param_1);
  local_80 = v8::internal::compiler::JSGraph::EmptyStateValues(param_1);
  local_90 = pNVar4;
  uStack_88 = uVar5;
  uStack_78 = param_5;
  local_70 = param_4;
  uStack_68 = param_8;
  v8::internal::compiler::Graph::NewNode(this,pOVar3,6,&local_90,false);
  return;
}

