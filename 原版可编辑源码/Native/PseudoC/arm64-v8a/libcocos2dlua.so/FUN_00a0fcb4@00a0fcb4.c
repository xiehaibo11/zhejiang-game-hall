
undefined8 FUN_00a0fcb4(undefined8 param_1,ushort *param_2,uint param_3,ulong param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_3 >> 0x10 == 0) && ((param_3 & 0xfffff800) != 0xd800)) {
    if (param_4 < 2) {
      return 0xfffffffe;
    }
    uVar1 = 2;
    *param_2 = (ushort)(param_3 >> 8) & 0xff | (ushort)((param_3 & 0xff00ff) << 8);
  }
  return uVar1;
}

