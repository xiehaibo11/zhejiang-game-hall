
/* cocos2d::Physics3DConeTwistConstraint::setMaxMotorImpulseNormalized(float) */

void __thiscall
cocos2d::Physics3DConeTwistConstraint::setMaxMotorImpulseNormalized
          (Physics3DConeTwistConstraint *this,float param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x28);
  *(float *)(lVar1 + 0x254) = param_1;
  *(undefined1 *)(lVar1 + 0x241) = 1;
  return;
}

