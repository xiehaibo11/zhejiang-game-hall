
/* dragonBones::SlotDislayTimelineState::~SlotDislayTimelineState() */

void __thiscall
dragonBones::SlotDislayTimelineState::~SlotDislayTimelineState(SlotDislayTimelineState *this)

{
  *(undefined ***)this = &PTR__SlotDislayTimelineState_01c904f0;
  SlotTimelineState::_onClear((SlotTimelineState *)this);
  BaseObject::~BaseObject((BaseObject *)this);
  operator_delete(this);
  return;
}

