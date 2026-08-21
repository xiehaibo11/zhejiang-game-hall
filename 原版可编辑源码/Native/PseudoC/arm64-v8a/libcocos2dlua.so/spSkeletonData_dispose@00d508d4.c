
void spSkeletonData_dispose(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  
  pvVar1 = (void *)param_1[4];
  if (0 < *(int *)(param_1 + 3)) {
    lVar2 = 0;
    do {
      spBoneData_dispose(*(undefined8 *)((long)pvVar1 + lVar2 * 8));
      pvVar1 = (void *)param_1[4];
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 3));
  }
  _spFree(pvVar1);
                    /* catch() { ... } // from try @ 00d50720 with catch @ 00d5091c */
  pvVar1 = (void *)param_1[6];
  if (0 < *(int *)(param_1 + 5)) {
    lVar2 = 0;
    do {
      spSlotData_dispose(*(undefined8 *)((long)pvVar1 + lVar2 * 8));
                    /* catch() { ... } // from try @ 00d5087c with catch @ 00d50938 */
      pvVar1 = (void *)param_1[6];
                    /* catch() { ... } // from try @ 00d50870 with catch @ 00d5093c */
      lVar2 = lVar2 + 1;
                    /* catch() { ... } // from try @ 00d50780 with catch @ 00d50940 */
                    /* catch() { ... } // from try @ 00d50898 with catch @ 00d50944 */
    } while (lVar2 < *(int *)(param_1 + 5));
  }
  _spFree(pvVar1);
  pvVar1 = (void *)param_1[8];
  if (0 < *(int *)(param_1 + 7)) {
    lVar2 = 0;
    do {
                    /* catch() { ... } // from try @ 00d509b8 with catch @ 00d50960
                       catch() { ... } // from try @ 00d50d30 with catch @ 00d50960 */
      spSkin_dispose(*(undefined8 *)((long)pvVar1 + lVar2 * 8));
      pvVar1 = (void *)param_1[8];
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 7));
  }
  _spFree(pvVar1);
  pvVar1 = (void *)param_1[0xb];
  if (0 < *(int *)(param_1 + 10)) {
    lVar2 = 0;
    do {
      spEventData_dispose(*(undefined8 *)((long)pvVar1 + lVar2 * 8));
      pvVar1 = (void *)param_1[0xb];
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 10));
  }
                    /* try { // try from 00d509b0 to 00e509b7 has its CatchHandler @ 00d50d94 */
  _spFree(pvVar1);
                    /* try { // try from 00d509b8 to 00e50a47 has its CatchHandler @ 00d50960 */
  pvVar1 = (void *)param_1[0xd];
  if (0 < *(int *)(param_1 + 0xc)) {
    lVar2 = 0;
    do {
      spAnimation_dispose(*(undefined8 *)((long)pvVar1 + lVar2 * 8));
      pvVar1 = (void *)param_1[0xd];
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0xc));
  }
  _spFree(pvVar1);
  pvVar1 = (void *)param_1[0xf];
  if (0 < *(int *)(param_1 + 0xe)) {
    lVar2 = 0;
    do {
      spIkConstraintData_dispose(*(undefined8 *)((long)pvVar1 + lVar2 * 8));
      pvVar1 = (void *)param_1[0xf];
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0xe));
  }
  _spFree(pvVar1);
  pvVar1 = (void *)param_1[0x11];
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar2 = 0;
    do {
      spTransformConstraintData_dispose(*(undefined8 *)((long)pvVar1 + lVar2 * 8));
      pvVar1 = (void *)param_1[0x11];
      lVar2 = lVar2 + 1;
                    /* try { // try from 00d50a48 to 00e50c67 has its CatchHandler @ 00d50db0 */
    } while (lVar2 < *(int *)(param_1 + 0x10));
  }
  _spFree(pvVar1);
  pvVar1 = (void *)param_1[0x13];
  if (0 < *(int *)(param_1 + 0x12)) {
    lVar2 = 0;
    do {
      spPathConstraintData_dispose(*(undefined8 *)((long)pvVar1 + lVar2 * 8));
      pvVar1 = (void *)param_1[0x13];
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x12));
  }
  _spFree(pvVar1);
  _spFree((void *)param_1[1]);
  _spFree((void *)*param_1);
  _spFree(param_1);
  return;
}

