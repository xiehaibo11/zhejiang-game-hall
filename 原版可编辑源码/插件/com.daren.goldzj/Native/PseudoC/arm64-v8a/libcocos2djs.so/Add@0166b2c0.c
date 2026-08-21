
/* v8::internal::compiler::BytecodeLoopAssignments::Add(v8::internal::interpreter::Register) */

void __thiscall
v8::internal::compiler::BytecodeLoopAssignments::Add(BytecodeLoopAssignments *this,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  int local_8 [2];
  
  lVar6 = *(long *)(this + 8);
  if (param_2 < 0) {
    local_8[0] = param_2;
    uVar4 = interpreter::Register::ToParameterIndex((Register *)local_8,*(int *)this);
    uVar3 = (uint)uVar4;
    iVar2 = *(int *)(lVar6 + 4);
  }
  else {
    iVar2 = *(int *)(lVar6 + 4);
    uVar3 = *(int *)this + param_2;
    uVar4 = (ulong)uVar3;
  }
  if (iVar2 == 1) {
    puVar5 = (ulong *)(lVar6 + 8);
  }
  else {
    uVar1 = uVar3 + 0x3f;
    if (-1 < (int)uVar3) {
      uVar1 = uVar3;
    }
    uVar4 = (ulong)uVar3;
    puVar5 = (ulong *)(*(long *)(lVar6 + 8) + (long)((int)uVar1 >> 6) * 8);
  }
  *puVar5 = *puVar5 | 1L << (uVar4 & 0x3f);
  return;
}

