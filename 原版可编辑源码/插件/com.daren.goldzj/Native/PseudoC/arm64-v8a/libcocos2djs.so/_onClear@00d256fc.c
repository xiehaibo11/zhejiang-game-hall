
/* dragonBones::DeformTimelineState::_onClear() */

void __thiscall dragonBones::DeformTimelineState::_onClear(DeformTimelineState *this)

{
  SlotTimelineState::_onClear((SlotTimelineState *)this);
  *(undefined4 *)(this + 0xc0) = 0;
  this[0xc4] = (DeformTimelineState)0x0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xe0) = *(undefined8 *)(this + 0xd8);
  *(undefined8 *)(this + 0xf8) = *(undefined8 *)(this + 0xf0);
  *(undefined8 *)(this + 0x110) = *(undefined8 *)(this + 0x108);
  return;
}

