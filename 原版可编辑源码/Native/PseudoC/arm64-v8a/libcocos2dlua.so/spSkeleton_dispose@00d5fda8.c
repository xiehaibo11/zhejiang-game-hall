
void spSkeleton_dispose(void *param_1)

{
  void *pvVar1;
  long lVar2;
  
  _spFree(*(void **)((long)param_1 + 0xa0));
  _spFree(*(void **)((long)param_1 + 0xb0));
  pvVar1 = *(void **)((long)param_1 + 0x10);
  if (0 < *(int *)((long)param_1 + 8)) {
    lVar2 = 0;
    do {
      spBone_dispose(*(undefined8 *)((long)pvVar1 + lVar2 * 8));
      pvVar1 = *(void **)((long)param_1 + 0x10);
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)((long)param_1 + 8));
  }
  _spFree(pvVar1);
  pvVar1 = *(void **)((long)param_1 + 0x28);
  if (0 < *(int *)((long)param_1 + 0x20)) {
    lVar2 = 0;
    do {
      spSlot_dispose(*(undefined8 *)((long)pvVar1 + lVar2 * 8));
      pvVar1 = *(void **)((long)param_1 + 0x28);
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)((long)param_1 + 0x20));
  }
  _spFree(pvVar1);
                    /* try { // try from 00d5fe30 to 00e5fe37 has its CatchHandler @ 00d5ffa8 */
  pvVar1 = *(void **)((long)param_1 + 0x40);
                    /* try { // try from 00d5fe38 to 00e5ff57 has its CatchHandler @ 00d5f8b0 */
  if (0 < *(int *)((long)param_1 + 0x38)) {
    lVar2 = 0;
    do {
      spIkConstraint_dispose(*(undefined8 *)((long)pvVar1 + lVar2 * 8));
      pvVar1 = *(void **)((long)param_1 + 0x40);
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)((long)param_1 + 0x38));
  }
  _spFree(pvVar1);
  pvVar1 = *(void **)((long)param_1 + 0x50);
  if (0 < *(int *)((long)param_1 + 0x48)) {
    lVar2 = 0;
    do {
      spTransformConstraint_dispose(*(undefined8 *)((long)pvVar1 + lVar2 * 8));
      pvVar1 = *(void **)((long)param_1 + 0x50);
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)((long)param_1 + 0x48));
  }
  _spFree(pvVar1);
  pvVar1 = *(void **)((long)param_1 + 0x60);
  if (0 < *(int *)((long)param_1 + 0x58)) {
    lVar2 = 0;
    do {
      spPathConstraint_dispose(*(undefined8 *)((long)pvVar1 + lVar2 * 8));
      pvVar1 = *(void **)((long)param_1 + 0x60);
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)((long)param_1 + 0x58));
  }
  _spFree(pvVar1);
  _spFree(*(void **)((long)param_1 + 0x30));
  _spFree(param_1);
  return;
}

