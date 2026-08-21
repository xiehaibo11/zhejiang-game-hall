
/* dragonBones::BoneAllTimelineState::~BoneAllTimelineState() */

void __thiscall dragonBones::BoneAllTimelineState::~BoneAllTimelineState(BoneAllTimelineState *this)

{
  *(undefined ***)this = &PTR__BoneAllTimelineState_01c90330;
  BoneTimelineState::_onClear((BoneTimelineState *)this);
  BaseObject::~BaseObject((BaseObject *)this);
  return;
}

