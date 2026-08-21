
void UnblockSigquit(ulong param_1)

{
  long lVar1;
  int iVar2;
  ulong local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(ulong *)(lVar1 + 0x28);
  sigemptyset((sigset_t *)&stack0xffffffffffffffd0);
  sigaddset((sigset_t *)&stack0xffffffffffffffd0,3);
  iVar2 = pthread_sigmask((uint)((param_1 & 1) != 0),(__sigset_t *)&stack0xffffffffffffffd0,
                          (__sigset_t *)0x0);
  if (*(ulong *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}

