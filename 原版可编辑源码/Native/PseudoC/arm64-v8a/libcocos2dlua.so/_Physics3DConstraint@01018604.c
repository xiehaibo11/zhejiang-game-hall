
/* cocos2d::Physics3DConstraint::~Physics3DConstraint() */

void __thiscall cocos2d::Physics3DConstraint::~Physics3DConstraint(Physics3DConstraint *this)

{
  Physics3DPointToPointConstraint::~Physics3DPointToPointConstraint
            ((Physics3DPointToPointConstraint *)this);
  operator_delete(this);
  return;
}

