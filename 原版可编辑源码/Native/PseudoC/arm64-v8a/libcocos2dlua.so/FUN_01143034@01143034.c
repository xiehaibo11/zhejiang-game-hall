
undefined8 FUN_01143034(int *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  int *piVar9;
  int iVar10;
  byte bVar11;
  int iVar12;
  byte *pbVar13;
  ulong uVar14;
  byte *pbVar15;
  
  pbVar7 = *(byte **)(param_1 + 0x26);
  if (pbVar7 != (byte *)0x0) {
    piVar9 = (int *)*param_2;
    iVar1 = param_1[2];
    uVar2 = param_1[3];
    iVar10 = param_1[4];
    iVar3 = *piVar9;
    iVar5 = iVar1;
    iVar12 = iVar10;
    if (param_1[0x16] != 0) {
      if (iVar1 == 0) {
        iVar5 = 0;
        iVar12 = iVar10 + -1;
      }
      else {
        iVar5 = iVar1 + -1;
        pbVar7 = pbVar7 + -(long)*param_1;
      }
      iVar10 = iVar1 + param_1[0x20] + iVar10;
      if (iVar10 == param_1[0x21]) {
        iVar12 = iVar10 - (param_1[0x20] + iVar5);
      }
    }
    if ((0 < iVar12) && (0 < (int)uVar2)) {
      iVar10 = 0;
      lVar6 = *(long *)(piVar9 + 4) + (long)piVar9[6] * (long)iVar5;
      pbVar15 = (byte *)(lVar6 + 1);
      bVar11 = 0xf;
      uVar14 = (ulong)uVar2;
      pbVar13 = pbVar15;
      pbVar8 = pbVar7;
      do {
        do {
          bVar4 = *pbVar7;
          uVar14 = uVar14 - 1;
          *pbVar15 = bVar4 >> 4 | *pbVar15 & 0xf0;
          bVar11 = bVar4 >> 4 & bVar11;
          pbVar7 = pbVar7 + 1;
          pbVar15 = pbVar15 + 2;
        } while (uVar14 != 0);
        iVar10 = iVar10 + 1;
        pbVar7 = pbVar8 + *param_1;
        pbVar15 = pbVar13 + piVar9[6];
        uVar14 = (ulong)uVar2;
        pbVar13 = pbVar15;
        pbVar8 = pbVar7;
      } while (iVar10 != iVar12);
      if ((iVar3 - 7U < 4) && (bVar11 != 0xf)) {
        (*DAT_01795fb8)(lVar6);
        return 0;
      }
    }
  }
  return 0;
}

