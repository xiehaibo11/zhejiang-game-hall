
/* v8::internal::compiler::NodeProperties::IsValueEdge(v8::internal::compiler::Edge) */

bool v8::internal::compiler::NodeProperties::IsValueEdge(long param_1)

{
  uint uVar1;
  long *plVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10) >> 1;
  plVar2 = (long *)(param_1 + (ulong)uVar1 * 0x18 + 0x18);
  if ((*(uint *)(param_1 + 0x10) & 1) == 0) {
    plVar2 = (long *)*plVar2;
  }
  return (int)uVar1 < *(int *)(*plVar2 + 0x14);
}

