
/* cocos2d::MotionStreak::MotionStreak() */

void __thiscall cocos2d::MotionStreak::MotionStreak(MotionStreak *this)

{
                    /* try { // try from 00f2192c to 0102196f has its CatchHandler @ 00f218e0 */
  Node::Node((Node *)this);
  *(undefined2 *)(this + 0x300) = 0;
  *(undefined8 *)(this + 0x308) = 0;
  *(undefined ***)this = &PTR__MotionStreak_01706668;
                    /* catch() { ... } // from try @ 00f21920 with catch @ 00f21958 */
  *(undefined ***)(this + 0x2f8) = &PTR__MotionStreak_01706bc8;
  *(undefined8 *)(this + 0x310) = 0x30300000302;
  *(undefined8 *)(this + 800) = 0;
  *(undefined8 *)(this + 0x318) = 0;
  *(undefined8 *)(this + 0x330) = 0;
  *(undefined8 *)(this + 0x328) = 0;
  *(undefined8 *)(this + 0x340) = 0;
  *(undefined8 *)(this + 0x338) = 0;
  *(undefined8 *)(this + 0x350) = 0;
  *(undefined8 *)(this + 0x348) = 0;
  *(undefined8 *)(this + 0x358) = 0;
  CustomCommand::CustomCommand((CustomCommand *)(this + 0x360));
  return;
}

