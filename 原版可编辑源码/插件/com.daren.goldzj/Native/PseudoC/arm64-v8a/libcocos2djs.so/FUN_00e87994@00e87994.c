
int FUN_00e87994(FILE *param_1,long param_2,int param_3)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = fseek(param_1,param_2,param_3);
    return iVar1;
  }
  return -1;
}

