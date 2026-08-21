
undefined8 FUN_00a0fcf4(undefined8 param_1,uint *param_2,undefined1 *param_3,ulong param_4)

{
  if (param_4 < 2) {
    return 0xfffffffe;
  }
  if ((param_3[1] & 0xf8) == 0xd8) {
    return 0xffffffff;
  }
  *param_2 = (uint)CONCAT11(param_3[1],*param_3);
  return 2;
}

