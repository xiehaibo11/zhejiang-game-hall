
undefined8 FUN_00f169d4(ulong *param_1,int param_2,ulong *param_3,int param_4,int param_5)

{
  short sVar1;
  short sVar2;
  uint local_50;
  int local_4c;
  ulong local_48;
  
  if (0 < param_5) {
    do {
      local_48 = *param_1;
      local_50 = (uint)*(ushort *)
                        ((local_48 & 0xffffffff00000000 | (ulong)*(uint *)(local_48 - 1)) + 7);
      local_4c = param_2;
      sVar1 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                        (&local_50,&local_48,&local_4c);
      local_48 = *param_3;
      local_50 = (uint)*(ushort *)
                        ((local_48 & 0xffffffff00000000 | (ulong)*(uint *)(local_48 - 1)) + 7);
      local_4c = param_4;
      sVar2 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                        (&local_50,&local_48,&local_4c);
      if (sVar1 != sVar2) {
        return 0;
      }
      param_5 = param_5 + -1;
      param_2 = param_2 + 1;
      param_4 = param_4 + 1;
    } while (param_5 != 0);
  }
  return 1;
}

