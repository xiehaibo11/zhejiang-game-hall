
void FUN_0015a358(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0;
  uVar2 = FUN_0014e0a8(param_1,&local_30);
  lVar4 = 0;
  lVar3 = 0;
  if ((uVar2 & 1) == 0) {
    lVar3 = *param_1;
    if ((ulong)(param_1[1] - lVar3) < local_30) {
      lVar4 = 0;
      lVar3 = 0;
    }
    else {
      lVar4 = lVar3 + local_30;
      *param_1 = lVar4;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3,lVar4);
}

