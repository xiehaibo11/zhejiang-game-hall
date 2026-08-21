
void _TIFFSwab32BitData(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3 + 3;
  if (-1 < param_3) {
    lVar1 = param_3;
  }
  TIFFSwabArrayOfLong(param_2,lVar1 >> 2);
  return;
}

