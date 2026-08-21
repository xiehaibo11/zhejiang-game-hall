
/* cocos2d::Physics3DRigidBody::setKinematic(bool) */

void __thiscall cocos2d::Physics3DRigidBody::setKinematic(Physics3DRigidBody *this,bool param_1)

{
  uint uVar1;
  btCollisionObject *this_00;
  int iVar2;
  
  this_00 = *(btCollisionObject **)(this + 0x78);
  iVar2 = 4;
  if (!param_1) {
    iVar2 = 1;
  }
  uVar1 = *(uint *)(this_00 + 0xe0) | 2;
  if (!param_1) {
    uVar1 = *(uint *)(this_00 + 0xe0) & 0xfffffffd;
  }
  *(uint *)(this_00 + 0xe0) = uVar1;
  btCollisionObject::setActivationState(this_00,iVar2);
  return;
}

