
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void delayRestoreSIGILLHandler(void)

{
  int iVar1;
  _union_1457 local_28;
  code *local_20;
  ulong local_8;
  
  local_8 = ___stack_chk_guard;
  sleep(1);
  local_20 = FUN_001075a8;
  sigemptyset((sigset_t *)&stack0xffffffffffffffe8);
  local_28._0_4_ = 0x18000004;
  iVar1 = sigaction(4,(sigaction *)&local_28,(sigaction *)&DAT_0013e1f0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}

