
/* cocos2d::Physics3DHingeConstraint::getUpperLimit() const */

void __thiscall cocos2d::Physics3DHingeConstraint::getUpperLimit(Physics3DHingeConstraint *this)

{
  btAngularLimit::getHigh((btAngularLimit *)(*(long *)(this + 0x28) + 0x2c8));
  return;
}

