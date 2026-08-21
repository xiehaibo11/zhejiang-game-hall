
/* cocos2d::DirectionLight::getDirectionInWorld() const */

void __thiscall cocos2d::DirectionLight::getDirectionInWorld(DirectionLight *this)

{
  long lVar1;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  Mat4 aMStack_68 [32];
  float local_48;
  float fStack_44;
  float local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)this + 0x430))(aMStack_68);
  Vec3::Vec3((Vec3 *)&local_78,-local_48,-fStack_44,-local_40);
  Mat4::~Mat4(aMStack_68);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_78,uStack_74,local_70);
}

