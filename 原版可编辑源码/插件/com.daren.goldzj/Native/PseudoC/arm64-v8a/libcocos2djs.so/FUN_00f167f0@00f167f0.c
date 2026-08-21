
undefined8 FUN_00f167f0(long param_1,int param_2,int param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  short sVar3;
  short sVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint local_50;
  int local_4c;
  ulong local_48;
  
  param_2 = *(int *)(param_1 + 0x38) + param_2;
  param_3 = *(int *)(param_1 + 0x3c) + param_3;
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else if (param_2 + -1 == *(int *)(**(long **)(param_1 + 0x18) + 3) >> 1) {
    iVar7 = *(int *)(param_1 + 0x20);
  }
  else {
    iVar7 = (*(int *)(**(long **)(param_1 + 0x18) + (long)((param_2 + -1) * 4) + 7) >> 1) + 1;
  }
  if (param_3 == 0) {
    iVar8 = 0;
  }
  else if (param_3 + -1 == *(int *)(**(long **)(param_1 + 0x28) + 3) >> 1) {
    iVar8 = *(int *)(param_1 + 0x30);
  }
  else {
    iVar8 = (*(int *)(**(long **)(param_1 + 0x28) + (long)((param_3 + -1) * 4) + 7) >> 1) + 1;
  }
  if (param_2 == *(int *)(**(long **)(param_1 + 0x18) + 3) >> 1) {
    iVar9 = *(int *)(param_1 + 0x20);
  }
  else {
    iVar9 = (*(int *)(**(long **)(param_1 + 0x18) + (long)(param_2 * 4) + 7) >> 1) + 1;
  }
  if (param_3 == *(int *)(**(long **)(param_1 + 0x28) + 3) >> 1) {
    iVar6 = *(int *)(param_1 + 0x30);
  }
  else {
    iVar6 = (*(int *)(**(long **)(param_1 + 0x28) + (long)(param_3 * 4) + 7) >> 1) + 1;
  }
  if (iVar9 - iVar7 == iVar6 - iVar8) {
    if (0 < iVar9 - iVar7) {
      puVar1 = *(ulong **)(param_1 + 8);
      puVar2 = *(ulong **)(param_1 + 0x10);
      do {
        local_48 = *puVar1;
        local_50 = (uint)*(ushort *)
                          ((local_48 & 0xffffffff00000000 | (ulong)*(uint *)(local_48 - 1)) + 7);
        local_4c = iVar7;
        sVar3 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                          (&local_50,&local_48,&local_4c);
        local_48 = *puVar2;
        local_50 = (uint)*(ushort *)
                          ((local_48 & 0xffffffff00000000 | (ulong)*(uint *)(local_48 - 1)) + 7);
        local_4c = iVar8;
        sVar4 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                          (&local_50,&local_48,&local_4c);
        if (sVar3 != sVar4) goto LAB_00f16998;
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + 1;
      } while (iVar9 != iVar7);
    }
    uVar5 = 1;
  }
  else {
LAB_00f16998:
    uVar5 = 0;
  }
  return uVar5;
}

