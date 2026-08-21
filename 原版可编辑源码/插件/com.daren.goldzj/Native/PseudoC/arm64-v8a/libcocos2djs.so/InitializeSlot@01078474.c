
/* v8::internal::CoverageInfo::InitializeSlot(int, int, int) */

void __thiscall
v8::internal::CoverageInfo::InitializeSlot(CoverageInfo *this,int param_1,int param_2,int param_3)

{
  *(int *)(*(long *)this + ((long)(param_1 << 4) | 7U)) = param_2 << 1;
  *(int *)(*(long *)this + (long)(int)(param_1 << 4 | 4) + 7) = param_3 << 1;
  *(undefined4 *)(*(long *)this + ((long)(param_1 << 4) | 0xfU)) = 0;
  return;
}

