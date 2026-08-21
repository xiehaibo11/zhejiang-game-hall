
/* cocos2d::Lens3D::initWithDuration(float, cocos2d::Size const&, cocos2d::Vec2 const&, float) */

undefined8 __thiscall
cocos2d::Lens3D::initWithDuration
          (Lens3D *this,float param_1,Size *param_2,Vec2 *param_3,float param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = GridAction::initWithDuration((GridAction *)this,param_1,param_2);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = NEON_fmov(0xbf800000,4);
    *(undefined8 *)(this + 0x68) = uVar2;
    uVar1 = Vec2::equals((Vec2 *)param_3,this + 0x68);
    if ((uVar1 & 1) == 0) {
      uVar2 = *(undefined8 *)param_3;
      this[0x79] = (Lens3D)0x1;
      *(undefined8 *)(this + 0x68) = uVar2;
    }
    uVar2 = 1;
    *(float *)(this + 0x70) = param_4;
    *(undefined4 *)(this + 0x74) = 0x3f333333;
    *(undefined2 *)(this + 0x78) = 0x100;
  }
  return uVar2;
}

