
undefined8 FUN_00a0fd30(undefined8 param_1,undefined2 *param_2,uint param_3,ulong param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_3 >> 0x10 == 0) && ((param_3 & 0xfffff800) != 0xd800)) {
    if (param_4 < 2) {
      return 0xfffffffe;
    }
    uVar1 = 2;
    *param_2 = (short)param_3;
  }
  return uVar1;
}

