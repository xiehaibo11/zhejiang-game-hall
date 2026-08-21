
ulong FUN_01072a88(undefined8 param_1,long param_2,long param_3)

{
  if (-1 < param_2) {
    return param_3 + param_2 & (param_3 + param_2 >> 0x3f ^ 0xffffffffffffffffU);
  }
                    /* try { // try from 01072a9c to 01172aa7 has its CatchHandler @ 01072bac */
  return param_2 - param_3 & param_2 - param_3 >> 0x3f;
}

