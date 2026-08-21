
/* cocos2d::MotionStreak::getPosition3D() const */

void __thiscall cocos2d::MotionStreak::getPosition3D(MotionStreak *this)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  fVar3 = *(float *)(this + 0x318);
  fVar4 = *(float *)(this + 0x31c);
  fVar2 = (float)(**(code **)(*(long *)this + 0x118))();
  Vec3::Vec3((Vec3 *)&local_48,fVar3,fVar4,fVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_48,uStack_44,local_40);
}

