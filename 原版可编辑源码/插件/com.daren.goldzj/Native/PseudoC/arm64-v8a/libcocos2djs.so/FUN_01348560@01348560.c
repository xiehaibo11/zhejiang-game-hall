
void FUN_01348560(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  long unaff_x26;
  
  if (param_2 < 0x40000000) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1f88));
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0,0x1348590);
  (*pcVar1)();
}

