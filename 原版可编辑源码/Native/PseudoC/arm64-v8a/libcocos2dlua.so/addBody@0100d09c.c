
/* cocos2d::PhysicsWorld::addBody(cocos2d::PhysicsBody*) */

void __thiscall cocos2d::PhysicsWorld::addBody(PhysicsWorld *this,PhysicsBody *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  PhysicsBody *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 0100cfb8 with catch @ 0100d0c4 */
  if (*(PhysicsWorld **)(param_1 + 0x80) != this) {
    if (*(PhysicsWorld **)(param_1 + 0x80) != (PhysicsWorld *)0x0) {
      PhysicsBody::removeFromWorld(param_1);
    }
    (**(code **)(*(long *)this + 0x90))(this,param_1);
    puVar1 = *(undefined8 **)(this + 0x40);
    local_40 = param_1;
    if (puVar1 == *(undefined8 **)(this + 0x48)) {
      std::__ndk1::vector<cocos2d::PhysicsBody*,std::__ndk1::allocator<cocos2d::PhysicsBody*>>::
      __push_back_slow_path<cocos2d::PhysicsBody*const&>
                ((vector<cocos2d::PhysicsBody*,std::__ndk1::allocator<cocos2d::PhysicsBody*>> *)
                 (this + 0x38),&local_40);
    }
    else {
      *puVar1 = param_1;
      *(undefined8 **)(this + 0x40) = puVar1 + 1;
    }
    Ref::retain((Ref *)local_40);
    *(PhysicsWorld **)(param_1 + 0x80) = this;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

