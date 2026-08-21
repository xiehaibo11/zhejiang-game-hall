
undefined8 FUN_00a10510(undefined8 param_1,undefined1 *param_2,uint param_3,ulong param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_3 >> 0x10 < 0x11) && ((param_3 & 0xfffff800) != 0xd800)) {
    if (param_4 < 4) {
      return 0xfffffffe;
    }
    uVar1 = 4;
    *param_2 = (char)param_3;
    param_2[2] = (char)(param_3 >> 0x10);
    param_2[3] = 0;
    param_2[1] = (char)(param_3 >> 8);
  }
  return uVar1;
}

