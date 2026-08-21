
long FUN_00c23d40(long param_1,long param_2)

{
  long lVar1;
  
  if (param_2 == 0) {
    return -0x8000000000000000;
  }
  if ((param_2 == -1) && (param_1 == -0x8000000000000000)) {
    return -0x8000000000000000;
  }
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_1 / param_2;
  }
  return lVar1;
}

