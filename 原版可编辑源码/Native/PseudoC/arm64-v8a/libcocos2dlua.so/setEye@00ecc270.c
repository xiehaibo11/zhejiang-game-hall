
/* cocos2d::ActionCamera::setEye(float, float, float) */

void __thiscall
cocos2d::ActionCamera::setEye(ActionCamera *this,float param_1,float param_2,float param_3)

{
  *(float *)(this + 100) = param_1;
  *(float *)(this + 0x68) = param_2;
  *(float *)(this + 0x6c) = param_3;
  updateTransform(this);
  return;
}

