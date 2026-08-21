
undefined8 FUN_00de62a8(long param_1)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  undefined4 uVar11;
  code *pcVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  long lVar16;
  undefined8 *puVar17;
  
  puVar17 = *(undefined8 **)(param_1 + 0x38);
  uVar6 = *(uint *)*puVar17;
  if ((uVar6 - 1 < 0xc) && ((0x81dU >> (ulong)(uVar6 - 1 & 0x1f) & 1) != 0)) {
    bVar8 = true;
  }
  else {
    bVar8 = uVar6 - 7 < 4;
  }
  uVar11 = 0xb;
  if (!bVar8) {
    uVar11 = 0xc;
  }
  puVar17[0x3b] = 0;
  puVar17[0x3a] = 0;
  puVar17[0x3d] = 0;
  puVar17[0x3c] = 0;
  iVar9 = FUN_00de3ae8(puVar17[5],param_1,uVar11);
  if (iVar9 == 0) {
    return 0;
  }
  if ((uVar6 - 7 < 4) && (bVar8)) {
    FUN_00df4d50();
  }
  plVar1 = puVar17 + 0x3a;
  if (*(int *)(param_1 + 0x88) == 0) {
    if (uVar6 < 0xb) {
      FUN_00dfe7f4();
      puVar17[0x3b] = FUN_00de67a4;
      if (*(int *)(param_1 + 0x58) != 0) {
        uVar7 = *(int *)(param_1 + 0xc) + 1;
        lVar10 = WebPSafeMalloc(1,(long)(int)((uVar7 & 0xfffffffe) + *(int *)(param_1 + 0xc)));
        *plVar1 = lVar10;
        if (lVar10 == 0) {
          return 0;
        }
        puVar17[1] = lVar10;
        lVar10 = lVar10 + *(int *)(param_1 + 0xc);
        puVar17[2] = lVar10;
        puVar17[3] = lVar10 + ((int)uVar7 >> 1);
        puVar17[0x3b] = FUN_00de6810;
        FUN_00df4d50();
      }
    }
    else {
      puVar17[0x3b] = FUN_00de6a2c;
    }
    if (!bVar8) {
      if (10 < uVar6) {
        return 1;
      }
      goto LAB_00de65e4;
    }
    pcVar12 = FUN_00de6b8c;
    if ((uVar6 != 5) && (uVar6 != 10)) {
      pcVar12 = FUN_00de6cc0;
      if (10 < uVar6) {
        pcVar12 = FUN_00de6de0;
      }
    }
    puVar17[0x3c] = pcVar12;
    if (10 < uVar6) {
      return 1;
    }
  }
  else {
    piVar15 = (int *)*puVar17;
    iVar9 = *piVar15;
    uVar7 = iVar9 - 1;
    if (10 < uVar6) {
      if ((uVar7 < 0xc) && ((0x81dU >> (ulong)(uVar7 & 0x1f) & 1) != 0)) {
        bVar8 = true;
      }
      else {
        bVar8 = iVar9 - 7U < 4;
      }
      iVar9 = *(int *)(param_1 + 0x8c);
      iVar4 = *(int *)(param_1 + 0x90);
      iVar3 = *(int *)(param_1 + 0xc);
      iVar5 = *(int *)(param_1 + 0x10);
      lVar14 = (long)iVar9;
      uVar6 = iVar9 + 1;
      lVar10 = lVar14 << 3;
      uVar13 = -(ulong)(uVar6 >> 0x1f) & 0xfffffffe00000000 | (ulong)(uVar6 & 0xfffffffe) << 1;
      if (!bVar8) {
        lVar10 = 0;
      }
      lVar10 = WebPSafeMalloc(1,lVar10 + (uVar13 + lVar14 * 2) * 4);
      *plVar1 = lVar10;
      if (lVar10 == 0) {
        return 0;
      }
      iVar2 = iVar4 + 1 >> 1;
      iVar3 = iVar3 + 1 >> 1;
      iVar5 = iVar5 + 1 >> 1;
      FUN_00de3c9c(puVar17 + 6,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                   *(undefined8 *)(piVar15 + 4),iVar9,iVar4,piVar15[0xc],1,lVar10);
      lVar10 = lVar10 + lVar14 * 8;
      FUN_00de3c9c(puVar17 + 0x13,iVar3,iVar5,*(undefined8 *)(piVar15 + 6),(int)uVar6 >> 1,iVar2,
                   piVar15[0xd],1,lVar10);
      FUN_00de3c9c(puVar17 + 0x20,iVar3,iVar5,*(undefined8 *)(piVar15 + 8),(int)uVar6 >> 1,iVar2,
                   piVar15[0xe],1,lVar10 + (long)(int)(uVar6 & 0xfffffffe) * 4);
      puVar17[0x3b] = FUN_00de73d8;
      if (bVar8) {
        FUN_00de3c9c(puVar17 + 0x2d,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                     *(undefined8 *)(piVar15 + 10),iVar9,iVar4,piVar15[0xf],1,lVar10 + uVar13 * 4);
        puVar17[0x3c] = FUN_00de7558;
        FUN_00dec6f4();
        return 1;
      }
      return 1;
    }
    if ((uVar7 < 0xc) && ((0x81dU >> (ulong)(uVar7 & 0x1f) & 1) != 0)) {
      bVar8 = true;
    }
    else {
      bVar8 = iVar9 - 7U < 4;
    }
    iVar9 = *(int *)(param_1 + 0x8c);
    uVar11 = *(undefined4 *)(param_1 + 0x90);
    lVar14 = (long)iVar9;
    iVar3 = *(int *)(param_1 + 0xc);
    iVar4 = *(int *)(param_1 + 0x10);
    lVar16 = lVar14 * 6;
    lVar10 = lVar14 * 3;
    if (bVar8) {
      lVar16 = lVar14 << 3;
      lVar10 = lVar14 * 4;
    }
    lVar10 = WebPSafeMalloc(1,lVar10 + lVar16 * 4);
    *plVar1 = lVar10;
    if (lVar10 == 0) {
      return 0;
    }
    lVar16 = lVar10 + lVar16 * 4;
    iVar3 = iVar3 + 1 >> 1;
    iVar4 = iVar4 + 1 >> 1;
    FUN_00de3c9c(puVar17 + 6,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),lVar16,
                 iVar9,uVar11,0,1,lVar10);
    FUN_00de3c9c(puVar17 + 0x13,iVar3,iVar4,lVar16 + lVar14,iVar9,uVar11,0,1,lVar10 + lVar14 * 8);
    FUN_00de3c9c(puVar17 + 0x20,iVar3,iVar4,lVar16 + lVar14 * 2,iVar9,uVar11,0,1,
                 lVar10 + lVar14 * 0x10);
    puVar17[0x3b] = FUN_00de6e94;
    FUN_00df6108();
    if (!bVar8) goto LAB_00de65e4;
    FUN_00de3c9c(puVar17 + 0x2d,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                 lVar16 + lVar14 * 3,iVar9,uVar11,0,1,lVar10 + lVar14 * 0x18);
    puVar17[0x3c] = FUN_00de7078;
    pcVar12 = FUN_00de7120;
    if ((*(int *)*puVar17 != 5) && (*(int *)*puVar17 != 10)) {
      pcVar12 = FUN_00de7288;
    }
    puVar17[0x3d] = pcVar12;
  }
  FUN_00dec6f4();
LAB_00de65e4:
  FUN_00dfe734();
  return 1;
}

