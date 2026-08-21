
/* dragonBones::BoneRotateTimelineState::~BoneRotateTimelineState() */

void __thiscall
dragonBones::BoneRotateTimelineState::~BoneRotateTimelineState(BoneRotateTimelineState *this)

{
                    /* try { // try from 00d7afb8 to 00e7afcb has its CatchHandler @ 00d7b40c */
  *(undefined ***)this = &PTR__BoneRotateTimelineState_016d6450;
  BoneTimelineState::_onClear((BoneTimelineState *)this);
                    /* try { // try from 00d7afd0 to 00e7afff has its CatchHandler @ 00d7b6f4 */
  operator_delete(this);
  return;
}

