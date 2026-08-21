
void spAnimationState_clearTrack(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 < *(int *)(param_1 + 8)) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x10) + (long)param_2 * 8), lVar1 != 0)) {
    _spEventQueue_end(*(undefined8 *)(param_1 + 0x48),lVar1);
    for (lVar2 = *(long *)(lVar1 + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
                    /* try { // try from 00d5bf78 to 00e5bf83 has its CatchHandler @ 00d5c224 */
      _spEventQueue_dispose(*(undefined8 *)(param_1 + 0x48),lVar2);
    }
                    /* try { // try from 00d5bf84 to 00e5bf8b has its CatchHandler @ 00d5c1f0 */
    plVar3 = (long *)(lVar1 + 0x10);
    lVar2 = *plVar3;
    *(undefined8 *)(lVar1 + 8) = 0;
    while (lVar2 != 0) {
      _spEventQueue_end(*(undefined8 *)(param_1 + 0x48),lVar2);
      *plVar3 = 0;
      plVar3 = (long *)(lVar2 + 0x10);
      lVar2 = *plVar3;
                    /* try { // try from 00d5bfa8 to 00e5bfaf has its CatchHandler @ 00d5c1ec */
    }
                    /* try { // try from 00d5bfb4 to 00e5c007 has its CatchHandler @ 00d5c24c */
    *(undefined8 *)(*(long *)(param_1 + 0x10) + (long)*(int *)(lVar1 + 0x20) * 8) = 0;
    _spEventQueue_drain(*(undefined8 *)(param_1 + 0x48));
    return;
  }
  return;
}

