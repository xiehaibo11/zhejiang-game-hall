
/* cocos2d::Physics3DHingeConstraint::getAFrame() const */

void __thiscall cocos2d::Physics3DHingeConstraint::getAFrame(Physics3DHingeConstraint *this)

{
  convertbtTransformToMat4((btTransform *)(*(long *)(this + 0x28) + 0x240));
  return;
}

