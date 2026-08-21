
/* cocos2d::Ripple3D::initWithDuration(float, cocos2d::Size const&, cocos2d::Vec2 const&, float,
   unsigned int, float) */

bool __thiscall
cocos2d::Ripple3D::initWithDuration
          (Ripple3D *this,float param_1,Size *param_2,Vec2 *param_3,float param_4,uint param_5,
          float param_6)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = GridAction::initWithDuration((GridAction *)this,param_1,param_2);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    uVar3 = *(undefined8 *)param_3;
    *(float *)(this + 0x70) = param_4;
    *(uint *)(this + 0x74) = param_5;
    *(float *)(this + 0x78) = param_6;
    *(undefined4 *)(this + 0x7c) = 0x3f800000;
    *(undefined8 *)(this + 0x68) = uVar3;
  }
  return bVar1;
}

