
/* cocos2d::Waves3D::initWithDuration(float, cocos2d::Size const&, unsigned int, float) */

bool __thiscall
cocos2d::Waves3D::initWithDuration
          (Waves3D *this,float param_1,Size *param_2,uint param_3,float param_4)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = GridAction::initWithDuration((GridAction *)this,param_1,param_2);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    *(uint *)(this + 0x68) = param_3;
    *(float *)(this + 0x6c) = param_4;
    *(undefined4 *)(this + 0x70) = 0x3f800000;
  }
  return bVar1;
}

