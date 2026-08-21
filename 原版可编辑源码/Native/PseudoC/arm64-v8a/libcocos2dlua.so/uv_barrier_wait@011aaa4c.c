
bool uv_barrier_wait(void)

{
  int iVar1;
  
  iVar1 = FUN_011aa248();
  if ((iVar1 != 0) && (iVar1 != 0x12345)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return iVar1 == 0x12345;
}

