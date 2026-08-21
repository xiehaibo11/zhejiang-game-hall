
/* spine::AnimationState::animationsChanged() */

void __thiscall spine::AnimationState::animationsChanged(AnimationState *this)

{
  long *plVar1;
  long lVar2;
  TrackEntry *pTVar3;
  TrackEntry *pTVar4;
  AnimationState *pAVar5;
  long lVar6;
  
  pAVar5 = this + 0xa0;
  plVar1 = *(long **)pAVar5;
  this[0xb0] = (AnimationState)0x0;
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    plVar1 = (long *)plVar1[2];
    (**(code **)(lVar2 + 8))();
  }
  *(long *)pAVar5 = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  lVar2 = *(long *)(this + 0x58);
  if (lVar2 != 0) {
    lVar6 = 0;
    do {
      pTVar3 = *(TrackEntry **)(*(long *)(this + 0x68) + lVar6 * 8);
      if (pTVar3 != (TrackEntry *)0x0) {
        do {
          pTVar4 = pTVar3;
          pTVar3 = *(TrackEntry **)(pTVar4 + 0x30);
        } while (pTVar3 != (TrackEntry *)0x0);
        do {
          pTVar3 = *(TrackEntry **)(pTVar4 + 0x38);
          if ((pTVar3 == (TrackEntry *)0x0) || (*(int *)(pTVar4 + 0x90) != 3)) {
            computeHold(this,pTVar4);
            pTVar3 = *(TrackEntry **)(pTVar4 + 0x38);
          }
          pTVar4 = pTVar3;
        } while (pTVar3 != (TrackEntry *)0x0);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != lVar2);
    plVar1 = *(long **)pAVar5;
    while (plVar1 != (long *)0x0) {
      lVar2 = *plVar1;
      plVar1 = (long *)plVar1[2];
      (**(code **)(lVar2 + 8))();
    }
  }
  *(long *)pAVar5 = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  if (0 < (int)*(undefined8 *)(this + 0x58)) {
    lVar2 = (long)(int)*(undefined8 *)(this + 0x58);
    do {
      lVar2 = lVar2 + -1;
      for (pTVar3 = *(TrackEntry **)(*(long *)(this + 0x68) + lVar2 * 8);
          pTVar3 != (TrackEntry *)0x0; pTVar3 = *(TrackEntry **)(pTVar3 + 0x30)) {
        computeNotLast(this,pTVar3);
      }
    } while (0 < lVar2);
  }
  return;
}

