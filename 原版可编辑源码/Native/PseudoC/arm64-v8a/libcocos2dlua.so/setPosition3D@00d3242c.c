
/* cocos2d::MotionStreak3D::setPosition3D(cocos2d::Vec3 const&) */

void __thiscall cocos2d::MotionStreak3D::setPosition3D(MotionStreak3D *this,Vec3 *param_1)

{
  undefined8 uVar1;
  
  if (this[0x300] == (MotionStreak3D)0x0) {
    this[0x300] = (MotionStreak3D)0x1;
  }
  uVar1 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 800) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0x318) = uVar1;
  return;
}

