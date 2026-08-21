
/* cocos2d::Physics3DHingeConstraint::getLowerLimit() const */

void __thiscall cocos2d::Physics3DHingeConstraint::getLowerLimit(Physics3DHingeConstraint *this)

{
  btAngularLimit::getLow((btAngularLimit *)(*(long *)(this + 0x28) + 0x2c8));
  return;
}

