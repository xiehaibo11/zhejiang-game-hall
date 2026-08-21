
/* non-virtual thunk to spine::AnimationState::~AnimationState() */

void __thiscall spine::AnimationState::~AnimationState(AnimationState *this)

{
  void *extraout_x1;
  
  ~AnimationState(this + -8);
  SpineObject::operator_delete((SpineObject *)(this + -8),extraout_x1);
  return;
}

