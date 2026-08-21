
/* cocos2d::Physics3D6DofConstraint::create(cocos2d::Physics3DRigidBody*,
   cocos2d::Physics3DRigidBody*, cocos2d::Mat4 const&, cocos2d::Mat4 const&, bool) */

Ref * cocos2d::Physics3D6DofConstraint::create
                (Physics3DRigidBody *param_1,Physics3DRigidBody *param_2,Mat4 *param_3,Mat4 *param_4
                ,bool param_5)

{
  long lVar1;
  Ref *this;
  btGeneric6DofConstraint *this_00;
  btTransform abStack_d8 [64];
  btTransform abStack_98 [64];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this = operator_new(0x50);
  Ref::Ref(this);
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(Physics3DRigidBody **)(this + 0x30) = param_1;
  *(undefined4 *)(this + 0x40) = 5;
                    /* catch() { ... } // from try @ 0101a40c with catch @ 0101a3c0 */
  *(undefined ***)this = &PTR__Physics3DPointToPointConstraint_0169ed10;
  *(Physics3DRigidBody **)(this + 0x38) = param_2;
  Ref::retain((Ref *)param_1);
  Ref::retain((Ref *)param_2);
  convertMat4TobtTransform(param_3);
  convertMat4TobtTransform(param_4);
  this_00 = (btGeneric6DofConstraint *)btAlignedAllocInternal(0x538,0x10);
                    /* try { // try from 0101a404 to 0111a40b has its CatchHandler @ 0101a4f4 */
                    /* try { // try from 0101a40c to 0111a50f has its CatchHandler @ 0101a3c0 */
  btGeneric6DofConstraint::btGeneric6DofConstraint
            (this_00,*(btRigidBody **)(param_1 + 0x78),*(btRigidBody **)(param_2 + 0x78),abStack_98,
             abStack_d8,param_5);
  *(btGeneric6DofConstraint **)(this + 0x28) = this_00;
  Ref::autorelease(this);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

