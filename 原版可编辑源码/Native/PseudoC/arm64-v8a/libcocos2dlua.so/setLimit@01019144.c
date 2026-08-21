
/* cocos2d::Physics3DHingeConstraint::setLimit(float, float, float, float, float) */

void __thiscall
cocos2d::Physics3DHingeConstraint::setLimit
          (Physics3DHingeConstraint *this,float param_1,float param_2,float param_3,float param_4,
          float param_5)

{
  btAngularLimit::set((btAngularLimit *)(*(long *)(this + 0x28) + 0x2c8),param_1,param_2,param_3,
                      param_4,param_5);
  return;
}

