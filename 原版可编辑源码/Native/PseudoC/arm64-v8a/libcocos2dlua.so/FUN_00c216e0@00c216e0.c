
undefined8 FUN_00c216e0(undefined8 param_1,undefined8 param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_8;
  uint local_4;
  
  local_8 = 0;
  local_4 = 0;
  puVar2 = (uint *)FUN_00c21654(param_1,param_2,&local_8);
  if (*param_3 >> 0x1c != 1) {
    param_3 = (uint *)FUN_00c21654(param_1,param_3,&local_4);
  }
  if ((param_4 >> 2 & 1) == 0) {
    if ((param_4 >> 3 & 1) == 0) {
      if (local_4 != (local_4 & local_8)) {
        return 0;
      }
      uVar4 = *puVar2;
      uVar1 = uVar4 >> 0x1c;
      if (uVar1 == 4) {
        return 1;
      }
      uVar6 = *param_3;
      uVar5 = uVar6 >> 0x1c;
      if (uVar5 == 4) {
        return 1;
      }
      goto LAB_00c21774;
    }
  }
  else if (local_8 != local_4) {
    return 0;
  }
  uVar4 = *puVar2;
  uVar6 = *param_3;
  uVar1 = uVar4 >> 0x1c;
  uVar5 = uVar6 >> 0x1c;
LAB_00c21774:
  if (uVar5 != uVar1) {
    return 0;
  }
  if (puVar2[1] != param_3[1]) {
    return 0;
  }
  if (uVar5 == 0) {
    if (((uVar6 ^ uVar4) & 0xc000000) != 0) {
      return 0;
    }
  }
  else {
    if (uVar4 >> 0x1d == 1) {
      uVar3 = FUN_00c216c8(param_1,puVar2,param_3,param_4 | 4);
      return uVar3;
    }
    if ((uVar5 == 1) && (puVar2 != param_3)) {
      return 0;
    }
  }
  return 1;
}

