
undefined4 socket_listen(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  uVar1 = fcntl(*param_1,3,0);
  fcntl(*param_1,4,(ulong)(uVar1 & 0xfffff7ff));
  iVar2 = listen(*param_1,param_2);
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    puVar3 = (undefined4 *)__errno();
    uVar4 = *puVar3;
  }
  uVar1 = fcntl(*param_1,3,0);
  fcntl(*param_1,4,(ulong)(uVar1 | 0x800));
  return uVar4;
}

