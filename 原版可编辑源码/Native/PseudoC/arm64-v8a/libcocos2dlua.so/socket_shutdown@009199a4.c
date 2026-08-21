
int socket_shutdown(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = fcntl(*param_1,3,0);
  fcntl(*param_1,4,(ulong)(uVar1 & 0xfffff7ff));
  shutdown(*param_1,param_2);
  uVar1 = fcntl(*param_1,3,0);
  iVar2 = fcntl(*param_1,4,(ulong)(uVar1 | 0x800));
  return iVar2;
}

