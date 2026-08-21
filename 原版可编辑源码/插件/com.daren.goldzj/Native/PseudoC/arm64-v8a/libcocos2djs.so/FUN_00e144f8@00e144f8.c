
long FUN_00e144f8(undefined8 *param_1,long param_2)

{
  void *__s;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0xf100000050;
  param_1[2] = FUN_00e1ed84;
  param_1[3] = FUN_00e1edc0;
  __s = (void *)(**(code **)(param_2 + 8))(param_2,0x788);
  if (__s != (void *)0x0) {
    memset(__s,0,0x788);
  }
  param_1[4] = __s;
  return (ulong)(__s == (void *)0x0) << 6;
}

