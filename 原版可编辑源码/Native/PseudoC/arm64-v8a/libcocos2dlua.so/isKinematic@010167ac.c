
/* cocos2d::Physics3DRigidBody::isKinematic() const */

byte __thiscall cocos2d::Physics3DRigidBody::isKinematic(Physics3DRigidBody *this)

{
  if (*(long *)(this + 0x78) != 0) {
    return *(byte *)(*(long *)(this + 0x78) + 0xe0) >> 1 & 1;
  }
  return 0;
}

