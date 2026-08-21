
__off_t FUN_00dcfcac(int param_1)

{
  __off_t _Var1;
  int iVar2;
  __off_t local_60;
  
  iVar2 = fstat(param_1,(stat *)&stack0xffffffffffffff70);
  _Var1 = 0;
  if (-1 < iVar2) {
    _Var1 = local_60;
  }
  return _Var1;
}

