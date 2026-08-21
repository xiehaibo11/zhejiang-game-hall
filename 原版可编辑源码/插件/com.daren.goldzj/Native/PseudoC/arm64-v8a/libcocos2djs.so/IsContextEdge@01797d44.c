
/* v8::internal::compiler::NodeProperties::IsContextEdge(v8::internal::compiler::Edge) */

bool v8::internal::compiler::NodeProperties::IsContextEdge(long param_1)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  
  plVar4 = (long *)(param_1 + (ulong)(*(uint *)(param_1 + 0x10) >> 1) * 0x18 + 0x18);
  if ((*(uint *)(param_1 + 0x10) & 1) == 0) {
    plVar4 = (long *)*plVar4;
  }
  uVar1 = *(uint *)((Operator *)*plVar4 + 0x14);
  uVar3 = OperatorProperties::HasContextInput((Operator *)*plVar4);
  if ((uVar3 & 1) == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = uVar1 == *(uint *)(param_1 + 0x10) >> 1;
  }
  return bVar2;
}

