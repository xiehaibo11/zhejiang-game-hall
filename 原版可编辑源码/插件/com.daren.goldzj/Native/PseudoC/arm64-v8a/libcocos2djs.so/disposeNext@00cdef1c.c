
/* spine::AnimationState::disposeNext(spine::TrackEntry*) */

void __thiscall spine::AnimationState::disposeNext(AnimationState *this,TrackEntry *param_1)

{
  TrackEntry *pTVar1;
  
  for (pTVar1 = *(TrackEntry **)(param_1 + 0x28); pTVar1 != (TrackEntry *)0x0;
      pTVar1 = *(TrackEntry **)(pTVar1 + 0x28)) {
    EventQueue::dispose(*(EventQueue **)(this + 0x90),pTVar1);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}

