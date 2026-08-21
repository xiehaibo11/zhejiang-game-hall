
/* cocos2d::Physics3DConeTwistConstraint::~Physics3DConeTwistConstraint() */

void __thiscall
cocos2d::Physics3DConeTwistConstraint::~Physics3DConeTwistConstraint
          (Physics3DConeTwistConstraint *this)

{
  Physics3DPointToPointConstraint::~Physics3DPointToPointConstraint
            ((Physics3DPointToPointConstraint *)this);
  operator_delete(this);
  return;
}

