
/* v8::internal::compiler::BytecodeLoopAssignments::ContainsParameter(int) const */

uint __thiscall
v8::internal::compiler::BytecodeLoopAssignments::ContainsParameter
          (BytecodeLoopAssignments *this,int param_1)

{
  int iVar1;
  ulong *puVar2;
  
  puVar2 = (ulong *)(*(long *)(this + 8) + 8);
  if (*(int *)(*(long *)(this + 8) + 4) != 1) {
    iVar1 = param_1 + 0x3f;
    if (-1 < param_1) {
      iVar1 = param_1;
    }
    puVar2 = (ulong *)(*puVar2 + (long)(iVar1 >> 6) * 8);
  }
  return (uint)(*puVar2 >> ((ulong)(uint)param_1 & 0x3f)) & 1;
}

