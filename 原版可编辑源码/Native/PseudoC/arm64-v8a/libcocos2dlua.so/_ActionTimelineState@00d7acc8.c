
/* dragonBones::ActionTimelineState::~ActionTimelineState() */

void __thiscall dragonBones::ActionTimelineState::~ActionTimelineState(ActionTimelineState *this)

{
  *(undefined ***)this = &PTR__ActionTimelineState_016d6290;
                    /* try { // try from 00d7acd8 to 00e7acef has its CatchHandler @ 00d7b4e0 */
  TimelineState::_onClear((TimelineState *)this);
  return;
}

