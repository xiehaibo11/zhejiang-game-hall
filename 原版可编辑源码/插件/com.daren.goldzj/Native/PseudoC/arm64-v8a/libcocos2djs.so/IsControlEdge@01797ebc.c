
/* v8::internal::compiler::NodeProperties::IsControlEdge(v8::internal::compiler::Edge) */

bool v8::internal::compiler::NodeProperties::IsControlEdge(long param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  
  plVar6 = (long *)(param_1 + (ulong)(*(uint *)(param_1 + 0x10) >> 1) * 0x18 + 0x18);
  if ((*(uint *)(param_1 + 0x10) & 1) == 0) {
    plVar6 = (long *)*plVar6;
  }
  iVar1 = *(int *)((Operator *)*plVar6 + 0x14);
  uVar4 = OperatorProperties::HasContextInput((Operator *)*plVar6);
  uVar5 = OperatorProperties::HasFrameStateInput((Operator *)*plVar6);
  iVar2 = *(int *)(*plVar6 + 0x1c);
  if (iVar2 == 0) {
    bVar3 = false;
  }
  else {
    iVar1 = iVar1 + (uVar4 & 1) + (uVar5 & 1) + *(int *)(*plVar6 + 0x18);
    uVar4 = *(uint *)(param_1 + 0x10) >> 1;
    bVar3 = (int)uVar4 < iVar2 + iVar1 && iVar1 <= (int)uVar4;
  }
  return bVar3;
}

