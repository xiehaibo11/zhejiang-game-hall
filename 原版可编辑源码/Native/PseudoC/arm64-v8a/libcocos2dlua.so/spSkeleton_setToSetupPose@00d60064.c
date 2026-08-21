
void spSkeleton_setToSetupPose(long param_1)

{
  long lVar1;
  
  spSkeleton_setBonesToSetupPose();
                    /* try { // try from 00d60084 to 00e60097 has its CatchHandler @ 00d601a8 */
  memcpy(*(void **)(param_1 + 0x30),*(void **)(param_1 + 0x28),(long)*(int *)(param_1 + 0x20) << 3);
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar1 = 0;
    do {
                    /* try { // try from 00d60098 to 00e600a3 has its CatchHandler @ 00d601a4 */
      spSlot_setToSetupPose(*(undefined8 *)(*(long *)(param_1 + 0x28) + lVar1 * 8));
                    /* try { // try from 00d600a4 to 00e600b7 has its CatchHandler @ 00d60194 */
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0x20));
  }
                    /* try { // try from 00d600bc to 00e600c3 has its CatchHandler @ 00d60190 */
  return;
}

