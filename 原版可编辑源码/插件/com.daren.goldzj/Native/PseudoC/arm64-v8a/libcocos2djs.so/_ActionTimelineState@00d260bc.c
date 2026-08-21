
/* dragonBones::ActionTimelineState::~ActionTimelineState() */

void __thiscall dragonBones::ActionTimelineState::~ActionTimelineState(ActionTimelineState *this)

{
  *(undefined ***)this = &PTR__ActionTimelineState_01c90250;
  TimelineState::_onClear((TimelineState *)this);
  BaseObject::~BaseObject((BaseObject *)this);
  operator_delete(this);
  return;
}

