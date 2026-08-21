
void _TIFFSwab16BitData(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 < 0) {
    param_3 = param_3 + 1;
  }
  TIFFSwabArrayOfShort(param_2,param_3 >> 1);
  return;
}

