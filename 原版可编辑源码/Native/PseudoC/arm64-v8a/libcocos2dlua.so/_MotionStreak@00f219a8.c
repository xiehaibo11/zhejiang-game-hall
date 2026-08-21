
/* cocos2d::MotionStreak::~MotionStreak() */

void __thiscall cocos2d::MotionStreak::~MotionStreak(MotionStreak *this)

{
  *(undefined ***)this = &PTR__MotionStreak_01706668;
  *(undefined ***)(this + 0x2f8) = &PTR__MotionStreak_01706bc8;
  if (*(Ref **)(this + 0x308) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x308));
  }
  if (*(void **)(this + 0x340) != (void *)0x0) {
    free(*(void **)(this + 0x340));
    *(undefined8 *)(this + 0x340) = 0;
  }
  if (*(void **)(this + 0x338) != (void *)0x0) {
    free(*(void **)(this + 0x338));
    *(undefined8 *)(this + 0x338) = 0;
  }
  if (*(void **)(this + 0x348) != (void *)0x0) {
    free(*(void **)(this + 0x348));
    *(undefined8 *)(this + 0x348) = 0;
  }
  if (*(void **)(this + 0x350) != (void *)0x0) {
    free(*(void **)(this + 0x350));
    *(undefined8 *)(this + 0x350) = 0;
  }
  if (*(void **)(this + 0x358) != (void *)0x0) {
    free(*(void **)(this + 0x358));
    *(undefined8 *)(this + 0x358) = 0;
  }
  CustomCommand::~CustomCommand((CustomCommand *)(this + 0x360));
  Node::~Node((Node *)this);
  return;
}

