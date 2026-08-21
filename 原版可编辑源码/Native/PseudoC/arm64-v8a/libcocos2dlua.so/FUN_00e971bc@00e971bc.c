
undefined4
FUN_00e971bc(uint param_1,ulong *param_2,int *param_3,undefined4 *param_4,int *param_5,
            undefined4 *param_6)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  undefined4 uVar10;
  
  *param_2 = 0;
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (int *)0x0) {
    *param_5 = 0;
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = 0x480;
  }
  if (((param_1 < 0xffe00000) || (uVar3 = param_1 >> 0x13 & 3, uVar3 == 1)) ||
     (uVar4 = param_1 >> 0x11 & 3, uVar4 == 0)) {
    return 0;
  }
  uVar5 = param_1 >> 0xc & 0xf;
  if (uVar5 == 0) {
    return 0;
  }
  if (uVar5 == 0xf) {
    return 0;
  }
  uVar6 = param_1 >> 10 & 3;
  if (uVar6 == 3) {
    return 0;
  }
  iVar7 = *(int *)(&DAT_014294e8 + (ulong)uVar6 * 4);
  if (uVar3 == 0) {
    iVar9 = iVar7 + 3;
    if (-1 < iVar7) {
      iVar9 = iVar7;
    }
    iVar7 = iVar9 >> 2;
  }
  else if (uVar3 == 2) {
    if (iVar7 < 0) {
      iVar7 = iVar7 + 1;
    }
    iVar7 = iVar7 >> 1;
  }
  uVar6 = param_1 >> 9 & 1;
  if (uVar4 == 3) {
    puVar1 = &DAT_014294f4;
    if (uVar3 != 3) {
      puVar1 = &DAT_0142952c;
    }
    iVar9 = *(int *)(puVar1 + (ulong)(uVar5 - 1) * 4);
    if (param_5 != (int *)0x0) {
      *param_5 = iVar9;
    }
    iVar2 = 0;
    if (iVar7 != 0) {
      iVar2 = (iVar9 * 12000) / iVar7;
    }
    *param_2 = (ulong)((iVar2 + uVar6) * 4);
    if (param_6 != (undefined4 *)0x0) {
      *param_6 = 0x180;
    }
    goto joined_r0x00e97370;
  }
  if (uVar3 == 3) {
    puVar1 = &DAT_01429564;
    if (uVar4 != 2) {
      puVar1 = &DAT_0142959c;
    }
    iVar9 = *(int *)(puVar1 + (ulong)(uVar5 - 1) * 4);
    if (param_6 != (undefined4 *)0x0) {
      uVar10 = 0x480;
LAB_00e97314:
      *param_6 = uVar10;
    }
  }
  else {
    iVar9 = *(int *)(&DAT_014295d4 + (ulong)(uVar5 - 1) * 4);
    if (param_6 != (undefined4 *)0x0) {
      uVar10 = 0x240;
      if (uVar4 != 1) {
        uVar10 = 0x480;
      }
      goto LAB_00e97314;
    }
  }
  if (param_5 != (int *)0x0) {
    *param_5 = iVar9;
  }
  if (uVar3 == 3) {
    iVar2 = 0;
    if (iVar7 != 0) {
      iVar2 = (iVar9 * 0x23280) / iVar7;
    }
    uVar8 = (ulong)(iVar2 + uVar6);
  }
  else {
    uVar3 = 72000;
    if (uVar4 != 1) {
      uVar3 = 0x23280;
    }
    uVar8 = 0;
    if ((long)iVar7 != 0) {
      uVar8 = ((ulong)uVar3 * (long)iVar9) / (ulong)(long)iVar7;
    }
    uVar8 = uVar8 + uVar6;
  }
  *param_2 = uVar8;
joined_r0x00e97370:
  if (param_3 != (int *)0x0) {
    *param_3 = iVar7;
  }
  uVar10 = 1;
  if (param_4 != (undefined4 *)0x0) {
    if (((param_1 ^ 0xffffffff) & 0xc0) != 0) {
      uVar10 = 2;
    }
    *param_4 = uVar10;
  }
  return 1;
}

