
undefined8 FUN_01491398(undefined8 param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  
  if (param_3[1] - *param_3 == 8) {
    plVar2 = *(long **)*param_3;
    if (((ulong)plVar2 & 1) == 0) {
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      uVar1 = (**(code **)(*plVar2 + 0x30))(plVar2,0x2005);
      if (((((uVar1 & 1) != 0) ||
           (uVar1 = (**(code **)(*plVar2 + 0x30))(plVar2,0x4d), (uVar1 & 1) != 0)) ||
          (uVar1 = (**(code **)(*plVar2 + 0x30))(plVar2,0x721), (uVar1 & 1) != 0)) ||
         (uVar1 = (**(code **)(*plVar2 + 0x30))(plVar2,0xb01), (uVar1 & 1) != 0)) {
        return 1;
      }
    }
    else {
      if ((~(uint)plVar2 & 0xb00) == 0) {
        return 1;
      }
      if (((ulong)plVar2 & 0x720) == 0x720) {
        return 1;
      }
      if (((ulong)plVar2 & 0x2004) == 0x2004) {
        return 1;
      }
      if (((ulong)plVar2 & 0x4c) == 0x4c) {
        return 1;
      }
    }
  }
  return 0;
}

