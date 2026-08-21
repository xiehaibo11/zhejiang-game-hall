
long png_get_signature(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2 + 0x2c;
  if (param_2 == 0 || param_1 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}

