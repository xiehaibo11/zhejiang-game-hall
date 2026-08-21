
void spSkeleton_setSlotsToSetupPose(long param_1)

{
  long lVar1;
  
                    /* catch() { ... } // from try @ 00d60098 with catch @ 00d601a4 */
                    /* catch() { ... } // from try @ 00d60084 with catch @ 00d601a8 */
  memcpy(*(void **)(param_1 + 0x30),*(void **)(param_1 + 0x28),(long)*(int *)(param_1 + 0x20) << 3);
  if (0 < *(int *)(param_1 + 0x20)) {
                    /* catch() { ... } // from try @ 00d60114 with catch @ 00d601c4 */
    lVar1 = 0;
    do {
                    /* catch() { ... } // from try @ 00d600d0 with catch @ 00d601c8 */
      spSlot_setToSetupPose(*(undefined8 *)(*(long *)(param_1 + 0x28) + lVar1 * 8));
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0x20));
  }
  return;
}

