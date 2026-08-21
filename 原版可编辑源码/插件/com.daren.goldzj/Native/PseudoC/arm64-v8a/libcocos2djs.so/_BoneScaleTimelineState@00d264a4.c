
/* dragonBones::BoneScaleTimelineState::~BoneScaleTimelineState() */

void __thiscall
dragonBones::BoneScaleTimelineState::~BoneScaleTimelineState(BoneScaleTimelineState *this)

{
  *(undefined ***)this = &PTR__BoneScaleTimelineState_01c90480;
  BoneTimelineState::_onClear((BoneTimelineState *)this);
  BaseObject::~BaseObject((BaseObject *)this);
  return;
}

