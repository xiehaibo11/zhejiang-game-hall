
/* cocos2d::Physics3DHingeConstraint::setMotorTarget(float, float) */

void __thiscall
cocos2d::Physics3DHingeConstraint::setMotorTarget
          (Physics3DHingeConstraint *this,float param_1,float param_2)

{
  btHingeConstraint::setMotorTarget(*(btHingeConstraint **)(this + 0x28),param_1,param_2);
  return;
}

