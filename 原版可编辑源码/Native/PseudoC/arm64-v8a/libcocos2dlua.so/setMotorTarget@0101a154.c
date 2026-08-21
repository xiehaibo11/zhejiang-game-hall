
/* cocos2d::Physics3DConeTwistConstraint::setMotorTarget(btQuaternion const&) */

void __thiscall
cocos2d::Physics3DConeTwistConstraint::setMotorTarget
          (Physics3DConeTwistConstraint *this,btQuaternion *param_1)

{
  btConeTwistConstraint::setMotorTarget(*(btConeTwistConstraint **)(this + 0x28),param_1);
  return;
}

