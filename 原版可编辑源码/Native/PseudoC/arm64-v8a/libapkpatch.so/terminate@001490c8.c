
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::terminate() */

void std::terminate(void)

{
  long *plVar1;
  ulong uVar2;
  long unaff_x19;
  
  plVar1 = (long *)__cxa_get_globals_fast();
  if ((plVar1 != (long *)0x0) && (unaff_x19 = *plVar1, unaff_x19 != 0)) goto LAB_001490f0;
  do {
    FUN_00149158(__cxa_terminate_handler);
LAB_001490f0:
    uVar2 = FUN_001488a4(unaff_x19 + 0x60);
  } while ((uVar2 & 1) == 0);
  FUN_00149158(*(undefined8 *)(unaff_x19 + 0x28));
                    /* WARNING: Subroutine does not return */
  FUN_00138470();
}

