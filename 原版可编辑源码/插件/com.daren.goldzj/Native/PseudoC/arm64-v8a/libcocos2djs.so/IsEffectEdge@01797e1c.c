
/* v8::internal::compiler::NodeProperties::IsEffectEdge(v8::internal::compiler::Edge) */

bool v8::internal::compiler::NodeProperties::IsEffectEdge(long param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  
  plVar5 = (long *)(param_1 + (ulong)(*(uint *)(param_1 + 0x10) >> 1) * 0x18 + 0x18);
  if ((*(uint *)(param_1 + 0x10) & 1) == 0) {
    plVar5 = (long *)*plVar5;
  }
  iVar1 = *(int *)((Operator *)*plVar5 + 0x14);
  uVar3 = OperatorProperties::HasContextInput((Operator *)*plVar5);
  uVar4 = OperatorProperties::HasFrameStateInput((Operator *)*plVar5);
  if (*(int *)(*plVar5 + 0x18) == 0) {
    bVar2 = false;
  }
  else {
    iVar1 = iVar1 + (uVar3 & 1) + (uVar4 & 1);
    uVar3 = *(uint *)(param_1 + 0x10) >> 1;
    bVar2 = (int)uVar3 < *(int *)(*plVar5 + 0x18) + iVar1 && iVar1 <= (int)uVar3;
  }
  return bVar2;
}

