
/* dragonBones::SlotColorTimelineState::~SlotColorTimelineState() */

void __thiscall
dragonBones::SlotColorTimelineState::~SlotColorTimelineState(SlotColorTimelineState *this)

{
  *(undefined ***)this = &PTR__SlotColorTimelineState_01c90560;
  SlotTimelineState::_onClear((SlotTimelineState *)this);
  this[0xc0] = (SlotColorTimelineState)0x0;
  if (*(void **)(this + 200) != (void *)0x0) {
    operator_delete(*(void **)(this + 200));
  }
  if (*(void **)(this + 0xd0) != (void *)0x0) {
    operator_delete(*(void **)(this + 0xd0));
  }
  if (*(void **)(this + 0xd8) != (void *)0x0) {
    operator_delete(*(void **)(this + 0xd8));
  }
  BaseObject::~BaseObject((BaseObject *)this);
  operator_delete(this);
  return;
}

