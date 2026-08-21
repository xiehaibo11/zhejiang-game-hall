
void pvmp3_alias_reduction(long param_1,long param_2,int *param_3,int *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  
  iVar11 = (int)((long)(*param_3 << 0x10) * 0x71c71c8 >> 0x2f);
  *param_3 = iVar11;
  if ((*(int *)(param_2 + 0x10) == 0) || (*(int *)(param_2 + 0x14) != 2)) {
    if (0x1d < iVar11) {
      iVar11 = 0x1e;
    }
    uVar12 = iVar11 + 1;
  }
  else {
    if (*(int *)(param_2 + 0x18) == 0) {
      return;
    }
    if (*param_4 == 2) {
      uVar12 = 3;
      if (param_4[4] != 2) {
        uVar12 = 1;
      }
    }
    else {
      uVar12 = 1;
    }
  }
  piVar13 = (int *)(param_1 + 0x44);
  piVar14 = (int *)(param_1 + 0x48);
  iVar11 = 4;
  piVar15 = &DAT_01438788;
  piVar16 = &DAT_01438768;
  do {
    lVar1 = (long)*piVar16;
    lVar3 = (long)piVar16[1];
    lVar2 = (long)*piVar15;
    lVar4 = (long)piVar15[1];
    piVar9 = piVar14;
    piVar10 = piVar13;
    if ((int)uVar12 >> 1 != 0) {
      lVar8 = 0;
      iVar7 = (int)uVar12 >> 1;
      do {
        piVar10 = (int *)((long)piVar13 + lVar8);
        piVar9 = (int *)((long)piVar14 + lVar8);
        iVar5 = *piVar10;
        iVar6 = *piVar9;
        iVar7 = iVar7 + -1;
        lVar8 = lVar8 + 0x90;
        *piVar10 = (int)((ulong)((iVar5 << 1) * lVar1) >> 0x20) -
                   (int)((ulong)((iVar6 << 1) * lVar2) >> 0x20);
        *piVar9 = (int)((ulong)((iVar5 << 1) * lVar2) >> 0x20) +
                  (int)((ulong)((iVar6 << 1) * lVar1) >> 0x20);
        iVar6 = piVar10[-1];
        iVar5 = piVar9[1];
        piVar10[-1] = (int)((ulong)((iVar6 << 1) * lVar3) >> 0x20) -
                      (int)((ulong)((iVar5 << 1) * lVar4) >> 0x20);
        piVar9[1] = (int)((ulong)((iVar6 << 1) * lVar4) >> 0x20) +
                    (int)((ulong)((iVar5 << 1) * lVar3) >> 0x20);
        iVar5 = piVar10[0x12];
        iVar6 = piVar9[0x12];
        piVar10[0x12] =
             (int)((ulong)((iVar5 << 1) * lVar1) >> 0x20) -
             (int)((ulong)((iVar6 << 1) * lVar2) >> 0x20);
        piVar9[0x12] = (int)((ulong)((iVar5 << 1) * lVar2) >> 0x20) +
                       (int)((ulong)((iVar6 << 1) * lVar1) >> 0x20);
        iVar5 = piVar10[0x11];
        iVar6 = piVar9[0x13];
        piVar10[0x11] =
             (int)((ulong)((iVar5 << 1) * lVar3) >> 0x20) -
             (int)((ulong)((iVar6 << 1) * lVar4) >> 0x20);
        piVar9[0x13] = (int)((ulong)((iVar5 << 1) * lVar4) >> 0x20) +
                       (int)((ulong)((iVar6 << 1) * lVar3) >> 0x20);
      } while (iVar7 != 0);
      piVar10 = (int *)((long)piVar13 + lVar8);
      piVar9 = (int *)((long)piVar14 + lVar8);
    }
    piVar16 = piVar16 + 2;
    piVar15 = piVar15 + 2;
    piVar13 = piVar13 + -2;
    piVar14 = piVar14 + 2;
    if ((uVar12 & 1) != 0) {
      iVar7 = *piVar10;
      iVar5 = *piVar9;
      *piVar10 = (int)((ulong)((iVar7 << 1) * lVar1) >> 0x20) -
                 (int)((ulong)((iVar5 << 1) * lVar2) >> 0x20);
      *piVar9 = (int)((ulong)((iVar5 << 1) * lVar1) >> 0x20) +
                (int)((ulong)((iVar7 << 1) * lVar2) >> 0x20);
      iVar5 = piVar10[-1];
      iVar7 = piVar9[1];
      piVar10[-1] = (int)((ulong)((iVar5 << 1) * lVar3) >> 0x20) -
                    (int)((ulong)((iVar7 << 1) * lVar4) >> 0x20);
      piVar9[1] = (int)((ulong)((iVar7 << 1) * lVar3) >> 0x20) +
                  (int)((ulong)((iVar5 << 1) * lVar4) >> 0x20);
    }
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  return;
}

