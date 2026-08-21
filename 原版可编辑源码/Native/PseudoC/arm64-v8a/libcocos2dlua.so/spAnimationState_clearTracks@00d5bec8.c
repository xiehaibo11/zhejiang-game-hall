
void spAnimationState_clearTracks(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  lVar3 = *(long *)(param_1 + 0x48);
  uVar1 = *(undefined4 *)(lVar3 + 0x18);
                    /* try { // try from 00d5bee8 to 00e5beff has its CatchHandler @ 00d5c274 */
  *(undefined4 *)(lVar3 + 0x18) = 1;
  iVar2 = *(int *)(param_1 + 8);
  if (0 < iVar2) {
    iVar4 = 0;
    do {
                    /* try { // try from 00d5bf00 to 00e5bf77 has its CatchHandler @ 00d5c254 */
      spAnimationState_clearTrack(param_1,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar2 != iVar4);
    lVar3 = *(long *)(param_1 + 0x48);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(lVar3 + 0x18) = uVar1;
  _spEventQueue_drain();
  return;
}

