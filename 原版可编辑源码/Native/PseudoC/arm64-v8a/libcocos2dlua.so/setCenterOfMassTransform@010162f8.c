
/* cocos2d::Physics3DRigidBody::setCenterOfMassTransform(cocos2d::Mat4 const&) */

void __thiscall
cocos2d::Physics3DRigidBody::setCenterOfMassTransform(Physics3DRigidBody *this,Mat4 *param_1)

{
  long lVar1;
  btRigidBody *this_00;
  btTransform abStack_68 [64];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  this_00 = *(btRigidBody **)(this + 0x78);
  convertMat4TobtTransform(param_1);
  btRigidBody::setCenterOfMassTransform(this_00,abStack_68);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

