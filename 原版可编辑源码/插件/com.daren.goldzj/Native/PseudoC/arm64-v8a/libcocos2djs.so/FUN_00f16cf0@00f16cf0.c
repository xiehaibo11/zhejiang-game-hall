
bool FUN_00f16cf0(long param_1,int param_2,int param_3)

{
  short sVar1;
  short sVar2;
  uint local_30;
  int local_2c;
  ulong local_28;
  
  local_28 = **(ulong **)(param_1 + 8);
  local_2c = *(int *)(param_1 + 0x10) + param_2;
  local_30 = (uint)*(ushort *)((local_28 & 0xffffffff00000000 | (ulong)*(uint *)(local_28 - 1)) + 7)
  ;
  sVar1 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                    (&local_30,&local_28,&local_2c);
  local_28 = **(ulong **)(param_1 + 0x18);
  local_2c = *(int *)(param_1 + 0x20) + param_3;
  local_30 = (uint)*(ushort *)((local_28 & 0xffffffff00000000 | (ulong)*(uint *)(local_28 - 1)) + 7)
  ;
  sVar2 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                    (&local_30,&local_28,&local_2c);
  return sVar1 == sVar2;
}

