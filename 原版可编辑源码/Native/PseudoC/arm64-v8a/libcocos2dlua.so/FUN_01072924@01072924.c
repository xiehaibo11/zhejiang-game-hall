
ulong FUN_01072924(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  
                    /* try { // try from 01072924 to 01172947 has its CatchHandler @ 01072c20 */
  if (-1 < param_2) {
    uVar1 = param_2 + param_3 + 0x10;
    return uVar1 & 0xffffffffffffffe0 & ((long)uVar1 >> 0x3f ^ 0xffffffffffffffffU);
  }
  uVar1 = -((0x10 - param_2) + param_3 & 0xffffffffffffffe0U);
                    /* try { // try from 01072950 to 0117295b has its CatchHandler @ 01072bf0 */
  return uVar1 & (long)uVar1 >> 0x3f;
}

