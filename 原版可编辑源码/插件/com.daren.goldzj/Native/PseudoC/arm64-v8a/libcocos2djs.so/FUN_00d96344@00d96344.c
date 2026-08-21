
undefined8 FUN_00d96344(long param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  short sVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  
  lVar12 = *(long *)(param_1 + 0x230);
  if (*(int *)(param_1 + 0x13c) != 0) {
    iVar6 = *(int *)(lVar12 + 0x60);
    if (iVar6 == 0) {
      FUN_00d96de8(param_1,*(undefined4 *)(lVar12 + 100));
      iVar6 = *(int *)(param_1 + 0x13c);
      *(int *)(lVar12 + 0x60) = iVar6;
      *(uint *)(lVar12 + 100) = *(int *)(lVar12 + 100) + 1U & 7;
    }
    *(int *)(lVar12 + 0x60) = iVar6 + -1;
  }
  lVar7 = *(long *)(param_1 + 0x1e0);
  iVar6 = *(int *)(param_1 + 0x1d0);
  lVar17 = (long)iVar6;
  lVar15 = *param_2;
  lVar9 = (long)*(int *)(*(long *)(param_1 + 0x178) + 0x18);
  lVar8 = 0;
  lVar13 = lVar17 * 4;
  do {
    iVar16 = (int)lVar17;
    sVar3 = *(short *)(lVar15 + (long)*(int *)(lVar7 + lVar13 + lVar8 * 4) * 2);
    if (sVar3 < 0) {
      if (-(int)sVar3 >> (*(uint *)(param_1 + 0x1d8) & 0x1f) != 0) goto LAB_00d96410;
    }
    else if ((int)sVar3 >> (*(uint *)(param_1 + 0x1d8) & 0x1f) != 0) {
      iVar16 = iVar6 + (int)lVar8;
      goto LAB_00d96410;
    }
    lVar8 = lVar8 + -1;
    lVar17 = lVar17 + -1;
  } while (iVar6 + (int)lVar8 != 0);
  iVar16 = 0;
LAB_00d96410:
  iVar14 = *(int *)(param_1 + 0x1cc) + -1;
  if (*(int *)(param_1 + 0x1cc) <= iVar16) {
    plVar2 = (long *)(lVar12 + lVar9 * 8 + 0xe8);
LAB_00d96444:
    lVar13 = *plVar2 + (long)iVar14 + (long)iVar14 * 2;
    FUN_00d96f60(param_1,lVar13,0);
    piVar11 = (int *)(lVar7 + 4 + (long)iVar14 * 4);
    lVar13 = lVar13 + 2;
    iVar1 = iVar14;
    do {
      sVar3 = *(short *)(lVar15 + (long)*piVar11 * 2);
      if (sVar3 < 0) {
        iVar6 = -(int)sVar3 >> (*(uint *)(param_1 + 0x1d8) & 0x1f);
        if (iVar6 != 0) {
          FUN_00d96f60(param_1,lVar13 + -1,1);
          uVar5 = 1;
          goto LAB_00d964f8;
        }
      }
      else {
        iVar6 = (int)sVar3 >> (*(uint *)(param_1 + 0x1d8) & 0x1f);
        if (iVar6 != 0) goto LAB_00d964dc;
      }
      FUN_00d96f60(param_1,lVar13 + -1,0);
      iVar1 = iVar1 + 1;
      piVar11 = piVar11 + 1;
      lVar13 = lVar13 + 3;
    } while( true );
  }
LAB_00d965d4:
  if (iVar14 < iVar6) {
    FUN_00d96f60(param_1,*(long *)(lVar12 + lVar9 * 8 + 0xe8) + (long)(iVar14 * 3),1);
  }
  return 1;
LAB_00d964dc:
  FUN_00d96f60(param_1,lVar13 + -1,1);
  uVar5 = 0;
LAB_00d964f8:
  FUN_00d96f60(param_1,lVar12 + 0x168,uVar5);
  uVar4 = iVar6 - 1;
  if (uVar4 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = 1;
    FUN_00d96f60(param_1,lVar13,1);
    if (uVar4 != 1) {
      FUN_00d96f60(param_1,lVar13,1);
      iVar14 = (int)uVar4 >> 2;
      iVar6 = 2;
      lVar13 = 0xbd;
      if ((int)(uint)*(byte *)(param_1 + lVar9 + 0x100) <= iVar1) {
        lVar13 = 0xd9;
      }
      lVar13 = *plVar2 + lVar13;
      for (; iVar14 != 0; iVar14 = iVar14 >> 1) {
        FUN_00d96f60(param_1,lVar13,1);
        iVar6 = iVar6 << 1;
        lVar13 = lVar13 + 1;
      }
    }
  }
  iVar14 = iVar1 + 1;
  FUN_00d96f60(param_1,lVar13,0);
  uVar10 = iVar6 >> 1;
  if (uVar10 != 0) {
    do {
      FUN_00d96f60(param_1,lVar13 + 0xe,(uVar10 & uVar4) != 0);
      uVar10 = (int)uVar10 >> 1;
    } while (uVar10 != 0);
  }
  if (iVar16 <= iVar14) goto code_r0x00d965c8;
  goto LAB_00d96444;
code_r0x00d965c8:
  iVar6 = *(int *)(param_1 + 0x1d0);
  iVar14 = iVar1 + 1;
  goto LAB_00d965d4;
}

