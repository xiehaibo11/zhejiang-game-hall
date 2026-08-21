
undefined8 FUN_00a0fe80(undefined8 param_1,uint *param_2,uint param_3,ulong param_4)

{
  uint uVar1;
  
  if (3 < param_4) {
    uVar1 = (param_3 & 0xff00ff00) >> 8 | (param_3 & 0xff00ff) << 8;
    *param_2 = uVar1 >> 0x10 | uVar1 << 0x10;
    return 4;
  }
  return 0xfffffffe;
}

