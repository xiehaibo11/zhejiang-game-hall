
int getIndexOfIntArray(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if (param_3 < 1) {
    return -1;
  }
  if (*param_2 == param_1) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    do {
      param_2 = param_2 + 1;
      iVar1 = iVar1 + 1;
      if (iVar1 == param_3) {
        return -1;
      }
    } while (*param_2 != param_1);
  }
  return iVar1;
}

