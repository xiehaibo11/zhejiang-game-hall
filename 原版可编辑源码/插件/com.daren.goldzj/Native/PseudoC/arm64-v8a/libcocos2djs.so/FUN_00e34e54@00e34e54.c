
ulong FUN_00e34e54(undefined8 param_1,long param_2,long param_3)

{
  if (-1 < param_2) {
    return param_3 + param_2 & (param_3 + param_2 >> 0x3f ^ 0xffffffffffffffffU);
  }
  return param_2 - param_3 & param_2 - param_3 >> 0x3f;
}

