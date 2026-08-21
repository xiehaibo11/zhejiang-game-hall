
/* cocos2d::Physics3DHingeConstraint::getBFrame() const */

void __thiscall cocos2d::Physics3DHingeConstraint::getBFrame(Physics3DHingeConstraint *this)

{
  convertbtTransformToMat4((btTransform *)(*(long *)(this + 0x28) + 0x280));
  return;
}

