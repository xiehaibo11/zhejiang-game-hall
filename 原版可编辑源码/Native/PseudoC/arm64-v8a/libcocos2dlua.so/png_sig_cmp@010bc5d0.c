
int png_sig_cmp(long param_1,ulong param_2,size_t param_3)

{
  size_t __n;
  int iVar1;
  
  if (param_3 < 9) {
    if (param_3 == 0) {
      return -1;
    }
  }
  else {
    param_3 = 8;
  }
  if (7 < param_2) {
    return -1;
  }
  __n = 8 - param_2;
  if (param_3 + param_2 < 9) {
    __n = param_3;
  }
  iVar1 = memcmp((void *)(param_1 + param_2),&UNK_01472948 + param_2,__n);
  return iVar1;
}

