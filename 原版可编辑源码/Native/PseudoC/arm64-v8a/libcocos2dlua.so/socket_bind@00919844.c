
undefined4 socket_bind(int *param_1,sockaddr *param_2,socklen_t param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
                    /* try { // try from 00919848 to 00a19a4b has its CatchHandler @ 00919848
                       catch() { ... } // from try @ 00919848 with catch @ 00919848
                       catch() { ... } // from try @ 00919acc with catch @ 00919848 */
  uVar1 = fcntl(*param_1,3,0);
  fcntl(*param_1,4,(ulong)(uVar1 & 0xfffff7ff));
  iVar2 = bind(*param_1,param_2,param_3);
  uVar4 = 0;
  if (iVar2 < 0) {
    puVar3 = (undefined4 *)__errno();
    uVar4 = *puVar3;
  }
  uVar1 = fcntl(*param_1,3,0);
  fcntl(*param_1,4,(ulong)(uVar1 | 0x800));
  return uVar4;
}

