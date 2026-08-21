
undefined8 FUN_011481d0(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  uint *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  puVar8 = *(uint **)(param_1 + 2);
  puVar10 = *(undefined8 **)(puVar8 + 0xe);
  if (param_1[1] != 0) {
    *(undefined8 *)(param_1 + 4) = *puVar10;
    iVar5 = FUN_0113ff90(puVar10[5],puVar8,3);
    if (iVar5 == 0) {
      *param_1 = 2;
      goto LAB_01148378;
    }
    iVar5 = param_1[0x21];
    iVar4 = param_1[0x22];
    uVar9 = (ulong)(*puVar8 & 0xffff);
    lVar6 = WebPSafeMalloc(uVar9 + (long)(int)*puVar8 * 0x10 + (long)iVar4 * (long)iVar5,4);
    *(long *)(param_1 + 6) = lVar6;
    if (lVar6 == 0) {
      *param_1 = 1;
      *(undefined8 *)(param_1 + 8) = 0;
      goto LAB_01148378;
    }
    *(ulong *)(param_1 + 8) = lVar6 + (long)iVar4 * (long)iVar5 * 4 + uVar9 * 4;
    if (puVar8[0x22] == 0) {
LAB_011482bc:
      uVar7 = **(uint **)(param_1 + 4);
      if (uVar7 - 7 < 4) goto LAB_011482d0;
    }
    else {
      uVar7 = puVar8[0x23];
      uVar2 = puVar8[0x24];
      uVar1 = puVar8[3];
      uVar3 = puVar8[4];
      lVar6 = WebPSafeMalloc((long)(int)uVar7 * 0x24 + 0x68,1);
      if (lVar6 == 0) {
        *param_1 = 1;
        goto LAB_01148378;
      }
      *(long *)(param_1 + 0x58) = lVar6;
      *(long *)(param_1 + 0x5a) = lVar6;
      FUN_01140144(lVar6,uVar1,uVar3,lVar6 + 0x68 + (long)(int)uVar7 * 0x20,uVar7,uVar2,0,4,
                   lVar6 + 0x68);
      if (puVar8[0x22] == 0) goto LAB_011482bc;
LAB_011482d0:
      FUN_01148b9c();
      uVar7 = **(uint **)(param_1 + 4);
    }
    if ((10 < uVar7) && (FUN_0115eb1c(), *(long *)(*(long *)(param_1 + 4) + 0x28) != 0)) {
      FUN_01148b9c();
    }
    if ((((param_1[0x14] != 0) && (0 < (int)param_1[0x26])) && (*(long *)(param_1 + 0x2c) == 0)) &&
       (iVar5 = FUN_0115f40c(param_1 + 0x2c,param_1[0x2b]), iVar5 == 0)) {
      *param_1 = 1;
      goto LAB_01148378;
    }
    param_1[1] = 0;
  }
  iVar5 = FUN_011473d4(param_1,*(undefined8 *)(param_1 + 6),param_1[0x21],param_1[0x22],
                       param_1[0x22],FUN_011483b0);
  if (iVar5 != 0) {
    *(undefined4 *)(puVar10 + 4) = param_1[0x25];
    return 1;
  }
LAB_01148378:
  FUN_01145c24(param_1);
  return 0;
}

