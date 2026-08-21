
/* cocos2d::Physics3DHingeConstraint::create(cocos2d::Physics3DRigidBody*,
   cocos2d::Physics3DRigidBody*, cocos2d::Mat4 const&, cocos2d::Mat4 const&, bool) */

Ref * cocos2d::Physics3DHingeConstraint::create
                (Physics3DRigidBody *param_1,Physics3DRigidBody *param_2,Mat4 *param_3,Mat4 *param_4
                ,bool param_5)

{
  long lVar1;
  Ref *this;
  btHingeConstraint *this_00;
  btRigidBody *pbVar2;
  btRigidBody *pbVar3;
  btTransform abStack_e8 [64];
  btTransform abStack_a8 [64];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 01018ed8 to 01118f1b has its CatchHandler @ 01018ed8
                       catch() { ... } // from try @ 01018ed8 with catch @ 01018ed8
                       catch() { ... } // from try @ 01018f20 with catch @ 01018ed8 */
  this = operator_new(0x50,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined4 *)(this + 0x40) = 2;
    *(undefined ***)this = &PTR__Physics3DPointToPointConstraint_0169ecd0;
  }
                    /* try { // try from 01018f1c to 01118f1f has its CatchHandler @ 01018f38 */
                    /* try { // try from 01018f20 to 01118f4b has its CatchHandler @ 01018ed8 */
  this_00 = (btHingeConstraint *)btAlignedAllocInternal(0x318,0x10);
  pbVar2 = *(btRigidBody **)(param_1 + 0x78);
  pbVar3 = *(btRigidBody **)(param_2 + 0x78);
                    /* catch() { ... } // from try @ 01018f1c with catch @ 01018f38 */
  convertMat4TobtTransform(param_3);
  convertMat4TobtTransform(param_4);
  btHingeConstraint::btHingeConstraint(this_00,pbVar2,pbVar3,abStack_a8,abStack_e8,param_5);
  *(btHingeConstraint **)(this + 0x28) = this_00;
  *(Physics3DRigidBody **)(this + 0x30) = param_1;
  Ref::retain((Ref *)param_1);
  *(Physics3DRigidBody **)(this + 0x38) = param_2;
  Ref::retain((Ref *)param_2);
  Ref::autorelease(this);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

