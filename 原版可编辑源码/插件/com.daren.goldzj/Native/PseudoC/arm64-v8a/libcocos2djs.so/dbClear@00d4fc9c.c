
/* virtual thunk to dragonBones::CCArmatureDisplay::dbClear() */

void __thiscall dragonBones::CCArmatureDisplay::dbClear(CCArmatureDisplay *this)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)this + -0x48);
  *(undefined8 *)((Ref *)(this + lVar1) + 0x10) = 0;
  cocos2d::Ref::release((Ref *)(this + lVar1));
  return;
}

