
/* v8::internal::compiler::BytecodeGraphBuilder::Environment::BindRegister(v8::internal::interpreter::Register,
   v8::internal::compiler::Node*,
   v8::internal::compiler::BytecodeGraphBuilder::Environment::FrameStateAttachmentMode) */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::Environment::BindRegister
          (Environment *this,int param_2,Node *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  Node *pNVar5;
  long lVar6;
  int local_48 [2];
  
  local_48[0] = param_2;
  if (param_2 < 0) {
    param_2 = interpreter::Register::ToParameterIndex((Register *)local_48,*(int *)(this + 0xc));
  }
  else {
    param_2 = *(int *)(this + 0x58) + param_2;
  }
  if (param_4 == 0) {
    lVar6 = *(long *)this;
    iVar2 = *(int *)(this + 0x5c);
    uVar3 = OperatorProperties::HasFrameStateInput(*(Operator **)param_3);
    if ((uVar3 & 1) != 0) {
      iVar1 = *(int *)(lVar6 + 0x90);
      uVar4 = BytecodeAnalysis::GetOutLivenessFor(*(BytecodeAnalysis **)(lVar6 + 0xa0),iVar1);
      pNVar5 = (Node *)Checkpoint(*(Environment **)(lVar6 + 0xa8),iVar1,(long)iVar2 - (long)param_2,
                                  uVar4);
      NodeProperties::ReplaceFrameStateInput(param_3,pNVar5);
    }
  }
  if ((ulong)(long)param_2 < (ulong)(*(long *)(this + 0x30) - *(long *)(this + 0x28) >> 3)) {
    *(Node **)(*(long *)(this + 0x28) + (long)param_2 * 8) = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

