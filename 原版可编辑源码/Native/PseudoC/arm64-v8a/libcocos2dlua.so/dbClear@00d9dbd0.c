
/* dragonBones::CCArmatureDisplay::dbClear() */

void __thiscall dragonBones::CCArmatureDisplay::dbClear(CCArmatureDisplay *this)

{
  long lVar1;
  
  lVar1 = cocos2d::Director::getInstance();
  (**(code **)(*(long *)this + 0x380))(this,*(undefined8 *)(lVar1 + 0xb0));
  *(undefined8 *)(this + 0x300) = 0;
  if (*(Ref **)(this + 0x308) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x308));
  }
  cocos2d::Ref::release((Ref *)this);
  return;
}

