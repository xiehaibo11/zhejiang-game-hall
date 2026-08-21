
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bf0adc(void)

{
  int *piVar1;
  ssize_t sVar2;
  undefined8 uVar3;
  undefined1 local_9;
  long local_8;
  
  local_9 = 0x2a;
  local_8 = ___stack_chk_guard;
  do {
    sVar2 = write(DAT_01d3bc84,&local_9,1);
    if (-1 < (int)sVar2) {
      uVar3 = 0;
      goto LAB_00bf0b38;
    }
    piVar1 = (int *)__errno();
  } while (*piVar1 == 4);
  uVar3 = 0xffffffff;
LAB_00bf0b38:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

