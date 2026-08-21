
/* cocos2d::Particle3DRender::notifyRescaled(cocos2d::Vec3 const&) */

void __thiscall cocos2d::Particle3DRender::notifyRescaled(Particle3DRender *this,Vec3 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0x3c) = uVar1;
  return;
}

