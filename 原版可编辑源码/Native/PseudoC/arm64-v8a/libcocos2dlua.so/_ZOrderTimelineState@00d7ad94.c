
/* dragonBones::ZOrderTimelineState::~ZOrderTimelineState() */

void __thiscall dragonBones::ZOrderTimelineState::~ZOrderTimelineState(ZOrderTimelineState *this)

{
                    /* try { // try from 00d7ad98 to 00e7add7 has its CatchHandler @ 00d7b5d4 */
  *(undefined ***)this = &PTR__ZOrderTimelineState_016d6300;
  TimelineState::_onClear((TimelineState *)this);
  operator_delete(this);
  return;
}

