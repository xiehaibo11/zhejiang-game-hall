
/* cocos2d::MotionStreak3D::setPosition(cocos2d::Vec2 const&) */

void __thiscall cocos2d::MotionStreak3D::setPosition(MotionStreak3D *this,Vec2 *param_1)

{
  long lVar1;
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (this[0x300] == (MotionStreak3D)0x0) {
    this[0x300] = (MotionStreak3D)0x1;
  }
  Vec3::Vec3((Vec3 *)&local_38,*(float *)param_1,*(float *)(param_1 + 4),0.0);
  *(undefined4 *)(this + 800) = local_30;
  *(undefined8 *)(this + 0x318) = local_38;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

