
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void log2Console(int param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ___stack_chk_guard;
  if (param_1 < currentMode) {
    uVar2 = 0xffffffff;
  }
  else {
    __android_log_vprint();
    uVar2 = 0;
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

