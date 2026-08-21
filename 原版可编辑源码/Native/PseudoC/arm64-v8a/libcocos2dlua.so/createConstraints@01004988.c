
/* cocos2d::PhysicsJointSpring::createConstraints() */

void cocos2d::PhysicsJointSpring::createConstraints(void)

{
  long *plVar1;
  long lVar2;
  long in_x0;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float in_s1;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  cpConstraint *local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  uVar8 = *(undefined4 *)(in_x0 + 0x68);
  uVar9 = *(undefined4 *)(in_x0 + 0x6c);
  uVar3 = *(undefined8 *)(*(long *)(in_x0 + 0x38) + 0x88);
  uVar4 = *(undefined8 *)(*(PhysicsBody **)(in_x0 + 0x40) + 0x88);
  uVar10 = *(undefined4 *)(in_x0 + 0x70);
  uVar11 = *(undefined4 *)(in_x0 + 0x74);
  fVar5 = (float)PhysicsBody::local2World(*(PhysicsBody **)(in_x0 + 0x40),(Vec2 *)(in_x0 + 0x68));
  fVar7 = in_s1;
  fVar6 = (float)PhysicsBody::local2World(*(PhysicsBody **)(in_x0 + 0x38),(Vec2 *)(in_x0 + 0x70));
  local_80 = (cpConstraint *)
             cpDampedSpringNew(uVar8,uVar9,uVar10,uVar11,
                               SQRT((fVar5 - fVar6) * (fVar5 - fVar6) +
                                    (in_s1 - fVar7) * (in_s1 - fVar7)),*(undefined4 *)(in_x0 + 0x78)
                               ,*(undefined4 *)(in_x0 + 0x7c),uVar3,uVar4);
  uVar3 = 0;
  if (local_80 != (cpConstraint *)0x0) {
    plVar1 = *(long **)(in_x0 + 0x10);
    if (plVar1 == *(long **)(in_x0 + 0x18)) {
      std::__ndk1::vector<cpConstraint*,std::__ndk1::allocator<cpConstraint*>>::
      __push_back_slow_path<cpConstraint*const&>
                ((vector<cpConstraint*,std::__ndk1::allocator<cpConstraint*>> *)(in_x0 + 8),
                 &local_80);
    }
    else {
      *plVar1 = (long)local_80;
      *(long **)(in_x0 + 0x10) = plVar1 + 1;
    }
    uVar3 = 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

