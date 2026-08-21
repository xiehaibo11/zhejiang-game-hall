
void spSkeletonClipping_dispose(undefined8 *param_1)

{
                    /* try { // try from 00d6703c to 00e67103 has its CatchHandler @ 00d6703c
                       catch() { ... } // from try @ 00d6703c with catch @ 00d6703c
                       catch() { ... } // from try @ 00d675e0 with catch @ 00d6703c */
  spTriangulator_dispose(*param_1);
  spFloatArray_dispose(param_1[1]);
  spFloatArray_dispose(param_1[2]);
  spFloatArray_dispose(param_1[3]);
  spFloatArray_dispose(param_1[4]);
  spUnsignedShortArray_dispose(param_1[5]);
  spFloatArray_dispose(param_1[6]);
  _spFree(param_1);
  return;
}

