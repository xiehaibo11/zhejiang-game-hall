
undefined8 ssl3_do_change_cipher_spec(long param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  int line;
  long lVar5;
  undefined4 uVar6;
  
  uVar6 = 0x11;
  if (*(int *)(param_1 + 0x38) != 0) {
    uVar6 = 0x21;
  }
  if (*(long *)(*(long *)(param_1 + 0x90) + 0x260) == 0) {
    lVar5 = *(long *)(param_1 + 0x178);
    if ((lVar5 == 0) || (*(int *)(lVar5 + 4) == 0)) {
      iVar3 = 0x85;
      line = 0x1b;
      goto LAB_00acfdfc;
    }
    *(undefined8 *)(lVar5 + 0xd8) = *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x228);
    uVar4 = (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x10))(param_1);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
  }
  uVar4 = (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x20))(param_1,uVar6);
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  lVar5 = *(long *)(*(long *)(param_1 + 8) + 0xc0);
  puVar1 = (undefined4 *)(lVar5 + 0x50);
  puVar2 = (undefined8 *)(lVar5 + 0x48);
  if (*(int *)(param_1 + 0x38) != 0) {
    puVar1 = (undefined4 *)(lVar5 + 0x40);
    puVar2 = (undefined8 *)(lVar5 + 0x38);
  }
  iVar3 = (**(code **)(lVar5 + 0x28))(param_1,*puVar2,*puVar1,*(long *)(param_1 + 0x90) + 0x194);
  if (iVar3 != 0) {
    *(int *)(*(long *)(param_1 + 0x90) + 0x214) = iVar3;
    return 1;
  }
  iVar3 = 0x44;
  line = 0x37;
LAB_00acfdfc:
  ERR_put_error(0x14,0x124,iVar3,"ssl/s3_msg.c",line);
  return 0;
}

