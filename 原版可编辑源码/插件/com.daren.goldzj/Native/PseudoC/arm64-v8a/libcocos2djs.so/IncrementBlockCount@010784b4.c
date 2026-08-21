
/* v8::internal::CoverageInfo::IncrementBlockCount(int) */

void __thiscall v8::internal::CoverageInfo::IncrementBlockCount(CoverageInfo *this,int param_1)

{
  ulong uVar1;
  
  uVar1 = (long)(param_1 << 4) | 0xf;
  *(uint *)(*(long *)this + uVar1) = *(int *)(*(long *)this + uVar1) + 2U & 0xfffffffe;
  return;
}

