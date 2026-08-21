
/* dragonBones::ActionTimelineState::~ActionTimelineState() */

void __thiscall dragonBones::ActionTimelineState::~ActionTimelineState(ActionTimelineState *this)

{
                    /* try { // try from 00d7acf0 to 00e7ad03 has its CatchHandler @ 00d7b44c */
  *(undefined ***)this = &PTR__ActionTimelineState_016d6290;
  TimelineState::_onClear((TimelineState *)this);
                    /* try { // try from 00d7ad08 to 00e7ad37 has its CatchHandler @ 00d7b7d4 */
  operator_delete(this);
  return;
}

