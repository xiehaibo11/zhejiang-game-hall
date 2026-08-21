
void FUN_00e6b184(undefined8 *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  int local_38;
  int local_34;
  
  if (*(int *)(param_1 + 1) != 0) {
    return;
  }
  if (*(int *)(param_1 + 2) == 1) {
    uVar2 = *(uint *)(param_1 + 5);
    uVar4 = *param_1;
    if (uVar2 != 0) {
      *(undefined4 *)(param_1[6] + (ulong)uVar2 * 0x18 + -8) = param_2;
    }
    uVar1 = uVar2 + 1;
    if (*(uint *)((long)param_1 + 0x2c) < uVar1) {
      local_38 = 0;
      uVar2 = uVar2 + 8 & 0xfffffff8;
      lVar3 = FUN_00e13bcc(uVar4,0x18,*(uint *)((long)param_1 + 0x2c),uVar2,param_1[6],&local_38);
      param_1[6] = lVar3;
      if (local_38 != 0) goto LAB_00e6b21c;
      *(uint *)((long)param_1 + 0x2c) = uVar2;
    }
    else {
      lVar3 = param_1[6];
    }
    lVar3 = lVar3 + (ulong)uVar1 * 0x18;
    *(undefined4 *)(lVar3 + -0x18) = 0;
    *(undefined4 *)(lVar3 + -8) = 0;
    uVar2 = *(uint *)(param_1 + 0xb);
    *(uint *)(param_1 + 5) = uVar1;
    if (uVar2 != 0) {
      *(undefined4 *)(param_1[0xc] + (ulong)uVar2 * 0x18 + -8) = param_2;
    }
    uVar1 = uVar2 + 1;
    if (*(uint *)((long)param_1 + 0x5c) < uVar1) {
      local_34 = 0;
      uVar2 = uVar2 + 8 & 0xfffffff8;
      lVar3 = FUN_00e13bcc(uVar4,0x18,*(uint *)((long)param_1 + 0x5c),uVar2,param_1[0xc],&local_34);
      param_1[0xc] = lVar3;
      local_38 = local_34;
      if (local_34 != 0) goto LAB_00e6b21c;
      *(uint *)((long)param_1 + 0x5c) = uVar2;
    }
    else {
      lVar3 = param_1[0xc];
    }
    lVar3 = lVar3 + (ulong)uVar1 * 0x18;
    *(undefined4 *)(lVar3 + -0x18) = 0;
    *(undefined4 *)(lVar3 + -8) = 0;
    *(uint *)(param_1 + 0xb) = uVar1;
  }
  else {
    local_38 = 6;
LAB_00e6b21c:
    *(int *)(param_1 + 1) = local_38;
  }
  return;
}

