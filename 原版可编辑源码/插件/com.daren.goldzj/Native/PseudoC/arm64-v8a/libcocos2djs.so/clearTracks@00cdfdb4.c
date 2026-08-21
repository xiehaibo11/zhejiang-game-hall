
/* spine::AnimationState::clearTracks() */

void __thiscall spine::AnimationState::clearTracks(AnimationState *this)

{
  EventQueue EVar1;
  EventQueue *this_00;
  ulong uVar2;
  ulong uVar3;
  
  this_00 = *(EventQueue **)(this + 0x90);
  EVar1 = this_00[0x38];
  this_00[0x38] = (EventQueue)0x1;
  uVar3 = *(ulong *)(this + 0x58);
  if (uVar3 != 0) {
    uVar2 = 0;
    do {
      clearTrack(this,uVar2);
      uVar2 = uVar2 + 1;
    } while (uVar3 != uVar2);
    this_00 = *(EventQueue **)(this + 0x90);
  }
  *(undefined8 *)(this + 0x58) = 0;
  this_00[0x38] = EVar1;
  EventQueue::drain(this_00);
  return;
}

