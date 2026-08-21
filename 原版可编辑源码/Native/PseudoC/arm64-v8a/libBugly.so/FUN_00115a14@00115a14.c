
int FUN_00115a14(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = -(uint)(*param_1 < *param_2);
  if (*param_2 < *param_1) {
    iVar1 = 1;
  }
  return iVar1;
}

