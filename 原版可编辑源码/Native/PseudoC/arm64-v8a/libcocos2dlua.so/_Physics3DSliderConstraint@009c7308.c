
/* cocos2d::Physics3DSliderConstraint::~Physics3DSliderConstraint() */

void __thiscall
cocos2d::Physics3DSliderConstraint::~Physics3DSliderConstraint(Physics3DSliderConstraint *this)

{
  Physics3DPointToPointConstraint::~Physics3DPointToPointConstraint
            ((Physics3DPointToPointConstraint *)this);
  operator_delete(this);
  return;
}

