
void FUN_001015e8(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  FUN_00101754();
  (**(code **)(extraout_x8 + 0xe8))();
  FUN_0010181c();
  if ((bool)in_ZR) {
    FUN_0010185c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

