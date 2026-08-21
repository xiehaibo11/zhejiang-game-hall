
void spSkeletonClipping_clipEnd2(long param_1)

{
                    /* try { // try from 00d67368 to 00e67373 has its CatchHandler @ 00d67698 */
  if (*(long *)(param_1 + 0x38) != 0) {
    *(long *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
                    /* try { // try from 00d67380 to 00e67397 has its CatchHandler @ 00d6769c */
    spFloatArray_clear(*(undefined8 *)(param_1 + 0x18));
    spFloatArray_clear(*(undefined8 *)(param_1 + 0x20));
    spUnsignedShortArray_clear(*(undefined8 *)(param_1 + 0x28));
                    /* try { // try from 00d67398 to 00e673a3 has its CatchHandler @ 00d67668 */
    spFloatArray_clear(*(undefined8 *)(param_1 + 8));
    return;
  }
  return;
}

