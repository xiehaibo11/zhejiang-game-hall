
undefined8 delayRestoreSIGILLHandler(void)

{
  long lVar1;
  int iVar2;
  _union_1457 local_48;
  code *local_40;
  ulong local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(ulong *)(lVar1 + 0x28);
  sleep(1);
  local_40 = FUN_001086ac;
  sigemptyset((sigset_t *)&stack0xffffffffffffffc8);
  local_48._0_4_ = 0x18000004;
  iVar2 = sigaction(4,(sigaction *)&local_48,(sigaction *)&DAT_0013f258);
  if (*(ulong *)(lVar1 + 0x28) == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}

