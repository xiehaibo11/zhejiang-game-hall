
int FUN_00a4891c(void *param_1,int param_2,int param_3,char *param_4)

{
  int iVar1;
  
  if (param_3 == 0) {
    strlen(param_4);
    iVar1 = FUN_00a16cec();
    if (iVar1 < param_2) {
      memcpy(param_1,param_4,(long)(iVar1 + 1));
      return iVar1;
    }
  }
  return 0;
}

