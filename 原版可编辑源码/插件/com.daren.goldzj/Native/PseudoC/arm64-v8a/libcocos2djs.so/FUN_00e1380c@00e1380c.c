
undefined8 FUN_00e1380c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(param_1 + 8))(param_1,0xb0);
  if (plVar1 != (long *)0x0) {
    *plVar1 = param_1;
    plVar1[0x15] = 0;
    plVar1[0x14] = 0;
    plVar1[0x13] = 0;
    plVar1[0x12] = 0;
    plVar1[0x11] = 0;
    plVar1[0x10] = 0;
    plVar1[0xf] = 0;
    plVar1[0xe] = 0;
    plVar1[0xd] = 0;
    plVar1[0xc] = 0;
    plVar1[0xb] = 0;
    plVar1[10] = 0;
    plVar1[9] = 0;
    plVar1[8] = 0;
    plVar1[7] = 0;
    plVar1[6] = 0;
    plVar1[5] = 0;
    plVar1[4] = 0;
    plVar1[3] = 0;
    plVar1[2] = 0;
    plVar1[1] = 0;
    *param_2 = plVar1;
    return 0;
  }
  return 0x40;
}

