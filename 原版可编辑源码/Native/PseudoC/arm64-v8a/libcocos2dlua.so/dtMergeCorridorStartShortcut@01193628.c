
/* dtMergeCorridorStartShortcut(unsigned int*, int, int, unsigned int const*, int) */

int dtMergeCorridorStartShortcut(uint *param_1,int param_2,int param_3,uint *param_4,int param_5)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  uint *puVar11;
  uint *puVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar10 = (long)param_2;
  uVar15 = 0xffffffff;
  iVar6 = -1;
  do {
    if (lVar10 < 1) break;
    lVar10 = lVar10 + -1;
    if (param_5 < 1) {
      bVar4 = false;
    }
    else {
      bVar4 = false;
      lVar14 = (long)param_5;
      iVar7 = iVar6;
      uVar3 = param_5;
      do {
        uVar3 = uVar3 - 1;
        lVar5 = lVar14 + -1;
        lVar14 = lVar14 + -1;
        iVar6 = (int)lVar10;
        uVar1 = uVar3;
        if (param_1[lVar10] != param_4[lVar5]) {
          iVar6 = iVar7;
          uVar1 = uVar15;
        }
        uVar15 = uVar1;
        bVar4 = (bool)(bVar4 | param_1[lVar10] == param_4[lVar5]);
        iVar7 = iVar6;
      } while (0 < lVar14);
    }
  } while (!bVar4);
  if ((int)uVar15 < 1) {
    return param_2;
  }
  if (iVar6 == -1) {
    return param_2;
  }
  uVar3 = param_2 - iVar6 & (param_2 - iVar6 >> 0x1f ^ 0xffffffffU);
  uVar1 = param_3 - uVar15;
  if ((int)(uVar3 + uVar15) <= param_3) {
    uVar1 = uVar3;
  }
  if (uVar1 != 0) {
    memmove(param_1 + (int)uVar15,param_1 + iVar6,
            -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
  }
  uVar8 = (ulong)uVar15;
  if ((uVar15 < 8) || ((param_1 < param_4 + uVar8 && (param_4 < param_1 + uVar8)))) {
    uVar9 = 0;
  }
  else {
    uVar9 = uVar8 & 0xfffffff8;
    puVar11 = param_4 + 4;
    puVar12 = param_1 + 4;
    uVar13 = uVar9;
    do {
      puVar2 = puVar11 + -2;
      uVar16 = *(undefined8 *)(puVar11 + -4);
      uVar18 = *(undefined8 *)(puVar11 + 2);
      uVar17 = *(undefined8 *)puVar11;
      puVar11 = puVar11 + 8;
      uVar13 = uVar13 - 8;
      *(undefined8 *)(puVar12 + -2) = *(undefined8 *)puVar2;
      *(undefined8 *)(puVar12 + -4) = uVar16;
      *(undefined8 *)(puVar12 + 2) = uVar18;
      *(undefined8 *)puVar12 = uVar17;
      puVar12 = puVar12 + 8;
    } while (uVar13 != 0);
    if (uVar9 == uVar8) goto LAB_01193740;
  }
  lVar10 = uVar8 - uVar9;
  puVar11 = param_1 + uVar9;
  puVar12 = param_4 + uVar9;
  do {
    lVar10 = lVar10 + -1;
    *puVar11 = *puVar12;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  } while (lVar10 != 0);
LAB_01193740:
  return uVar1 + uVar15;
}

