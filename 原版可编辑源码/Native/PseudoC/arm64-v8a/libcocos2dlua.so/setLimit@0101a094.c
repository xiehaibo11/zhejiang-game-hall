
/* cocos2d::Physics3DConeTwistConstraint::setLimit(float, float, float, float, float, float) */

void __thiscall
cocos2d::Physics3DConeTwistConstraint::setLimit
          (Physics3DConeTwistConstraint *this,float param_1,float param_2,float param_3,
          float param_4,float param_5,float param_6)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x28);
  *(float *)(lVar1 + 0x1d4) = param_1;
  *(float *)(lVar1 + 0x1d8) = param_2;
  *(float *)(lVar1 + 0x1dc) = param_3;
  *(float *)(lVar1 + 0x1c4) = param_4;
  *(float *)(lVar1 + 0x1c8) = param_5;
  *(float *)(lVar1 + 0x1cc) = param_6;
  return;
}

