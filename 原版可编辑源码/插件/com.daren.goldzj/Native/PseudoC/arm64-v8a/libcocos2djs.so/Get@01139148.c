
/* v8::internal::SlicedString::Get(int) */

void __thiscall v8::internal::SlicedString::Get(SlicedString *this,int param_1)

{
  ulong uVar1;
  uint local_20;
  int local_1c;
  ulong local_18;
  
  uVar1 = *(ulong *)this;
  local_1c = param_1 + (*(int *)(uVar1 + 0xf) >> 1);
  local_18 = uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 + 0xb);
  local_20 = (uint)*(ushort *)((uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(local_18 - 1)) + 7);
  _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
            (&local_20,&local_18,&local_1c);
  return;
}

