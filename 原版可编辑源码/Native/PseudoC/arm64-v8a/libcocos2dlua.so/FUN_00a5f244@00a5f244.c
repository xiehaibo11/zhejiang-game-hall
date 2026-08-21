
undefined8
FUN_00a5f244(undefined8 param_1,long *param_2,undefined1 *param_3,long param_4,uint param_5,
            undefined8 *param_6)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  
                    /* catch() { ... } // from try @ 00a5eed0 with catch @ 00a5f244
                       catch() { ... } // from try @ 00a5f210 with catch @ 00a5f244 */
                    /* catch() { ... } // from try @ 00a5f068 with catch @ 00a5f248
                       catch() { ... } // from try @ 00a5f1f8 with catch @ 00a5f248 */
                    /* catch() { ... } // from try @ 00a5edf8 with catch @ 00a5f24c
                       catch() { ... } // from try @ 00a5f1c4 with catch @ 00a5f24c */
                    /* catch() { ... } // from try @ 00a5f030 with catch @ 00a5f250 */
                    /* catch() { ... } // from try @ 00a5f018 with catch @ 00a5f254 */
                    /* catch() { ... } // from try @ 00a5f008 with catch @ 00a5f258 */
                    /* catch() { ... } // from try @ 00a5ee98 with catch @ 00a5f25c */
                    /* catch() { ... } // from try @ 00a5ee80 with catch @ 00a5f260 */
                    /* catch() { ... } // from try @ 00a5edb8 with catch @ 00a5f264 */
  if (7 < param_5) {
                    /* catch() { ... } // from try @ 00a5eda0 with catch @ 00a5f268 */
                    /* catch() { ... } // from try @ 00a5ed90 with catch @ 00a5f26c */
                    /* catch() { ... } // from try @ 00a5ed80 with catch @ 00a5f270 */
                    /* catch() { ... } // from try @ 00a5ef84 with catch @ 00a5f274
                       catch() { ... } // from try @ 00a5f228 with catch @ 00a5f274 */
    uVar3 = 0;
                    /* catch() { ... } // from try @ 00a5ed64 with catch @ 00a5f278
                       catch() { ... } // from try @ 00a5f0a8 with catch @ 00a5f278 */
    do {
      uVar1 = (int)uVar3 + 1;
      plVar2 = (long *)(param_4 + (ulong)uVar1);
                    /* catch() { ... } // from try @ 00a5efcc with catch @ 00a5f288
                       catch() { ... } // from try @ 00a5f0cc with catch @ 00a5f288 */
      if (*plVar2 == 0x312e312f70747468) {
        *param_2 = (long)plVar2;
                    /* catch() { ... } // from try @ 00a5ef00 with catch @ 00a5f2d4
                       catch() { ... } // from try @ 00a5f114 with catch @ 00a5f2d4 */
        *param_3 = *(undefined1 *)(param_4 + uVar3);
        FUN_00a38740(*param_6,"NPN, negotiated HTTP1.1\n");
        goto LAB_00a5f2e8;
      }
      uVar1 = uVar1 + *(byte *)(param_4 + uVar3);
      uVar3 = (ulong)uVar1;
                    /* catch() { ... } // from try @ 00a5ee24 with catch @ 00a5f298
                       catch() { ... } // from try @ 00a5f0f0 with catch @ 00a5f298 */
    } while (uVar1 + 8 <= param_5);
  }
  FUN_00a38740(*param_6,"NPN, no overlap, use HTTP1.1\n");
  *param_2 = (long)"http/1.1";
  *param_3 = 8;
LAB_00a5f2e8:
  *(undefined4 *)(param_6 + 0xe4) = 2;
  return 0;
}

