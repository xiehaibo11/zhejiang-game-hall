
/* v8::internal::compiler::BytecodeGraphBuilder::Environment::RecordAfterState(v8::internal::compiler::Node*,
   v8::internal::compiler::BytecodeGraphBuilder::Environment::FrameStateAttachmentMode) */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::Environment::RecordAfterState
          (Environment *this,Node *param_1,int param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  Node *pNVar4;
  long lVar5;
  
  if (param_3 == 0) {
    lVar5 = *(long *)this;
    uVar2 = OperatorProperties::HasFrameStateInput(*(Operator **)param_1);
    if ((uVar2 & 1) != 0) {
      iVar1 = *(int *)(lVar5 + 0x90);
      uVar3 = BytecodeAnalysis::GetOutLivenessFor(*(BytecodeAnalysis **)(lVar5 + 0xa0),iVar1);
      pNVar4 = (Node *)Checkpoint(*(Environment **)(lVar5 + 0xa8),iVar1,0xffffffffffffffff,uVar3);
      NodeProperties::ReplaceFrameStateInput(param_1,pNVar4);
      return;
    }
  }
  return;
}

