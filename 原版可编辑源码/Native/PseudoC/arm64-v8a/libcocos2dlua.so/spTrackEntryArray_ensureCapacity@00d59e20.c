
void spTrackEntryArray_ensureCapacity(long param_1,ulong param_2)

{
  void *pvVar1;
  
  if (*(int *)(param_1 + 4) < (int)param_2) {
                    /* try { // try from 00d59e38 to 00e59e3f has its CatchHandler @ 00d59e84 */
                    /* try { // try from 00d59e40 to 00e59e9f has its CatchHandler @ 00d59e14 */
    *(int *)(param_1 + 4) = (int)param_2;
    pvVar1 = _spRealloc(*(void **)(param_1 + 8),
                        -(param_2 >> 0x1f & 1) & 0xfffffff800000000 | (param_2 & 0xffffffff) << 3);
    *(void **)(param_1 + 8) = pvVar1;
  }
  return;
}

