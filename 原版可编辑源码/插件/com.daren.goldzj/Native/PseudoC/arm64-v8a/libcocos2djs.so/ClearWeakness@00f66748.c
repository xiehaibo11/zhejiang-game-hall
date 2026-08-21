
/* v8::internal::GlobalHandles::ClearWeakness(unsigned long*) */

ulong v8::internal::GlobalHandles::ClearWeakness(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = param_1[2];
  param_1[2] = 0;
  *(byte *)((long)param_1 + 0xb) = *(byte *)((long)param_1 + 0xb) & 0xf8 | 1;
  return uVar1;
}

