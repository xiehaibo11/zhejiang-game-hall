
void FUN_00c08d98(undefined8 param_1,uint *param_2,undefined4 *param_3,uint *param_4)

{
  uint uVar1;
  
  *param_3 = 9;
  if (param_4[2] == 4) {
    if (((int)((long)*(undefined8 *)param_4 >> 0x2f) == -0xe) &&
       (uVar1 = *param_4, uVar1 == (uVar1 & 0xff))) {
      *param_2 = uVar1 + 0x100;
      return;
    }
  }
  else if ((param_4[2] == 3) &&
          (uVar1 = FUN_00c07b10(param_1,*(undefined8 *)param_4,0xfffffffb), uVar1 < 0x100)) {
    *param_2 = ~uVar1;
    return;
  }
  uVar1 = FUN_00c08cac(param_1,param_4);
  *param_2 = uVar1;
  return;
}

