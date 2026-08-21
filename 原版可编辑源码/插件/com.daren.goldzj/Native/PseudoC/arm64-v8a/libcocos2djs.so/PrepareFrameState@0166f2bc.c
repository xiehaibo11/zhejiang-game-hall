
/* v8::internal::compiler::BytecodeGraphBuilder::PrepareFrameState(v8::internal::compiler::Node*,
   v8::internal::compiler::OutputFrameStateCombine) */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::PrepareFrameState
          (BytecodeGraphBuilder *this,Node *param_1,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  Node *pNVar4;
  
  uVar2 = OperatorProperties::HasFrameStateInput(*(Operator **)param_1);
  if ((uVar2 & 1) != 0) {
    iVar1 = *(int *)(this + 0x90);
    uVar3 = BytecodeAnalysis::GetOutLivenessFor(*(BytecodeAnalysis **)(this + 0xa0),iVar1);
    pNVar4 = (Node *)Environment::Checkpoint(*(Environment **)(this + 0xa8),iVar1,param_3,uVar3);
    NodeProperties::ReplaceFrameStateInput(param_1,pNVar4);
    return;
  }
  return;
}

