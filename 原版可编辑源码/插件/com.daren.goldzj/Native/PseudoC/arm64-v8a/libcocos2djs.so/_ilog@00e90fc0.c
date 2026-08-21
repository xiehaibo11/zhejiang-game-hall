
int _ilog(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = 0x20 - (int)LZCOUNT(param_1);
  }
  return iVar1;
}

