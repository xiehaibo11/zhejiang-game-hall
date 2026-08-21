
/* cocos2d::MotionStreak::setPosition(cocos2d::Vec2 const&) */

void __thiscall cocos2d::MotionStreak::setPosition(MotionStreak *this,Vec2 *param_1)

{
  if (this[0x301] == (MotionStreak)0x0) {
    this[0x301] = (MotionStreak)0x1;
  }
  *(undefined8 *)(this + 0x318) = *(undefined8 *)param_1;
  return;
}

