
/* cocos2d::PUEventHandler::notifyRescaled(cocos2d::Vec3 const&) */

void __thiscall cocos2d::PUEventHandler::notifyRescaled(PUEventHandler *this,Vec3 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0x60) = uVar1;
  return;
}

