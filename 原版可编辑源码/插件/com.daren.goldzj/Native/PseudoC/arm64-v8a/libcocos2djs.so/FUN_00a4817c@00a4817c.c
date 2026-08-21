
int FUN_00a4817c(void *param_1,size_t param_2,uchar *param_3)

{
  int iVar1;
  MD5_CTX MStack_90;
  
  MD5_Init(&MStack_90);
  MD5_Update(&MStack_90,param_1,param_2);
  iVar1 = MD5_Final(param_3,&MStack_90);
  return iVar1;
}

