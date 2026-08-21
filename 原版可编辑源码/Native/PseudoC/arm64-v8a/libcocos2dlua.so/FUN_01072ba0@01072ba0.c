
ulong FUN_01072ba0(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  
  if (-1 < param_2) {
                    /* catch() { ... } // from try @ 01072b34 with catch @ 01072ba4 */
                    /* catch() { ... } // from try @ 01072acc with catch @ 01072ba8 */
                    /* catch() { ... } // from try @ 01072a9c with catch @ 01072bac */
                    /* catch() { ... } // from try @ 010729f4 with catch @ 01072bb0 */
    return param_3 + param_2 & 0xffffffffffffffc0U &
           (param_3 + param_2 >> 0x3f ^ 0xffffffffffffffffU);
  }
                    /* catch() { ... } // from try @ 01072a80 with catch @ 01072bb4 */
                    /* catch() { ... } // from try @ 01072a70 with catch @ 01072bb8 */
                    /* catch() { ... } // from try @ 010728c4 with catch @ 01072bbc */
  uVar1 = -(param_3 - param_2 & 0xffffffffffffffc0U);
                    /* catch() { ... } // from try @ 0107253c with catch @ 01072bc0 */
  return uVar1 & (long)uVar1 >> 0x3f;
}

