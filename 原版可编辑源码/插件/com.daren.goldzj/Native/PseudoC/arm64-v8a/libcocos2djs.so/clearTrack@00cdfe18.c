
/* spine::AnimationState::clearTrack(unsigned long) */

void __thiscall spine::AnimationState::clearTrack(AnimationState *this,ulong param_1)

{
  TrackEntry *pTVar1;
  TrackEntry *pTVar2;
  TrackEntry *pTVar3;
  
  if ((param_1 < *(ulong *)(this + 0x58)) &&
     (pTVar2 = *(TrackEntry **)(*(long *)(this + 0x68) + param_1 * 8), pTVar2 != (TrackEntry *)0x0))
  {
    EventQueue::end(*(EventQueue **)(this + 0x90),pTVar2);
    for (pTVar3 = *(TrackEntry **)(pTVar2 + 0x28); pTVar3 != (TrackEntry *)0x0;
        pTVar3 = *(TrackEntry **)(pTVar3 + 0x28)) {
      EventQueue::dispose(*(EventQueue **)(this + 0x90),pTVar3);
    }
    *(undefined8 *)(pTVar2 + 0x28) = 0;
    pTVar3 = pTVar2;
    for (pTVar1 = *(TrackEntry **)(pTVar2 + 0x30); pTVar1 != (TrackEntry *)0x0;
        pTVar1 = *(TrackEntry **)(pTVar1 + 0x30)) {
      EventQueue::end(*(EventQueue **)(this + 0x90),pTVar1);
      *(undefined8 *)(pTVar3 + 0x30) = 0;
      *(undefined8 *)(pTVar3 + 0x38) = 0;
      pTVar3 = pTVar1;
    }
    *(undefined8 *)(*(long *)(this + 0x68) + (long)*(int *)(pTVar2 + 0x40) * 8) = 0;
    EventQueue::drain(*(EventQueue **)(this + 0x90));
    return;
  }
  return;
}

