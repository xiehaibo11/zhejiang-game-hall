
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c0fbac(undefined8 param_1,ulong param_2,int param_3)

{
  ulong uVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  char local_b [3];
  long local_8;
  
  local_b[2] = 0x4c;
  local_b[1] = 0x4c;
  local_8 = ___stack_chk_guard;
  if (param_3 == 0) {
    if ((long)param_2 < 0) {
      param_2 = -param_2;
      bVar4 = true;
      pcVar3 = local_b + 1;
    }
    else {
      bVar4 = false;
      pcVar3 = local_b + 1;
    }
  }
  else {
    bVar4 = false;
    local_b[0] = 'U';
    pcVar3 = local_b;
  }
  do {
    pcVar2 = pcVar3;
    uVar1 = param_2 / 10;
    pcVar3 = pcVar2 + -1;
    *pcVar3 = (char)param_2 + (char)uVar1 * -10 + '0';
    param_2 = uVar1;
  } while (uVar1 != 0);
  if (bVar4) {
    pcVar3 = pcVar2 + -2;
    pcVar2[-2] = '-';
  }
  FUN_00bfba1c(param_1,pcVar3,(long)&local_8 - (long)pcVar3);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

