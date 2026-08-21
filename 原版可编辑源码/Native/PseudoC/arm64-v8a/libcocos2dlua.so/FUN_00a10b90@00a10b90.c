
undefined8 FUN_00a10b90(undefined8 param_1,uint *param_2,ushort *param_3,ulong param_4)

{
  if (param_4 < 2) {
    return 0xfffffffe;
  }
  if (*param_3 >> 0xb == 0x1b) {
    return 0xffffffff;
  }
  *param_2 = (uint)*param_3;
  return 2;
}

