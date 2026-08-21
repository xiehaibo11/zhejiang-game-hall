
/* cocos2d::Physics3DRigidBody::setActive(bool) */

void __thiscall cocos2d::Physics3DRigidBody::setActive(Physics3DRigidBody *this,bool param_1)

{
  int iVar1;
  
  if (*(btCollisionObject **)(this + 0x78) != (btCollisionObject *)0x0) {
    iVar1 = 3;
                    /* catch() { ... } // from try @ 01015d28 with catch @ 01015d74 */
    if (param_1) {
      iVar1 = 1;
    }
    btCollisionObject::setActivationState(*(btCollisionObject **)(this + 0x78),iVar1);
    return;
  }
  return;
}

