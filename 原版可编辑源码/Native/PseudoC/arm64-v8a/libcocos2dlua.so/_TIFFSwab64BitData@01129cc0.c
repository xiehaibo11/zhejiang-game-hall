
void _TIFFSwab64BitData(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3 + 7;
  if (-1 < param_3) {
    lVar1 = param_3;
  }
  TIFFSwabArrayOfDouble(param_2,lVar1 >> 3);
  return;
}

