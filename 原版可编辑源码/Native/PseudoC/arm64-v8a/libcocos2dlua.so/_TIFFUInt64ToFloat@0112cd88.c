
undefined1  [16] _TIFFUInt64ToFloat(long param_1)

{
  undefined4 uVar1;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  
  if (-1 < param_1) {
    return ZEXT416((uint)(float)param_1);
  }
  uVar1 = __floatditf();
  __addtf3(uVar1,0);
  __trunctfsf2();
  auVar2._4_4_ = extraout_var;
  auVar2._0_4_ = extraout_s0;
  auVar2._8_8_ = extraout_var_00;
  return auVar2;
}

