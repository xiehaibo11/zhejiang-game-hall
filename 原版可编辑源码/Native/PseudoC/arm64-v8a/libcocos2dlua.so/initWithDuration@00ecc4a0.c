
/* cocos2d::OrbitCamera::initWithDuration(float, float, float, float, float, float, float) */

bool __thiscall
cocos2d::OrbitCamera::initWithDuration
          (OrbitCamera *this,float param_1,float param_2,float param_3,float param_4,float param_5,
          float param_6,float param_7)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = ActionInterval::initWithDuration((ActionInterval *)this,param_1);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    *(float *)(this + 0x7c) = param_2;
    *(float *)(this + 0x80) = param_3;
    *(float *)(this + 0x84) = param_4;
    *(float *)(this + 0x88) = param_5;
    *(float *)(this + 0x8c) = param_6;
    *(float *)(this + 0x90) = param_7;
    *(float *)(this + 0x98) = param_5 * 0.017453292;
    *(float *)(this + 0xa0) = param_7 * 0.017453292;
  }
  return bVar1;
}

