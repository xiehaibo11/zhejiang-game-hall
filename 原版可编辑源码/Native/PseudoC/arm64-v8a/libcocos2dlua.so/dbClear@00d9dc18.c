
/* virtual thunk to dragonBones::CCArmatureDisplay::dbClear() */

void __thiscall dragonBones::CCArmatureDisplay::dbClear(CCArmatureDisplay *this)

{
  Ref *this_00;
  long lVar1;
  
  this_00 = (Ref *)(this + *(long *)(*(long *)this + -0x48));
  lVar1 = cocos2d::Director::getInstance();
  (**(code **)(*(long *)this_00 + 0x380))(this_00,*(undefined8 *)(lVar1 + 0xb0));
  *(undefined8 *)(this_00 + 0x300) = 0;
  if (*(Ref **)(this_00 + 0x308) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this_00 + 0x308));
  }
  cocos2d::Ref::release(this_00);
  return;
}

