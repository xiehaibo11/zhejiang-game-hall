
/* cocos2d::PhysicsJoint::init(cocos2d::PhysicsBody*, cocos2d::PhysicsBody*) */

undefined8 __thiscall
cocos2d::PhysicsJoint::init(PhysicsJoint *this,PhysicsBody *param_1,PhysicsBody *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  PhysicsJoint *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  *(PhysicsBody **)(this + 0x38) = param_1;
  *(PhysicsBody **)(this + 0x40) = param_2;
  puVar1 = *(undefined8 **)(param_1 + 0x58);
  if (puVar1 < *(undefined8 **)(param_1 + 0x60)) {
    *puVar1 = this;
    *(undefined8 **)(param_1 + 0x58) = puVar1 + 1;
  }
  else {
    local_30 = this;
    std::__ndk1::vector<cocos2d::PhysicsJoint*,std::__ndk1::allocator<cocos2d::PhysicsJoint*>>::
    __push_back_slow_path<cocos2d::PhysicsJoint*>
              ((vector<cocos2d::PhysicsJoint*,std::__ndk1::allocator<cocos2d::PhysicsJoint*>> *)
               (param_1 + 0x50),&local_30);
  }
  lVar3 = *(long *)(this + 0x40);
  puVar1 = *(undefined8 **)(lVar3 + 0x58);
  if (puVar1 < *(undefined8 **)(lVar3 + 0x60)) {
    *puVar1 = this;
    *(undefined8 **)(lVar3 + 0x58) = puVar1 + 1;
    local_30 = this;
  }
  else {
    local_30 = this;
    std::__ndk1::vector<cocos2d::PhysicsJoint*,std::__ndk1::allocator<cocos2d::PhysicsJoint*>>::
    __push_back_slow_path<cocos2d::PhysicsJoint*>
              ((vector<cocos2d::PhysicsJoint*,std::__ndk1::allocator<cocos2d::PhysicsJoint*>> *)
               (lVar3 + 0x50),&local_30);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

