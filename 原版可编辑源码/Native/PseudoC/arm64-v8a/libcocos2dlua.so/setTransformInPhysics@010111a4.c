
/* cocos2d::Physics3DComponent::setTransformInPhysics(cocos2d::Vec3 const&, cocos2d::Quaternion
   const&) */

void __thiscall
cocos2d::Physics3DComponent::setTransformInPhysics
          (Physics3DComponent *this,Vec3 *param_1,Quaternion *param_2)

{
  long lVar1;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Mat4::createRotation(param_2,(Mat4 *)(this + 0x50));
  *(undefined4 *)(this + 0x80) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x88) = *(undefined4 *)(param_1 + 8);
  Mat4::getInversed();
  *(undefined8 *)(this + 0xb8) = uStack_50;
  *(undefined8 *)(this + 0xb0) = local_58;
  *(undefined8 *)(this + 200) = uStack_40;
  *(undefined8 *)(this + 0xc0) = local_48;
  *(undefined8 *)(this + 0x98) = uStack_70;
  *(undefined8 *)(this + 0x90) = local_78;
  *(undefined8 *)(this + 0xa8) = uStack_60;
  *(undefined8 *)(this + 0xa0) = local_68;
  Mat4::~Mat4((Mat4 *)&local_78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

