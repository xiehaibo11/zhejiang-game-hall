
undefined8 lua_checkstack(long param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_2 < 0x1f41) {
    if ((long)param_2 + (*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20) >> 3) < 0x1f41) {
      if (param_2 < 1) {
        uVar1 = 1;
      }
      else {
        uVar1 = 1;
        if (*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28) <= (long)param_2 * 8) {
          FUN_00bfe0e0();
          return 1;
        }
      }
    }
  }
  return uVar1;
}

