
int socket_setblocking(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = fcntl(*param_1,3,0);
  iVar2 = fcntl(*param_1,4,(ulong)(uVar1 & 0xfffff7ff));
  return iVar2;
}

