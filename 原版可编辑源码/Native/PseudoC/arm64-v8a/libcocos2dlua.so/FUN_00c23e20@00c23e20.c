
undefined8 FUN_00c23e20(long param_1,ulong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 1;
  }
  else {
    if (-1 < (long)param_2) {
      uVar1 = FUN_00c23a74();
      return uVar1;
    }
    uVar1 = 0x7fffffffffffffff;
    if (param_1 != 0) {
      if (param_1 == 1) {
        return 1;
      }
      uVar1 = 0;
      if (param_1 == -1) {
        uVar1 = 0xffffffffffffffff;
        if ((param_2 & 1) == 0) {
          uVar1 = 1;
        }
        return uVar1;
      }
    }
  }
  return uVar1;
}

