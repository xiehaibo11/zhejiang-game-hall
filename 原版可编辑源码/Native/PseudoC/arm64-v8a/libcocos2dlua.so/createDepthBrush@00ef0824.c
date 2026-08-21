
/* cocos2d::CameraBackgroundBrush::createDepthBrush(float) */

CameraBackgroundDepthBrush * cocos2d::CameraBackgroundBrush::createDepthBrush(float param_1)

{
  CameraBackgroundDepthBrush *this;
  ulong uVar1;
  
  this = operator_new(0xb0,(nothrow_t *)&std::nothrow);
  if (this != (CameraBackgroundDepthBrush *)0x0) {
    CameraBackgroundDepthBrush::CameraBackgroundDepthBrush(this);
    uVar1 = (**(code **)(*(long *)this + 0x28))(this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (CameraBackgroundDepthBrush *)0x0;
    }
    else {
      *(float *)(this + 0x38) = param_1;
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

