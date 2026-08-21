
/* cocos2d::Physics3DRigidBody::addConstraint(cocos2d::Physics3DConstraint*) */

void __thiscall
cocos2d::Physics3DRigidBody::addConstraint(Physics3DRigidBody *this,Physics3DConstraint *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  Physics3DConstraint *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  puVar4 = *(undefined8 **)(this + 0x88);
                    /* try { // try from 0101659c to 011165a3 has its CatchHandler @ 0101665c */
  puVar3 = *(undefined8 **)(this + 0x90);
  local_30 = param_1;
  if ((puVar4 != puVar3) && ((Physics3DConstraint *)*puVar4 != param_1)) {
    do {
      if (puVar3 + -1 == puVar4) goto LAB_010165e4;
      puVar1 = puVar4 + 1;
      puVar4 = puVar4 + 1;
                    /* try { // try from 010165cc to 011165d3 has its CatchHandler @ 0101664c */
    } while ((Physics3DConstraint *)*puVar1 != param_1);
  }
  if (puVar4 == puVar3) {
LAB_010165e4:
    if (puVar3 == *(undefined8 **)(this + 0x98)) {
      std::__ndk1::
      vector<cocos2d::Physics3DConstraint*,std::__ndk1::allocator<cocos2d::Physics3DConstraint*>>::
      __push_back_slow_path<cocos2d::Physics3DConstraint*const&>
                ((vector<cocos2d::Physics3DConstraint*,std::__ndk1::allocator<cocos2d::Physics3DConstraint*>>
                  *)(this + 0x88),&local_30);
    }
    else {
      *puVar3 = param_1;
      *(undefined8 **)(this + 0x90) = puVar3 + 1;
    }
    Ref::retain((Ref *)local_30);
  }
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

