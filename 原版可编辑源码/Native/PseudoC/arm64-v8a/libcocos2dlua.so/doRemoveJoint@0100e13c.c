
/* cocos2d::PhysicsWorld::doRemoveJoint(cocos2d::PhysicsJoint*) */

void __thiscall cocos2d::PhysicsWorld::doRemoveJoint(PhysicsWorld *this,PhysicsJoint *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  PhysicsJoint *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  local_40 = param_1;
  for (puVar3 = *(undefined8 **)(param_1 + 8); puVar3 != puVar1; puVar3 = puVar3 + 1) {
    cpSpaceRemoveConstraint(*(undefined8 *)(this + 0x28),*puVar3);
  }
  std::__ndk1::list<cocos2d::PhysicsJoint*,std::__ndk1::allocator<cocos2d::PhysicsJoint*>>::remove
            ((list<cocos2d::PhysicsJoint*,std::__ndk1::allocator<cocos2d::PhysicsJoint*>> *)
             (this + 0x50),&local_40);
  *(undefined8 *)(local_40 + 0x48) = 0;
  if (*(PhysicsBody **)(local_40 + 0x38) != (PhysicsBody *)0x0) {
    PhysicsBody::removeJoint(*(PhysicsBody **)(local_40 + 0x38),local_40);
  }
  if (*(PhysicsBody **)(local_40 + 0x40) != (PhysicsBody *)0x0) {
    PhysicsBody::removeJoint(*(PhysicsBody **)(local_40 + 0x40),local_40);
  }
  if ((local_40 != (PhysicsJoint *)0x0) && (local_40[0x5a] != (PhysicsJoint)0x0)) {
    (**(code **)(*(long *)local_40 + 8))(local_40);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

