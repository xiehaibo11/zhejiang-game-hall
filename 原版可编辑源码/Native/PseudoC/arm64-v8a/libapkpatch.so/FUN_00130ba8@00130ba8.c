
undefined8 FUN_00130ba8(long param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  
  iVar1 = FUN_00130b1c();
  if (iVar1 == 0) {
    if ((int)param_2 < 0) {
      iVar1 = 0;
      uVar3 = -param_2;
    }
    else {
      iVar1 = (param_2 >> 4) + 5;
      uVar3 = param_2 & 0xf;
      if (0x2f < (int)param_2) {
        uVar3 = param_2;
      }
    }
    lVar4 = *(long *)(param_1 + 0x38);
    if ((uVar3 == 0) || ((uVar3 & 0xfffffff8) == 8)) {
      if ((*(long *)(lVar4 + 0x48) != 0) && (*(uint *)(lVar4 + 0x38) != uVar3)) {
        (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50));
        *(undefined8 *)(lVar4 + 0x48) = 0;
      }
      *(int *)(lVar4 + 0x10) = iVar1;
      *(uint *)(lVar4 + 0x38) = uVar3;
      uVar2 = FUN_00130b64(param_1);
      return uVar2;
    }
  }
  return 0xfffffffe;
}

