
void spTrackEntryArray_add(int *param_1,undefined8 param_2)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *param_1;
  if (iVar2 == param_1[1]) {
                    /* catch() { ... } // from try @ 00d59e38 with catch @ 00d59e84 */
    uVar3 = (uint)((float)iVar2 * 1.75);
    if ((int)uVar3 < 9) {
      uVar3 = 8;
    }
                    /* try { // try from 00d59ea0 to 00e59ecf has its CatchHandler @ 00d59ea0
                       catch() { ... } // from try @ 00d59ea0 with catch @ 00d59ea0
                       catch() { ... } // from try @ 00d59f18 with catch @ 00d59ea0 */
    param_1[1] = uVar3;
    pvVar1 = _spRealloc(*(void **)(param_1 + 2),(ulong)uVar3 << 3);
    iVar2 = *param_1;
    *(void **)(param_1 + 2) = pvVar1;
  }
  else {
    pvVar1 = *(void **)(param_1 + 2);
  }
  *param_1 = iVar2 + 1;
  *(undefined8 *)((long)pvVar1 + (long)iVar2 * 8) = param_2;
  return;
}

