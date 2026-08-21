
undefined8 FUN_00debd28(undefined4 *param_1)

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
    iVar5 = FUN_00de3ae8(puVar10[5],puVar8,3);
    if (iVar5 == 0) {
      *param_1 = 2;
      goto LAB_00debed0;
    }
    iVar5 = param_1[0x21];
    iVar4 = param_1[0x22];
    uVar9 = (ulong)(*puVar8 & 0xffff);
    lVar6 = WebPSafeMalloc(uVar9 + (long)(int)*puVar8 * 0x10 + (long)iVar4 * (long)iVar5,4);
    *(long *)(param_1 + 6) = lVar6;
    if (lVar6 == 0) {
      *param_1 = 1;
      *(undefined8 *)(param_1 + 8) = 0;
      goto LAB_00debed0;
    }
    *(ulong *)(param_1 + 8) = lVar6 + (long)iVar4 * (long)iVar5 * 4 + uVar9 * 4;
    if (puVar8[0x22] == 0) {
LAB_00debe14:
      uVar7 = **(uint **)(param_1 + 4);
      if (uVar7 - 7 < 4) goto LAB_00debe28;
    }
    else {
      uVar7 = puVar8[0x23];
      uVar2 = puVar8[0x24];
      uVar1 = puVar8[3];
      uVar3 = puVar8[4];
      lVar6 = WebPSafeMalloc((long)(int)uVar7 * 0x24 + 0x68,1);
      if (lVar6 == 0) {
        *param_1 = 1;
        goto LAB_00debed0;
      }
      *(long *)(param_1 + 0x58) = lVar6;
      *(long *)(param_1 + 0x5a) = lVar6;
      FUN_00de3c9c(lVar6,uVar1,uVar3,lVar6 + 0x68 + (long)(int)uVar7 * 0x20,uVar7,uVar2,0,4,
                   lVar6 + 0x68);
      if (puVar8[0x22] == 0) goto LAB_00debe14;
LAB_00debe28:
      FUN_00dec6f4();
      uVar7 = **(uint **)(param_1 + 4);
    }
    if ((10 < uVar7) && (FUN_00e02674(), *(long *)(*(long *)(param_1 + 4) + 0x28) != 0)) {
      FUN_00dec6f4();
    }
    if ((((param_1[0x14] != 0) && (0 < (int)param_1[0x26])) && (*(long *)(param_1 + 0x2c) == 0)) &&
       (iVar5 = FUN_00e02f64(param_1 + 0x2c,param_1[0x2b]), iVar5 == 0)) {
      *param_1 = 1;
      goto LAB_00debed0;
    }
    param_1[1] = 0;
  }
  iVar5 = FUN_00deaf2c(param_1,*(undefined8 *)(param_1 + 6),param_1[0x21],param_1[0x22],
                       param_1[0x22],FUN_00debf08);
  if (iVar5 != 0) {
    *(undefined4 *)(puVar10 + 4) = param_1[0x25];
    return 1;
  }
LAB_00debed0:
  FUN_00de977c(param_1);
  return 0;
}

