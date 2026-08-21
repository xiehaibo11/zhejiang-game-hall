
/* dragonBones::ZOrderTimelineState::_onArriveAtFrame() */

void __thiscall dragonBones::ZOrderTimelineState::_onArriveAtFrame(ZOrderTimelineState *this)

{
  if (*(int *)(this + 0x10) < 0) {
    return;
  }
  if (0 < (*(short **)(this + 0x78))[*(int *)(this + 0x2c) + 1]) {
    Armature::_sortZOrder
              (*(Armature **)(this + 0x60),*(short **)(this + 0x78),*(int *)(this + 0x2c) + 2);
    return;
  }
  Armature::_sortZOrder(*(Armature **)(this + 0x60),(short *)0x0,0);
  return;
}

