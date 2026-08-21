
void _spAnimationState_disposeTrackEntry(void *param_1)

{
  void *__ptr;
  
                    /* catch() { ... } // from try @ 00d5ab84 with catch @ 00d5abd0 */
  spIntArray_dispose(*(undefined8 *)((long)param_1 + 0x70));
  __ptr = *(void **)((long)param_1 + 0x78);
                    /* catch() { ... } // from try @ 00d5ac18 with catch @ 00d5abec */
  _spFree(*(void **)((long)__ptr + 8));
  _spFree(__ptr);
  _spFree(*(void **)((long)param_1 + 0x80));
                    /* try { // try from 00d5ac10 to 00e5ac17 has its CatchHandler @ 00d5ac5c */
  _spFree(param_1);
  return;
}

