
/* cocos2d::PUAffector::notifyRescaled(cocos2d::Vec3 const&) */

void __thiscall cocos2d::PUAffector::notifyRescaled(PUAffector *this,Vec3 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0x40) = uVar1;
  return;
}

