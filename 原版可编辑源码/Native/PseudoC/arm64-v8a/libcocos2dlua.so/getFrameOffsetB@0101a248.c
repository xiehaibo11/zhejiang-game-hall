
/* cocos2d::Physics3DConeTwistConstraint::getFrameOffsetB() const */

void __thiscall
cocos2d::Physics3DConeTwistConstraint::getFrameOffsetB(Physics3DConeTwistConstraint *this)

{
  convertbtTransformToMat4((btTransform *)(*(long *)(this + 0x28) + 0x184));
  return;
}

