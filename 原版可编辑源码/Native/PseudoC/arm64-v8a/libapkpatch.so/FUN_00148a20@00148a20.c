
void FUN_00148a20(int param_1,long param_2)

{
  long lVar1;
  
  if (param_1 == 1) {
    lVar1 = FUN_001655f0(0xffffffffffffffff,param_2 + -0x58);
    if (lVar1 == 1) {
      if (*(code **)(param_2 + -0x48) != (code *)0x0) {
        (**(code **)(param_2 + -0x48))(param_2 + 0x20);
      }
      FUN_0015f3cc(param_2 + -0x60);
    }
    return;
  }
  FUN_00149158(*(undefined8 *)(param_2 + -0x38));
                    /* WARNING: Subroutine does not return */
  __cxa_call_unexpected();
}

