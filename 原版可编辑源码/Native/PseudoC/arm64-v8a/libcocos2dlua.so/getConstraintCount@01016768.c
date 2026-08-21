
/* cocos2d::Physics3DRigidBody::getConstraintCount() const */

ulong __thiscall cocos2d::Physics3DRigidBody::getConstraintCount(Physics3DRigidBody *this)

{
  return (ulong)(*(long *)(this + 0x90) - *(long *)(this + 0x88)) >> 3;
}

