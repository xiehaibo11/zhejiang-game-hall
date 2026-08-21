
void FUN_00c08e38(long param_1,int *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = param_2[2];
  if (iVar3 == 6) {
    lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x90) + (ulong)(uint)param_2[1] * 0x18;
    *(byte *)(lVar1 + 0x11) = *(byte *)(lVar1 + 0x11) | 1;
    if (*(int *)(param_3 + 1) == 0xc) {
      FUN_00c07f1c(param_1,*(undefined4 *)param_3);
    }
    FUN_00c08ac0(param_1,param_3,*param_2);
    return;
  }
  if (iVar3 == 7) {
    lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x90) + (ulong)(uint)param_2[1] * 0x18;
    *(byte *)(lVar1 + 0x11) = *(byte *)(lVar1 + 0x11) | 1;
    FUN_00c08d80(param_1,param_3);
    uVar5 = *(uint *)(param_3 + 1);
    if (uVar5 < 3) {
      uVar5 = uVar5 << 0x10 | *param_2 << 8 | 0x31;
    }
    else if (uVar5 == 3) {
      iVar3 = *param_2;
      iVar4 = FUN_00c07b10(param_1,*param_3,0xfffffffb);
      uVar5 = iVar3 << 8 | 0x2fU | iVar4 << 0x10;
    }
    else {
      iVar3 = *param_2;
      if (uVar5 == 4) {
        iVar4 = FUN_00c07b70(param_1,param_3);
        uVar5 = iVar3 << 8 | 0x30U | iVar4 << 0x10;
      }
      else {
        iVar4 = FUN_00c08cac();
        uVar5 = iVar3 << 8 | 0x2eU | iVar4 << 0x10;
      }
    }
  }
  else if (iVar3 == 8) {
    iVar3 = FUN_00c08cac(param_1,param_3);
    iVar4 = FUN_00c07b10(param_1,*(undefined8 *)param_2,0xfffffffb);
    uVar5 = iVar4 << 0x10 | iVar3 << 8 | 0x37;
  }
  else {
    iVar3 = FUN_00c08cac(param_1,param_3);
    uVar5 = param_2[1];
    if ((int)uVar5 < 0) {
      uVar5 = *param_2 << 0x18 | 0x3dU | ~uVar5 << 0x10 | iVar3 << 8;
    }
    else {
      if (0xff < uVar5) {
        FUN_00c07f70(param_1,*param_2 << 0x18 | 0x3eU | (uVar5 - 0x100) * 0x10000 | iVar3 << 8);
        iVar3 = *(int *)(param_3 + 1);
        uVar2 = *(undefined4 *)param_3;
        goto joined_r0x00c08f60;
      }
      uVar5 = uVar5 << 0x10 | *param_2 << 0x18 | 0x3c | iVar3 << 8;
    }
  }
  FUN_00c07f70(param_1,uVar5);
  iVar3 = *(int *)(param_3 + 1);
  uVar2 = *(undefined4 *)param_3;
joined_r0x00c08f60:
  if (iVar3 == 0xc) {
    FUN_00c07f1c(param_1,uVar2);
    return;
  }
  return;
}

