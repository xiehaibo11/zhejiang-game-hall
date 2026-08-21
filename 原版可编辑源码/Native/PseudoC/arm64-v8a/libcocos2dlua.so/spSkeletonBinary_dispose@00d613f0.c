
void spSkeletonBinary_dispose(void *param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
                    /* try { // try from 00d613f4 to 00e613fb has its CatchHandler @ 00d614fc */
  if (*(int *)((long)param_1 + 0x18) != 0) {
    spAttachmentLoader_dispose(*(undefined8 *)((long)param_1 + 8));
  }
                    /* try { // try from 00d61414 to 00e61417 has its CatchHandler @ 00d61500 */
  __ptr = *(void **)((long)param_1 + 0x28);
  if (0 < *(int *)((long)param_1 + 0x1c)) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      _spFree(*(void **)((long)__ptr + lVar1));
                    /* try { // try from 00d61438 to 00e6143f has its CatchHandler @ 00d614f8 */
      _spFree(*(void **)(*(long *)((long)param_1 + 0x28) + lVar1 + 8));
      __ptr = *(void **)((long)param_1 + 0x28);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x20;
                    /* try { // try from 00d61458 to 00e6146b has its CatchHandler @ 00d61518 */
    } while (lVar2 < *(int *)((long)param_1 + 0x1c));
  }
  _spFree(__ptr);
  _spFree(*(void **)((long)param_1 + 0x10));
                    /* try { // try from 00d6146c to 00e614eb has its CatchHandler @ 00d610ac */
  _spFree(param_1);
  return;
}

