
/* v8::base::debug::EnableInProcessStackDumping() */

bool v8::base::debug::EnableInProcessStackDumping(void)

{
  int iVar1;
  _union_1457 local_30;
  undefined8 uStack_28;
  ulong uStack_20;
  ulong uStack_18;
  
  local_30.sa_handler = (__sighandler_t)0x0;
  uStack_18 = 0;
  uStack_20 = 0;
  uStack_28 = 1;
  sigemptyset((sigset_t *)&stack0xffffffffffffffe0);
  iVar1 = sigaction(0xd,(sigaction *)&local_30,(sigaction *)0x0);
  return iVar1 == 0;
}

