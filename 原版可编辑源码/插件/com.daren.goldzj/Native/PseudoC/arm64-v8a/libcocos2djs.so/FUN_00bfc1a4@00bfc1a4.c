
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bfc1a4(long param_1)

{
  ssize_t sVar1;
  int *piVar2;
  long lVar3;
  long local_10;
  long local_8;
  
  local_10 = *(long *)(param_1 + 0x130);
  local_8 = ___stack_chk_guard;
  sVar1 = sendfile(*(int *)(param_1 + 0x118),*(int *)(param_1 + 0x11c),&local_10,
                   *(size_t *)(param_1 + 0x180));
  if (sVar1 == -1) {
    lVar3 = *(long *)(param_1 + 0x130);
    if (local_10 <= lVar3) {
      piVar2 = (int *)__errno();
      if ((((*piVar2 == 0x16) || (*piVar2 == 5)) || (*piVar2 == 0x58)) || (*piVar2 == 0x12)) {
        *piVar2 = 0;
        lVar3 = FUN_00bfbf18(param_1);
      }
      else {
        lVar3 = -1;
      }
      goto LAB_00bfc1fc;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0x130);
  }
  *(long *)(param_1 + 0x130) = local_10;
  lVar3 = local_10 - lVar3;
LAB_00bfc1fc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}

