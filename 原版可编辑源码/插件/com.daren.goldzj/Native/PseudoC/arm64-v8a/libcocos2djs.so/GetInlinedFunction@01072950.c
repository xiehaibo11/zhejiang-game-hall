
/* v8::internal::DeoptimizationData::GetInlinedFunction(int) */

ulong __thiscall
v8::internal::DeoptimizationData::GetInlinedFunction(DeoptimizationData *this,int param_1)

{
  ulong uVar1;
  uint *puVar2;
  
  uVar1 = *(ulong *)this;
  if (param_1 == -1) {
    puVar2 = (uint *)(uVar1 + 0x1f);
  }
  else {
    puVar2 = (uint *)((uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 + 0xf)) +
                      (long)(param_1 << 2) + 7);
  }
  return uVar1 & 0xffffffff00000000 | (ulong)*puVar2;
}

