
/* cocos2d::FlipX3D::initWithSize(cocos2d::Size const&, float) */

undefined8 __thiscall cocos2d::FlipX3D::initWithSize(FlipX3D *this,Size *param_1,float param_2)

{
  undefined8 uVar1;
  
  if ((*(float *)param_1 == 1.0) && (*(float *)(param_1 + 4) == 1.0)) {
    uVar1 = GridAction::initWithDuration((GridAction *)this,param_2,param_1);
    return uVar1;
  }
  return 0;
}

