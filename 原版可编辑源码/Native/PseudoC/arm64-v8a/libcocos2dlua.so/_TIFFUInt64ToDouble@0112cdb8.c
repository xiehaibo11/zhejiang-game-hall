
undefined1  [16] _TIFFUInt64ToDouble(long param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if (-1 < param_1) {
    auVar2._0_8_ = (double)param_1;
    auVar2._8_8_ = 0;
    return auVar2;
  }
  uVar1 = __floatditf();
  __addtf3(uVar1,0);
  auVar2 = __trunctfdf2();
  return auVar2;
}

