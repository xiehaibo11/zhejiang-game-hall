
/* cocostudio::timeline::ActionTimeline::ActionTimeline() */

void __thiscall cocostudio::timeline::ActionTimeline::ActionTimeline(ActionTimeline *this)

{
  cocos2d::Action::Action((Action *)this);
  *(undefined ***)this = &PTR__ActionTimeline_016cc4d0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined ***)(this + 0x28) = &PTR_clone_016cc648;
  *(undefined ***)(this + 0x50) = &PTR__ActionTimeline_016cc670;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  this[0xa0] = (ActionTimeline)0x0;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(ActionTimeline **)(this + 0x120) = this + 0x128;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(ActionTimeline **)(this + 0x58) = this + 0x60;
  *(undefined8 *)(this + 0x98) = 0x3c8888893f800000;
  *(undefined8 *)(this + 0x130) = 0;
  *(ActionTimeline **)(this + 0x138) = this + 0x140;
  return;
}

