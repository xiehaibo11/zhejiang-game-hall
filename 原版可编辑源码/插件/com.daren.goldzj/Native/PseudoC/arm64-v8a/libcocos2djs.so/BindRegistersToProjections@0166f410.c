
/* v8::internal::compiler::BytecodeGraphBuilder::Environment::BindRegistersToProjections(v8::internal::interpreter::Register,
   v8::internal::compiler::Node*,
   v8::internal::compiler::BytecodeGraphBuilder::Environment::FrameStateAttachmentMode) */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::Environment::BindRegistersToProjections
          (Environment *this,int param_2,Node *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  Node *pNVar5;
  Operator *pOVar6;
  ulong uVar7;
  BytecodeGraphBuilder *this_00;
  long lVar8;
  int local_50 [2];
  Node *local_48;
  
  local_50[0] = param_2;
  if (param_2 < 0) {
    uVar7 = interpreter::Register::ToParameterIndex((Register *)local_50,*(int *)(this + 0xc));
    uVar7 = uVar7 & 0xffffffff;
  }
  else {
    uVar7 = (ulong)(uint)(*(int *)(this + 0x58) + param_2);
  }
  if (param_4 == 0) {
    lVar8 = *(long *)this;
    iVar2 = *(int *)(this + 0x5c);
    uVar3 = OperatorProperties::HasFrameStateInput(*(Operator **)param_3);
    if ((uVar3 & 1) != 0) {
      iVar1 = *(int *)(lVar8 + 0x90);
      uVar4 = BytecodeAnalysis::GetOutLivenessFor(*(BytecodeAnalysis **)(lVar8 + 0xa0),iVar1);
      pNVar5 = (Node *)Checkpoint(*(Environment **)(lVar8 + 0xa8),iVar1,
                                  (long)iVar2 - (long)(int)uVar7,uVar4);
      NodeProperties::ReplaceFrameStateInput(param_3,pNVar5);
    }
  }
  if (0 < *(int *)(*(long *)param_3 + 0x20)) {
    uVar3 = 0;
    do {
      this_00 = *(BytecodeGraphBuilder **)this;
      pOVar6 = (Operator *)
               CommonOperatorBuilder::Projection
                         (*(CommonOperatorBuilder **)(*(long *)(this_00 + 0x10) + 8),uVar3);
      local_48 = param_3;
      uVar4 = MakeNode(this_00,pOVar6,1,&local_48,false);
      if ((ulong)(*(long *)(this + 0x30) - *(long *)(this + 0x28) >> 3) <= (long)(int)uVar7 + uVar3)
      {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)
       (*(long *)(this + 0x28) + (-(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar7 << 3) + uVar3 * 8) =
           uVar4;
      uVar3 = uVar3 + 1;
    } while ((long)uVar3 < (long)*(int *)(*(long *)param_3 + 0x20));
  }
  return;
}

