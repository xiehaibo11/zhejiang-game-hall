
/* dragonBones::SlotDislayTimelineState::_onArriveAtFrame() */

void __thiscall
dragonBones::SlotDislayTimelineState::_onArriveAtFrame(SlotDislayTimelineState *this)

{
  Slot *this_00;
  int iVar1;
  
  if (-1 < *(int *)(this + 0x10)) {
    if (*(long *)(this + 0x58) == 0) {
      this_00 = *(Slot **)(this + 0xb8);
      iVar1 = *(int *)(*(long *)(this_00 + 200) + 0x14);
    }
    else {
      this_00 = *(Slot **)(this + 0xb8);
      iVar1 = (int)*(short *)(*(long *)(this + 0x78) + (ulong)(*(int *)(this + 0x2c) + 1) * 2);
    }
    if (*(int *)(this_00 + 0x100) != iVar1) {
      Slot::_setDisplayIndex(this_00,iVar1,true);
      return;
    }
  }
  return;
}

