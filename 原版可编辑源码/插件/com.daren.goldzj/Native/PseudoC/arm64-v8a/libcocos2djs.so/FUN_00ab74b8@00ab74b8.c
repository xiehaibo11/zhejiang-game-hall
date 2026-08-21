
int FUN_00ab74b8(BIO *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  
  sVar2 = strlen(param_2);
  iVar1 = BIO_write(param_1,param_2,(int)sVar2);
  return iVar1;
}

