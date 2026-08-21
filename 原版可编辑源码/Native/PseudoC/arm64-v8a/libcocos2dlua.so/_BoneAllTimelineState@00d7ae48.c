
/* dragonBones::BoneAllTimelineState::~BoneAllTimelineState() */

void __thiscall dragonBones::BoneAllTimelineState::~BoneAllTimelineState(BoneAllTimelineState *this)

{
                    /* try { // try from 00d7ae54 to 00e7ae67 has its CatchHandler @ 00d7b42c */
  *(undefined ***)this = &PTR__BoneAllTimelineState_016d6370;
  BoneTimelineState::_onClear((BoneTimelineState *)this);
                    /* try { // try from 00d7ae6c to 00e7ae9b has its CatchHandler @ 00d7b774 */
  operator_delete(this);
  return;
}

