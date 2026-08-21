
int FUN_00a696b0(uchar *param_1,char *param_2)

{
  int iVar1;
  ulong uVar2;
  MD5_CTX MStack_80;
  
  MD5_Init(&MStack_80);
  strlen(param_2);
  uVar2 = FUN_00a2c6e0();
  MD5_Update(&MStack_80,param_2,uVar2 & 0xffffffff);
  iVar1 = MD5_Final(param_1,&MStack_80);
  return iVar1;
}

