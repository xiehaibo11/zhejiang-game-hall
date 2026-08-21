
undefined8 FT_Stream_Skip(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
                    /* try { // try from 01062adc to 01162b47 has its CatchHandler @ 01062adc
                       catch() { ... } // from try @ 01062adc with catch @ 01062adc
                       catch() { ... } // from try @ 01062bb8 with catch @ 01062adc */
  if (-1 < param_2) {
    uVar1 = *(long *)(param_1 + 0x10) + param_2;
    if (*(code **)(param_1 + 0x28) == (code *)0x0) {
      if (uVar1 <= *(ulong *)(param_1 + 8)) goto LAB_01062b24;
    }
    else {
      lVar2 = (**(code **)(param_1 + 0x28))(param_1,uVar1,0,0);
      if (lVar2 == 0) {
LAB_01062b24:
        *(ulong *)(param_1 + 0x10) = uVar1;
        return 0;
      }
    }
  }
  return 0x55;
}

