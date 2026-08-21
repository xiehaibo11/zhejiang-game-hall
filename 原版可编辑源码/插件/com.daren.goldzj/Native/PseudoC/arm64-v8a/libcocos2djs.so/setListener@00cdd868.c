
/* spine::TrackEntry::setListener(spine::AnimationStateListenerObject*) */

void __thiscall
spine::TrackEntry::setListener(TrackEntry *this,AnimationStateListenerObject *param_1)

{
  *(code **)(this + 0xf8) = dummyOnAnimationEventFunc;
  *(AnimationStateListenerObject **)(this + 0x100) = param_1;
  return;
}

