
void FUN_00c08060(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = param_2[2];
  if (uVar1 == 7) {
    uVar1 = *param_2 << 0x10 | 0x2d;
  }
  else if (uVar1 == 8) {
    iVar3 = FUN_00c07b10(param_1,*(undefined8 *)param_2,0xfffffffb);
    uVar1 = iVar3 << 0x10 | 0x36;
  }
  else {
    if (uVar1 != 9) {
      if (uVar1 == 0xd) {
        *param_2 = param_2[1];
        param_2[2] = 0xc;
      }
      else if (uVar1 == 6) {
        param_2[2] = 0xc;
        return;
      }
      return;
    }
    uVar1 = param_2[1];
    if ((int)uVar1 < 0) {
      uVar2 = *param_2;
      uVar4 = *(uint *)(param_1 + 0x38);
      uVar1 = uVar2 << 0x18 | 0x39 | ~uVar1 << 0x10;
    }
    else if (uVar1 < 0x100) {
      uVar4 = *(uint *)(param_1 + 0x38);
      if (uVar4 <= uVar1) {
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
      }
      uVar2 = *param_2;
      uVar1 = uVar1 << 0x10 | uVar2 << 0x18 | 0x38;
    }
    else {
      uVar2 = *param_2;
      uVar4 = *(uint *)(param_1 + 0x38);
      uVar1 = uVar2 << 0x18 | 0x3a | (uVar1 - 0x100) * 0x10000;
    }
    if (uVar4 <= uVar2) {
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
    }
  }
  uVar1 = FUN_00c07f70(param_1,uVar1);
  *param_2 = uVar1;
  param_2[2] = 0xb;
  return;
}

