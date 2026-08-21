
/* dragonBones::ZOrderTimelineState::~ZOrderTimelineState() */

void __thiscall dragonBones::ZOrderTimelineState::~ZOrderTimelineState(ZOrderTimelineState *this)

{
  *(undefined ***)this = &PTR__ZOrderTimelineState_01c902c0;
  TimelineState::_onClear((TimelineState *)this);
  BaseObject::~BaseObject((BaseObject *)this);
  operator_delete(this);
  return;
}

