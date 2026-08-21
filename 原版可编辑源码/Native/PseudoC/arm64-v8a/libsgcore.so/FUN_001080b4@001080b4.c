
void FUN_001080b4(char *param_1)

{
  long lVar1;
  int iVar2;
  uint local_88;
  long local_18;
  
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  iVar2 = stat(param_1,(stat *)&stack0xffffffffffffff68);
  if (*(long *)(lVar1 + 0x28) == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 != -1 && (local_88 & 0xf000) == 0x4000);
}

