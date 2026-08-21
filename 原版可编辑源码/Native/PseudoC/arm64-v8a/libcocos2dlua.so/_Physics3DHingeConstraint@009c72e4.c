
/* cocos2d::Physics3DHingeConstraint::~Physics3DHingeConstraint() */

void __thiscall
cocos2d::Physics3DHingeConstraint::~Physics3DHingeConstraint(Physics3DHingeConstraint *this)

{
  Physics3DPointToPointConstraint::~Physics3DPointToPointConstraint
            ((Physics3DPointToPointConstraint *)this);
  operator_delete(this);
  return;
}

