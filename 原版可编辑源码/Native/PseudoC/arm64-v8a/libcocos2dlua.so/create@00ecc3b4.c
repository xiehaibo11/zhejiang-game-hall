
/* cocos2d::OrbitCamera::create(float, float, float, float, float, float, float) */

OrbitCamera *
cocos2d::OrbitCamera::create
          (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
          float param_7)

{
  OrbitCamera *this;
  ulong uVar1;
  
  this = operator_new(0xa8,(nothrow_t *)&std::nothrow);
  if (this != (OrbitCamera *)0x0) {
    OrbitCamera(this);
    uVar1 = ActionInterval::initWithDuration((ActionInterval *)this,param_1);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (OrbitCamera *)0x0;
    }
    else {
      *(float *)(this + 0x7c) = param_2;
      *(float *)(this + 0x80) = param_3;
      *(float *)(this + 0x84) = param_4;
      *(float *)(this + 0x88) = param_5;
      *(float *)(this + 0x8c) = param_6;
      *(float *)(this + 0x90) = param_7;
      *(float *)(this + 0x98) = param_5 * 0.017453292;
      *(float *)(this + 0xa0) = param_7 * 0.017453292;
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

