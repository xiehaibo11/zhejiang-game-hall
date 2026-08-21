
void FUN_00148fa0(int param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == 1) {
    lVar2 = *(long *)(param_2 + -0x58);
    if ((lVar2 != 0) && (lVar1 = FUN_001655f0(0xffffffffffffffff,lVar2 + -0x78), lVar1 == 1)) {
      if (*(code **)(lVar2 + -0x68) != (code *)0x0) {
        (**(code **)(lVar2 + -0x68))(lVar2);
      }
      FUN_0015f3cc(lVar2 + -0x80);
    }
    FUN_0015f3cc(param_2 + -0x60);
    return;
  }
  FUN_00149158(*(undefined8 *)(param_2 + -0x38));
                    /* WARNING: Subroutine does not return */
  __cxa_call_unexpected();
}

