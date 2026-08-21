
void _spAnimationState_disposeTrackEntries(long param_1,void *param_2)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
                    /* try { // try from 00d5ac18 to 00e5ac77 has its CatchHandler @ 00d5abec */
  if (param_2 != (void *)0x0) {
    pvVar3 = *(void **)((long)param_2 + 8);
    pvVar2 = *(void **)((long)param_2 + 0x10);
    while( true ) {
      while (pvVar1 = pvVar3, pvVar2 != (void *)0x0) {
        pvVar4 = *(void **)((long)pvVar2 + 0x10);
                    /* catch() { ... } // from try @ 00d5ace0 with catch @ 00d5acf4 */
        if (*(code **)((long)param_2 + 0x18) != (code *)0x0) {
                    /* catch() { ... } // from try @ 00d5ac94 with catch @ 00d5ad04 */
          (**(code **)((long)param_2 + 0x18))(param_1,4,pvVar2,0);
        }
        if (*(code **)(param_1 + 0x18) != (code *)0x0) {
          (**(code **)(param_1 + 0x18))(param_1,4,pvVar2,0);
        }
        spIntArray_dispose(*(undefined8 *)((long)pvVar2 + 0x70));
        pvVar3 = *(void **)((long)pvVar2 + 0x78);
        _spFree(*(void **)((long)pvVar3 + 8));
        _spFree(pvVar3);
        _spFree(*(void **)((long)pvVar2 + 0x80));
                    /* try { // try from 00d5ace0 to 00e5ace3 has its CatchHandler @ 00d5acf4 */
        _spFree(pvVar2);
                    /* try { // try from 00d5ace4 to 00e5ad17 has its CatchHandler @ 00d5ac78 */
        pvVar3 = pvVar1;
        pvVar2 = pvVar4;
      }
      if (*(code **)((long)param_2 + 0x18) != (code *)0x0) {
                    /* try { // try from 00d5ac94 to 00e5ac9b has its CatchHandler @ 00d5ad04 */
        (**(code **)((long)param_2 + 0x18))(param_1,4,param_2,0);
      }
      if (*(code **)(param_1 + 0x18) != (code *)0x0) {
        (**(code **)(param_1 + 0x18))(param_1,4,param_2,0);
      }
      spIntArray_dispose(*(undefined8 *)((long)param_2 + 0x70));
      pvVar2 = *(void **)((long)param_2 + 0x78);
      _spFree(*(void **)((long)pvVar2 + 8));
      _spFree(pvVar2);
                    /* catch() { ... } // from try @ 00d5ac10 with catch @ 00d5ac5c */
      _spFree(*(void **)((long)param_2 + 0x80));
      _spFree(param_2);
      if (pvVar1 == (void *)0x0) break;
                    /* try { // try from 00d5ac78 to 00e5ac93 has its CatchHandler @ 00d5ac78
                       catch() { ... } // from try @ 00d5ac78 with catch @ 00d5ac78
                       catch() { ... } // from try @ 00d5ace4 with catch @ 00d5ac78 */
      pvVar3 = *(void **)((long)pvVar1 + 8);
      pvVar2 = *(void **)((long)pvVar1 + 0x10);
      param_2 = pvVar1;
    }
  }
  return;
}

