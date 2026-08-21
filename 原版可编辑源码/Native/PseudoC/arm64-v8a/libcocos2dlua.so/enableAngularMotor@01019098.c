
/* cocos2d::Physics3DHingeConstraint::enableAngularMotor(bool, float, float) */

void __thiscall
cocos2d::Physics3DHingeConstraint::enableAngularMotor
          (Physics3DHingeConstraint *this,bool param_1,float param_2,float param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x28);
  *(bool *)(lVar1 + 0x2f9) = param_1;
  *(float *)(lVar1 + 0x2c0) = param_2;
  *(float *)(lVar1 + 0x2c4) = param_3;
  return;
}

