
ulong FUN_00e34ed8(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  
  if (-1 < param_2) {
    return param_3 + param_2 & 0xffffffffffffffc0U &
           (param_3 + param_2 >> 0x3f ^ 0xffffffffffffffffU);
  }
  uVar1 = -(param_3 - param_2 & 0xffffffffffffffc0U);
  return uVar1 & (long)uVar1 >> 0x3f;
}

