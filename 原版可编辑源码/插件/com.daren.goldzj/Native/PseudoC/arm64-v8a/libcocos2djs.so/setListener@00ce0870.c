
/* spine::AnimationState::setListener(spine::AnimationStateListenerObject*) */

void __thiscall
spine::AnimationState::setListener(AnimationState *this,AnimationStateListenerObject *param_1)

{
  *(code **)(this + 0xb8) = dummyOnAnimationEventFunc;
  *(AnimationStateListenerObject **)(this + 0xc0) = param_1;
  return;
}

