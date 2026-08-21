
undefined8 _Uaarch64_get_reg(long param_1,int param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (param_2 == 0x1e) {
    *param_3 = *(undefined8 *)(param_1 + 0x18);
    return 0;
  }
  uVar1 = FUN_001175c0();
  return uVar1;
}

