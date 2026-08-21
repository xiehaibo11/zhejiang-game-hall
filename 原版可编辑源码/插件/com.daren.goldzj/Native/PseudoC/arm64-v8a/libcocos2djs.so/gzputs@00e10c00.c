
int gzputs(undefined8 param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  
  sVar2 = strlen(param_2);
  iVar1 = gzwrite(param_1,param_2,sVar2 & 0xffffffff);
  if ((int)sVar2 != 0 && iVar1 == 0) {
    iVar1 = -1;
  }
  return iVar1;
}

