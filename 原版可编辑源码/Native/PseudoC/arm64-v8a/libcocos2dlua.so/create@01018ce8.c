
/* cocos2d::Physics3DHingeConstraint::create(cocos2d::Physics3DRigidBody*,
   cocos2d::Physics3DRigidBody*, cocos2d::Vec3 const&, cocos2d::Vec3 const&, cocos2d::Vec3&,
   cocos2d::Vec3&, bool) */

Ref * cocos2d::Physics3DHingeConstraint::create
                (Physics3DRigidBody *param_1,Physics3DRigidBody *param_2,Vec3 *param_3,Vec3 *param_4
                ,Vec3 *param_5,Vec3 *param_6,bool param_7)

{
  long lVar1;
  Ref *this;
  btHingeConstraint *this_00;
  btRigidBody *pbVar2;
  btRigidBody *pbVar3;
  undefined4 local_a8 [4];
  undefined4 local_98 [4];
  undefined4 local_88 [4];
  undefined4 local_78 [4];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  this = operator_new(0x50,(nothrow_t *)&std::nothrow);
                    /* try { // try from 01018d48 to 01118d8b has its CatchHandler @ 01018d48
                       catch() { ... } // from try @ 01018d48 with catch @ 01018d48
                       catch() { ... } // from try @ 01018d90 with catch @ 01018d48 */
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined4 *)(this + 0x40) = 2;
    *(undefined ***)this = &PTR__Physics3DPointToPointConstraint_0169ecd0;
  }
  this_00 = (btHingeConstraint *)btAlignedAllocInternal(0x318,0x10);
  pbVar2 = *(btRigidBody **)(param_1 + 0x78);
                    /* try { // try from 01018d8c to 01118d8f has its CatchHandler @ 01018da8 */
  pbVar3 = *(btRigidBody **)(param_2 + 0x78);
                    /* try { // try from 01018d90 to 01118dbb has its CatchHandler @ 01018d48 */
  local_78[0] = convertVec3TobtVector3(param_3);
                    /* catch() { ... } // from try @ 01018d8c with catch @ 01018da8 */
  local_88[0] = convertVec3TobtVector3(param_4);
  local_98[0] = convertVec3TobtVector3(param_5);
  local_a8[0] = convertVec3TobtVector3(param_6);
  btHingeConstraint::btHingeConstraint
            (this_00,pbVar2,pbVar3,(btVector3 *)local_78,(btVector3 *)local_88,(btVector3 *)local_98
             ,(btVector3 *)local_a8,param_7);
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

