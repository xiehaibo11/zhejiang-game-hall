
void pvmp3_alias_reduction(long param_1,long param_2,int *param_3,int *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  long lVar17;
  int *piVar18;
  int *piVar19;
  
  iVar10 = (int)((long)(*param_3 << 0x10) * 0x71c71c8 >> 0x2f);
  *param_3 = iVar10;
  if ((*(int *)(param_2 + 0x10) == 0) || (*(int *)(param_2 + 0x14) != 2)) {
    uVar11 = 0x1f;
    if (iVar10 + 1 < 0x1f) {
      uVar11 = iVar10 + 1;
    }
  }
  else {
    if (*(int *)(param_2 + 0x18) == 0) {
      return;
    }
    if (*param_4 == 2) {
      uVar11 = 3;
      if (param_4[4] != 2) {
        uVar11 = 1;
      }
    }
    else {
      uVar11 = 1;
    }
  }
  iVar10 = (int)uVar11 >> 1;
  lVar17 = param_1 + (ulong)(iVar10 - 1) * 0x90;
  piVar12 = (int *)(param_1 + 0x44);
  piVar13 = (int *)(param_1 + 0x48);
  iVar14 = 4;
  piVar15 = &DAT_019986f8;
  piVar16 = (int *)(lVar17 + 0xd4);
  piVar18 = (int *)(lVar17 + 0xd8);
  piVar19 = &DAT_019986d8;
  do {
    lVar17 = (long)*piVar19;
    lVar2 = (long)piVar19[1];
    lVar1 = (long)*piVar15;
    lVar3 = (long)piVar15[1];
    piVar8 = piVar13;
    piVar9 = piVar12;
    if (iVar10 != 0) {
      lVar7 = 0;
      iVar6 = iVar10;
      do {
        piVar8 = (int *)((long)piVar12 + lVar7);
        piVar9 = (int *)((long)piVar13 + lVar7);
        iVar4 = *piVar8;
        iVar5 = *piVar9;
        iVar6 = iVar6 + -1;
        lVar7 = lVar7 + 0x90;
        *piVar8 = (int)((ulong)((iVar4 << 1) * lVar17) >> 0x20) -
                  (int)((ulong)((iVar5 << 1) * lVar1) >> 0x20);
        *piVar9 = (int)((ulong)((iVar4 << 1) * lVar1) >> 0x20) +
                  (int)((ulong)((iVar5 << 1) * lVar17) >> 0x20);
        iVar5 = piVar8[-1];
        iVar4 = piVar9[1];
        piVar8[-1] = (int)((ulong)((iVar5 << 1) * lVar2) >> 0x20) -
                     (int)((ulong)((iVar4 << 1) * lVar3) >> 0x20);
        piVar9[1] = (int)((ulong)((iVar5 << 1) * lVar3) >> 0x20) +
                    (int)((ulong)((iVar4 << 1) * lVar2) >> 0x20);
        iVar4 = piVar8[0x12];
        iVar5 = piVar9[0x12];
        piVar8[0x12] = (int)((ulong)((iVar4 << 1) * lVar17) >> 0x20) -
                       (int)((ulong)((iVar5 << 1) * lVar1) >> 0x20);
        piVar9[0x12] = (int)((ulong)((iVar4 << 1) * lVar1) >> 0x20) +
                       (int)((ulong)((iVar5 << 1) * lVar17) >> 0x20);
        iVar4 = piVar8[0x11];
        iVar5 = piVar9[0x13];
        piVar8[0x11] = (int)((ulong)((iVar4 << 1) * lVar2) >> 0x20) -
                       (int)((ulong)((iVar5 << 1) * lVar3) >> 0x20);
        piVar9[0x13] = (int)((ulong)((iVar4 << 1) * lVar3) >> 0x20) +
                       (int)((ulong)((iVar5 << 1) * lVar2) >> 0x20);
        piVar8 = piVar18;
        piVar9 = piVar16;
      } while (iVar6 != 0);
    }
    piVar19 = piVar19 + 2;
    piVar15 = piVar15 + 2;
    piVar12 = piVar12 + -2;
    piVar13 = piVar13 + 2;
    if ((uVar11 & 1) != 0) {
      iVar6 = *piVar9;
      iVar4 = *piVar8;
      *piVar9 = (int)((ulong)((iVar6 << 1) * lVar17) >> 0x20) -
                (int)((ulong)((iVar4 << 1) * lVar1) >> 0x20);
      *piVar8 = (int)((ulong)((iVar4 << 1) * lVar17) >> 0x20) +
                (int)((ulong)((iVar6 << 1) * lVar1) >> 0x20);
      iVar4 = piVar9[-1];
      iVar6 = piVar8[1];
      piVar9[-1] = (int)((ulong)((iVar4 << 1) * lVar2) >> 0x20) -
                   (int)((ulong)((iVar6 << 1) * lVar3) >> 0x20);
      piVar8[1] = (int)((ulong)((iVar6 << 1) * lVar2) >> 0x20) +
                  (int)((ulong)((iVar4 << 1) * lVar3) >> 0x20);
    }
    iVar14 = iVar14 + -1;
    piVar16 = piVar16 + -2;
    piVar18 = piVar18 + 2;
  } while (iVar14 != 0);
  return;
}

