
/* dragonBones::CCArmatureDisplay::dbClear() */

void __thiscall dragonBones::CCArmatureDisplay::dbClear(CCArmatureDisplay *this)

{
  *(undefined8 *)(this + 0x10) = 0;
  cocos2d::Ref::release((Ref *)this);
  return;
}

