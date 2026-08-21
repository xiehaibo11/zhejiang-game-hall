
void FUN_00de45a8(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_1 == 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x2c);
  if (-1 < iVar2) {
    if (iVar2 < 0x65) {
      if (iVar2 * 0xff < 100) goto LAB_00de46e4;
      iVar2 = (iVar2 * 0xff) / 100;
    }
    else {
      iVar2 = 0xff;
    }
    uVar1 = *(uint *)(param_2 + 0x43c);
    if ((int)uVar1 < 0xc) {
      iVar4 = *(int *)(&DAT_0196f9ec + (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) * 4) *
              iVar2 >> 3;
      *(int *)(param_2 + 0x440) = iVar4;
    }
    else {
      iVar4 = *(int *)(param_2 + 0x440);
    }
    uVar1 = *(uint *)(param_2 + 0x45c);
    if ((int)uVar1 < 0xc) {
      iVar5 = *(int *)(&DAT_0196f9ec + (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) * 4) *
              iVar2 >> 3;
      *(int *)(param_2 + 0x460) = iVar5;
    }
    else {
      iVar5 = *(int *)(param_2 + 0x460);
    }
    uVar1 = *(uint *)(param_2 + 0x47c);
    if ((int)uVar1 < 0xc) {
      iVar6 = *(int *)(&DAT_0196f9ec + (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) * 4) *
              iVar2 >> 3;
      *(int *)(param_2 + 0x480) = iVar6;
    }
    else {
      iVar6 = *(int *)(param_2 + 0x480);
    }
    uVar1 = *(uint *)(param_2 + 0x49c);
    if ((int)uVar1 < 0xc) {
      iVar2 = *(int *)(&DAT_0196f9ec + (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) * 4) *
              iVar2 >> 3;
      *(int *)(param_2 + 0x4a0) = iVar2;
    }
    else {
      iVar2 = *(int *)(param_2 + 0x4a0);
    }
    if (iVar2 != 0 || (iVar6 != 0 || (iVar5 != 0 || iVar4 != 0))) {
      FUN_00e03604(0x3f800000,param_2 + 0x33c);
      *(undefined4 *)(param_2 + 0x338) = 1;
    }
  }
LAB_00de46e4:
  iVar2 = *(int *)(param_1 + 0x34);
  *(int *)(param_2 + 3000) = iVar2;
  if (iVar2 < 0x65) {
    if (-1 < iVar2) {
      return;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 100;
  }
  *(undefined4 *)(param_2 + 3000) = uVar3;
  return;
}

