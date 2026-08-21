
void IDEA_set_decrypt_key(long param_1,int *param_2)

{
  bool bVar1;
  uint *puVar2;
  long lVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  
  puVar5 = (uint *)(param_1 + 0xc0);
  piVar6 = param_2;
  iVar4 = 0;
  do {
    uVar8 = (ulong)*puVar5;
    iVar7 = 0;
    if (*puVar5 != 0) {
      uVar10 = 0;
      if (uVar8 != 0) {
        uVar10 = 0x10001 / uVar8;
      }
      uVar10 = 0x10001 - uVar10 * uVar8;
      if (uVar10 == 0) {
        lVar13 = 1;
      }
      else {
        lVar12 = 0;
        lVar14 = 1;
        uVar15 = 0x10001;
        do {
          uVar9 = uVar8;
          lVar13 = 0;
          if (uVar9 != 0) {
            lVar13 = (long)uVar15 / (long)uVar9;
          }
          lVar3 = 0;
          if (uVar10 != 0) {
            lVar3 = (long)uVar9 / (long)uVar10;
          }
          uVar11 = uVar9 - lVar3 * uVar10;
          lVar13 = lVar12 - lVar13 * lVar14;
          uVar8 = uVar10;
          uVar10 = uVar11;
          lVar12 = lVar14;
          lVar14 = lVar13;
          uVar15 = uVar9;
        } while (uVar11 != 0);
      }
      iVar7 = (int)lVar13 + 0x10001;
      if (-1 < lVar13) {
        iVar7 = (int)lVar13;
      }
    }
    *piVar6 = iVar7;
    piVar6[1] = -puVar5[2] & 0xffff;
    piVar6[2] = -puVar5[1] & 0xffff;
    uVar8 = (ulong)puVar5[3];
    iVar7 = 0;
    if (puVar5[3] != 0) {
      uVar10 = 0;
      if (uVar8 != 0) {
        uVar10 = 0x10001 / uVar8;
      }
      uVar10 = 0x10001 - uVar10 * uVar8;
      if (uVar10 == 0) {
        lVar13 = 1;
      }
      else {
        lVar12 = 0;
        lVar14 = 1;
        uVar15 = 0x10001;
        do {
          uVar9 = uVar8;
          lVar13 = 0;
          if (uVar9 != 0) {
            lVar13 = (long)uVar15 / (long)uVar9;
          }
          lVar3 = 0;
          if (uVar10 != 0) {
            lVar3 = (long)uVar9 / (long)uVar10;
          }
          uVar11 = uVar9 - lVar3 * uVar10;
          lVar13 = lVar12 - lVar13 * lVar14;
          uVar8 = uVar10;
          uVar10 = uVar11;
          lVar12 = lVar14;
          lVar14 = lVar13;
          uVar15 = uVar9;
        } while (uVar11 != 0);
      }
      iVar7 = (int)lVar13 + 0x10001;
      if (-1 < lVar13) {
        iVar7 = (int)lVar13;
      }
    }
    piVar6[3] = iVar7;
    if (iVar4 == 8) break;
    piVar6[4] = puVar5[-2];
    puVar2 = puVar5 + -1;
    puVar5 = puVar5 + -6;
    piVar6[5] = *puVar2;
    bVar1 = iVar4 < 8;
    piVar6 = piVar6 + 6;
    iVar4 = iVar4 + 1;
  } while (bVar1);
  iVar4 = param_2[1];
  iVar7 = param_2[0x31];
  param_2[1] = param_2[2];
  param_2[2] = iVar4;
  param_2[0x31] = param_2[0x32];
  param_2[0x32] = iVar7;
  return;
}

