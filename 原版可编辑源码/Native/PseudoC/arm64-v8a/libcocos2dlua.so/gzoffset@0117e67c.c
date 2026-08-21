
__off_t gzoffset(long param_1)

{
  __off_t _Var1;
  
  if ((param_1 == 0) ||
     ((*(int *)(param_1 + 0x18) != 0x79b1 && (*(int *)(param_1 + 0x18) != 0x1c4f)))) {
    _Var1 = -1;
  }
  else {
    _Var1 = lseek(*(int *)(param_1 + 0x1c),0,1);
    if ((_Var1 != -1) && (*(int *)(param_1 + 0x18) == 0x1c4f)) {
      _Var1 = _Var1 - (ulong)*(uint *)(param_1 + 0x80);
    }
  }
  return _Var1;
}

