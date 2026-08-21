
undefined1  [16] FUN_01204a34(long param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = (ulong)(uint)((int)(param_2 >> 0x20) + (int)param_2) - (param_2 & 0xffffffff);
  auVar1._0_8_ = **(long **)(param_1 + 8) + (param_2 & 0xffffffff);
  return auVar1;
}

