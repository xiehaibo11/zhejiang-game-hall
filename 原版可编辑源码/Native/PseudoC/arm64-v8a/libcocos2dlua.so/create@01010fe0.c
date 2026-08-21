
/* cocos2d::Physics3DComponent::create(cocos2d::Physics3DObject*, cocos2d::Vec3 const&,
   cocos2d::Quaternion const&) */

Component *
cocos2d::Physics3DComponent::create(Physics3DObject *param_1,Vec3 *param_2,Quaternion *param_3)

{
  long lVar1;
  Component *this;
  ulong uVar2;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
                    /* catch() { ... } // from try @ 01010cf4 with catch @ 01010ff4 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 01010ca0 with catch @ 01011004 */
                    /* catch() { ... } // from try @ 01010e60 with catch @ 01011018 */
                    /* catch() { ... } // from try @ 01010d0c with catch @ 0101101c */
  this = operator_new(0xe0,(nothrow_t *)&std::nothrow);
  if (this != (Component *)0x0) {
    Component::Component(this);
                    /* catch() { ... } // from try @ 01010cdc with catch @ 01011030 */
                    /* catch() { ... } // from try @ 01010e08 with catch @ 01011040 */
    *(undefined ***)this = &PTR__Physics3DComponent_01726580;
                    /* catch() { ... } // from try @ 01010db0 with catch @ 01011044 */
    Mat4::Mat4((Mat4 *)(this + 0x50));
    Mat4::Mat4((Mat4 *)(this + 0x90));
    *(undefined8 *)(this + 0xd0) = 0;
    *(undefined4 *)(this + 0xd8) = 3;
                    /* catch() { ... } // from try @ 01010e98 with catch @ 01011064 */
    uVar2 = (**(code **)(*(long *)this + 0x10))(this);
    if ((uVar2 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Component *)0x0;
    }
    else {
      if (param_1 != (Physics3DObject *)0x0) {
        Ref::retain((Ref *)param_1);
      }
      if (*(Ref **)(this + 0xd0) != (Ref *)0x0) {
        Ref::release(*(Ref **)(this + 0xd0));
      }
      *(Physics3DObject **)(this + 0xd0) = param_1;
      Mat4::createRotation(param_3,(Mat4 *)(this + 0x50));
      *(undefined8 *)(this + 0x80) = *(undefined8 *)param_2;
      *(undefined4 *)(this + 0x88) = *(undefined4 *)(param_2 + 8);
      Mat4::getInversed();
      *(undefined8 *)(this + 0xb8) = uStack_60;
      *(undefined8 *)(this + 0xb0) = local_68;
      *(undefined8 *)(this + 200) = uStack_50;
      *(undefined8 *)(this + 0xc0) = local_58;
      *(undefined8 *)(this + 0x98) = uStack_80;
      *(undefined8 *)(this + 0x90) = local_88;
      *(undefined8 *)(this + 0xa8) = uStack_70;
      *(undefined8 *)(this + 0xa0) = local_78;
      Mat4::~Mat4((Mat4 *)&local_88);
      Ref::autorelease((Ref *)this);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

