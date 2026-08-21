
int FUN_010a6650(ulong param_1,ulong param_2)

{
  uint *puVar1;
  int *piVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  
  uVar3 = param_1 & 0xffffffff00000000;
  iVar6 = (*(int *)(param_2 + 3) >> 1) + -2;
  uVar5 = param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 0xb);
  iVar4 = 0;
  if (iVar6 != 0) {
    iVar8 = 8;
    uVar9 = *(uint *)(param_2 + 0xf);
    if ((uVar9 & 1) != 0) goto LAB_010a669c;
    do {
      iVar4 = iVar4 + 1;
      do {
        iVar6 = iVar6 + -1;
        iVar8 = iVar8 + 4;
        if (iVar6 == 0) goto LAB_010a66ac;
        uVar9 = *(uint *)(param_2 + 7 + (long)iVar8);
        if ((uVar9 & 1) == 0) break;
LAB_010a669c:
      } while (uVar9 == *(uint *)(uVar3 + 0xa8));
    } while( true );
  }
LAB_010a66ac:
  piVar2 = (int *)(param_1 + 0xb);
  if (*(short *)((uVar3 | 7) + (ulong)*(uint *)(param_1 - 1)) != 0x423) {
    piVar2 = (int *)(uVar5 + 3);
  }
  if (*piVar2 >> 1 == 0) {
    return iVar4;
  }
  lVar7 = 0;
  iVar6 = 0;
  puVar1 = (uint *)(uVar5 + 7);
  uVar9 = *puVar1;
  if ((uVar9 & 1) != 0) goto LAB_010a6704;
  do {
    iVar6 = iVar6 + 1;
    do {
      lVar7 = lVar7 + 4;
      if ((ulong)(uint)(*piVar2 >> 1) * 4 - lVar7 == 0) {
        return iVar6 + iVar4;
      }
      uVar9 = *(uint *)((long)puVar1 + (long)(int)lVar7);
      if ((uVar9 & 1) == 0) break;
LAB_010a6704:
    } while (uVar9 == *(uint *)(uVar3 + 0xa8));
  } while( true );
}

