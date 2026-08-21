
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::terminate() */

void std::terminate(void)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  
  plVar1 = (long *)__cxa_get_globals_fast();
  if (((plVar1 != (long *)0x0) && (lVar3 = *plVar1, lVar3 != 0)) &&
     (uVar2 = __cxxabiv1::__isOurExceptionClass((_Unwind_Exception *)(lVar3 + 0x60)),
     (uVar2 & 1) != 0)) {
    FUN_00116abc(*(undefined8 *)(lVar3 + 0x20));
  }
  FUN_00116abc(__cxa_terminate_handler);
                    /* WARNING: Subroutine does not return */
  FUN_00111f20();
}

