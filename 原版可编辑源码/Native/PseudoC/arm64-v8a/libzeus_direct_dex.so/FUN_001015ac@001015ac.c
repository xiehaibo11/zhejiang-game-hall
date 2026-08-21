
void FUN_001015ac(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  FUN_00101754();
  (**(code **)(extraout_x8 + 0x410))();
  FUN_0010181c();
  if ((bool)in_ZR) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

