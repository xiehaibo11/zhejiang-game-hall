
/* dragonBones::BoneRotateTimelineState::~BoneRotateTimelineState() */

void __thiscall
dragonBones::BoneRotateTimelineState::~BoneRotateTimelineState(BoneRotateTimelineState *this)

{
  *(undefined ***)this = &PTR__BoneRotateTimelineState_01c90410;
  BoneTimelineState::_onClear((BoneTimelineState *)this);
  BaseObject::~BaseObject((BaseObject *)this);
  operator_delete(this);
  return;
}

