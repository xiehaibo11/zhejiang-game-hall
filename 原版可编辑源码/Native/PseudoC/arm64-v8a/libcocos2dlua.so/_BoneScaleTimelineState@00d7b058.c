
/* dragonBones::BoneScaleTimelineState::~BoneScaleTimelineState() */

void __thiscall
dragonBones::BoneScaleTimelineState::~BoneScaleTimelineState(BoneScaleTimelineState *this)

{
                    /* try { // try from 00d7b060 to 00e7b09f has its CatchHandler @ 00d7b514 */
  *(undefined ***)this = &PTR__BoneScaleTimelineState_016d64c0;
  BoneTimelineState::_onClear((BoneTimelineState *)this);
  operator_delete(this);
  return;
}

