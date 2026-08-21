
/* cocos2d::PhysicsJointRotarySpring::createConstraints() */

void __thiscall cocos2d::PhysicsJointRotarySpring::createConstraints(PhysicsJointRotarySpring *this)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  cpConstraint *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar3 = *(undefined8 *)(*(long *)(this + 0x38) + 0x88);
  uVar4 = *(undefined8 *)(*(PhysicsBody **)(this + 0x40) + 0x88);
  fVar5 = (float)PhysicsBody::getRotation(*(PhysicsBody **)(this + 0x40));
  fVar6 = (float)PhysicsBody::getRotation(*(PhysicsBody **)(this + 0x38));
  local_50 = (cpConstraint *)
             cpDampedRotarySpringNew
                       (fVar5 - fVar6,*(undefined4 *)(this + 0x68),*(undefined4 *)(this + 0x6c),
                        uVar3,uVar4);
  uVar3 = 0;
  if (local_50 != (cpConstraint *)0x0) {
    plVar1 = *(long **)(this + 0x10);
    if (plVar1 == *(long **)(this + 0x18)) {
      std::__ndk1::vector<cpConstraint*,std::__ndk1::allocator<cpConstraint*>>::
      __push_back_slow_path<cpConstraint*const&>
                ((vector<cpConstraint*,std::__ndk1::allocator<cpConstraint*>> *)(this + 8),&local_50
                );
    }
    else {
      *plVar1 = (long)local_50;
      *(long **)(this + 0x10) = plVar1 + 1;
    }
    uVar3 = 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

