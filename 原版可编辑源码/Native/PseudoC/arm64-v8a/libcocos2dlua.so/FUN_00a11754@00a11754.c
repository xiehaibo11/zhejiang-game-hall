
undefined8 FUN_00a11754(undefined8 param_1,undefined1 *param_2,uint param_3)

{
  if (param_3 < 0x100) {
    *param_2 = (char)param_3;
    return 1;
  }
  return 0xffffffff;
}

