
undefined1  [16] FUN_00a2e8b8(long param_1,long param_2,long param_3,long param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if (param_1 - param_3 == 0) {
    auVar1._0_8_ = (double)(param_2 - param_4) / 1000000.0;
    auVar1._8_8_ = 0;
    return auVar1;
  }
  auVar2._0_8_ = (double)(param_2 - param_4) / 1000000.0 + (double)(param_1 - param_3);
  auVar2._8_8_ = 0;
  return auVar2;
}

