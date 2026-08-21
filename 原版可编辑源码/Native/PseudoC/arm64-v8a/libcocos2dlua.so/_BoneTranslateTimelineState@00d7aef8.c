
/* dragonBones::BoneTranslateTimelineState::~BoneTranslateTimelineState() */

void __thiscall
dragonBones::BoneTranslateTimelineState::~BoneTranslateTimelineState
          (BoneTranslateTimelineState *this)

{
                    /* try { // try from 00d7aefc to 00e7af3b has its CatchHandler @ 00d7b574 */
  *(undefined ***)this = &PTR__BoneTranslateTimelineState_016d63e0;
  BoneTimelineState::_onClear((BoneTimelineState *)this);
  operator_delete(this);
  return;
}

