
/* cocos2d::Physics3DConeTwistConstraint::setMotorTargetInConstraintSpace(btQuaternion const&) */

void __thiscall
cocos2d::Physics3DConeTwistConstraint::setMotorTargetInConstraintSpace
          (Physics3DConeTwistConstraint *this,btQuaternion *param_1)

{
  btConeTwistConstraint::setMotorTargetInConstraintSpace
            (*(btConeTwistConstraint **)(this + 0x28),param_1);
  return;
}

