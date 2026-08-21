
void spAnimationState_dispose(void *param_1)

{
  long lVar1;
  void *pvVar2;
  
  if (0 < *(int *)((long)param_1 + 8)) {
    lVar1 = 0;
    do {
      _spAnimationState_disposeTrackEntries
                (param_1,*(undefined8 *)(*(long *)((long)param_1 + 0x10) + lVar1 * 8));
                    /* catch() { ... } // from try @ 00d5ae64 with catch @ 00d5aeac */
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)((long)param_1 + 8));
  }
                    /* catch() { ... } // from try @ 00d5ae1c with catch @ 00d5aebc */
  _spFree(*(void **)((long)param_1 + 0x10));
  pvVar2 = *(void **)((long)param_1 + 0x48);
  _spFree(*(void **)((long)pvVar2 + 8));
  _spFree(pvVar2);
                    /* try { // try from 00d5aed8 to 00e5af2b has its CatchHandler @ 00d5aed8
                       catch() { ... } // from try @ 00d5aed8 with catch @ 00d5aed8
                       catch() { ... } // from try @ 00d5af30 with catch @ 00d5aed8 */
  _spFree(*(void **)((long)param_1 + 0x40));
  _spFree(*(void **)((long)param_1 + 0x50));
  pvVar2 = *(void **)((long)param_1 + 0x28);
  _spFree(*(void **)((long)pvVar2 + 8));
  _spFree(pvVar2);
  _spFree(param_1);
  return;
}

