
void spSkeletonClipping_clipEnd(long param_1,long *param_2)

{
  long lVar1;
  
                    /* try { // try from 00d672fc to 00e67307 has its CatchHandler @ 00d675fc */
  lVar1 = *(long *)(param_1 + 0x38);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x48) == *param_2)) {
    *(long *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    spFloatArray_clear(*(undefined8 *)(param_1 + 0x18));
    spFloatArray_clear(*(undefined8 *)(param_1 + 0x20));
    spUnsignedShortArray_clear(*(undefined8 *)(param_1 + 0x28));
    spFloatArray_clear(*(undefined8 *)(param_1 + 8));
    return;
  }
  return;
}

