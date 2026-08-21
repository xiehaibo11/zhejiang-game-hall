
/* dragonBones::ActionTimelineState::setCurrentTime(float) */

void __thiscall
dragonBones::ActionTimelineState::setCurrentTime(ActionTimelineState *this,float param_1)

{
  TimelineState::_setCurrentTime((TimelineState *)this,param_1);
  *(undefined4 *)(this + 0x30) = 0xffffffff;
  return;
}

