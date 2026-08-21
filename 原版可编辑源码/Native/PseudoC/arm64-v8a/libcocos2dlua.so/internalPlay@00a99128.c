
/* fairygui::Transition::internalPlay() */

void __thiscall fairygui::Transition::internalPlay(Transition *this)

{
  bool bVar1;
  TransitionItem *pTVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar3 = *(long *)(this + 0x48);
  uVar6 = *(undefined8 *)(*(long *)(this + 0x40) + 0xc0);
  uVar4 = *(long *)(this + 0x50) - lVar3;
  iVar5 = (int)(uVar4 >> 3);
  *(undefined4 *)(this + 100) = 0;
  *(undefined8 *)(this + 0x6c) = uVar6;
  if (this[0xb4] == (Transition)0x0) {
    if (0 < iVar5) {
      lVar7 = 0;
      bVar1 = false;
      while( true ) {
                    /* try { // try from 00a991a8 to 00b991af has its CatchHandler @ 00a991ec */
        pTVar2 = *(TransitionItem **)(lVar3 + lVar7 * 8);
                    /* try { // try from 00a991b0 to 00b99207 has its CatchHandler @ 00a99114 */
        if (*(long *)(pTVar2 + 0x88) != 0) {
          if (((*(int *)(pTVar2 + 0x20) != 7) || (*(float *)(this + 0xcc) == 0.0)) ||
             (*(float *)(this + 0xcc) < *(float *)pTVar2)) {
            playItem(this,pTVar2);
          }
          else {
            bVar1 = true;
            *(undefined1 *)(*(long *)(pTVar2 + 0x48) + 5) = 0;
          }
        }
        if ((uVar4 >> 3 & 0xffffffff) - 1 == lVar7) break;
        lVar3 = *(long *)(this + 0x48);
                    /* catch() { ... } // from try @ 00a991a8 with catch @ 00a991ec */
        lVar7 = lVar7 + 1;
      }
      if (bVar1) {
        skipAnimations(this);
        return;
      }
    }
  }
  else if (0 < iVar5) {
    lVar7 = (long)(uVar4 * 0x20000000) >> 0x20;
    while( true ) {
      lVar7 = lVar7 + -1;
      pTVar2 = *(TransitionItem **)(lVar3 + lVar7 * 8);
      if (*(long *)(pTVar2 + 0x88) != 0) {
        playItem(this,pTVar2);
      }
      if (lVar7 < 1) break;
      lVar3 = *(long *)(this + 0x48);
    }
  }
  return;
}

