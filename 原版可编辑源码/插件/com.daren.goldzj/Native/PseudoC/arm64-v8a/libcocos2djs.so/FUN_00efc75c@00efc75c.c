
bool FUN_00efc75c(int *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = param_2[1] < param_1[1];
  if (*param_1 != *param_2) {
    bVar1 = *param_1 < *param_2;
  }
  return bVar1;
}

