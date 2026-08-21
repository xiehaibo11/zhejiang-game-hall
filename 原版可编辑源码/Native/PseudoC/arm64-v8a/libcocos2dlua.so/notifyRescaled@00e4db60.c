
/* cocos2d::PUObserver::notifyRescaled(cocos2d::Vec3 const&) */

void __thiscall cocos2d::PUObserver::notifyRescaled(PUObserver *this,Vec3 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(this + 0x80);
  puVar1 = *(undefined8 **)(this + 0x88);
  uVar2 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0x68) = uVar2;
  for (; puVar3 != puVar1; puVar3 = puVar3 + 1) {
    (**(code **)(*(long *)*puVar3 + 0x10))((long *)*puVar3,param_1);
  }
  return;
}

