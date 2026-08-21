
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bf0ccc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  _union_1457 local_28;
  code *local_20;
  ulong local_18;
  ulong uStack_10;
  ulong local_8;
  
  local_28.sa_handler = (__sighandler_t)0x0;
  local_20 = (code *)0x0;
  local_18 = 0;
  uStack_10 = 0;
  local_8 = ___stack_chk_guard;
  iVar1 = sigfillset((sigset_t *)&stack0xffffffffffffffe8);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar4 = 0x80000000;
  if (param_2 == 0) {
    uVar4 = 0;
  }
  local_20 = FUN_00bf0e28;
  local_28._0_4_ = uVar4;
  iVar2 = sigaction(param_1,(sigaction *)&local_28,(sigaction *)0x0);
  iVar1 = 0;
  if (iVar2 != 0) {
    piVar3 = (int *)__errno();
    iVar1 = -*piVar3;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}

