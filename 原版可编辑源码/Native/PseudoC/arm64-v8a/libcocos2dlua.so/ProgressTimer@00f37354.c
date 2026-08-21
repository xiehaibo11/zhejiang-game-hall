
/* cocos2d::ProgressTimer::ProgressTimer() */

void __thiscall cocos2d::ProgressTimer::ProgressTimer(ProgressTimer *this)

{
  Node::Node((Node *)this);
  *(undefined8 *)(this + 800) = 0;
  *(undefined ***)this = &PTR__ProgressTimer_0170eae8;
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined8 *)(this + 0x2f8) = 0;
  *(undefined8 *)(this + 0x310) = 0;
  *(undefined8 *)(this + 0x308) = 0;
  *(undefined4 *)(this + 0x318) = 0;
  CustomCommand::CustomCommand((CustomCommand *)(this + 0x330));
  this[0x380] = (ProgressTimer)0x0;
  return;
}

