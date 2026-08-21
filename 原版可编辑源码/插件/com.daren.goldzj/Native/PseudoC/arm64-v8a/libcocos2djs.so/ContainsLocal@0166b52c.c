
/* v8::internal::compiler::BytecodeLoopAssignments::ContainsLocal(int) const */

uint __thiscall
v8::internal::compiler::BytecodeLoopAssignments::ContainsLocal
          (BytecodeLoopAssignments *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  
  uVar1 = *(int *)this + param_1;
  puVar3 = (ulong *)(*(long *)(this + 8) + 8);
  if (*(int *)(*(long *)(this + 8) + 4) != 1) {
    uVar2 = uVar1 + 0x3f;
    if (-1 < (int)uVar1) {
      uVar2 = uVar1;
    }
    puVar3 = (ulong *)(*puVar3 + (long)((int)uVar2 >> 6) * 8);
  }
  return (uint)(*puVar3 >> ((ulong)uVar1 & 0x3f)) & 1;
}

