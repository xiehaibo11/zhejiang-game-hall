
/* dragonBones::IKConstraintTimelineState::~IKConstraintTimelineState() */

void __thiscall
dragonBones::IKConstraintTimelineState::~IKConstraintTimelineState(IKConstraintTimelineState *this)

{
  *(undefined ***)this = &PTR__IKConstraintTimelineState_01c90640;
  ConstraintTimelineState::_onClear((ConstraintTimelineState *)this);
  *(undefined8 *)(this + 0xc0) = 0;
  BaseObject::~BaseObject((BaseObject *)this);
  operator_delete(this);
  return;
}

