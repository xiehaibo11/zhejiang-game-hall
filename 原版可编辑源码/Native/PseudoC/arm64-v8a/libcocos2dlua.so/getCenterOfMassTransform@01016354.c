
/* cocos2d::Physics3DRigidBody::getCenterOfMassTransform() const */

void __thiscall cocos2d::Physics3DRigidBody::getCenterOfMassTransform(Physics3DRigidBody *this)

{
  convertbtTransformToMat4((btTransform *)(*(long *)(this + 0x78) + 8));
  return;
}

