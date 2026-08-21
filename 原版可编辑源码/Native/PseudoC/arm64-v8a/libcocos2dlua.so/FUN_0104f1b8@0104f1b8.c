
void FUN_0104f1b8(void)

{
  long lVar1;
  ulong e;
  char acStack_128 [256];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  e = ERR_get_error();
  while (e != 0) {
    ERR_error_string_n(e,acStack_128,0x100);
    e = ERR_get_error();
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

