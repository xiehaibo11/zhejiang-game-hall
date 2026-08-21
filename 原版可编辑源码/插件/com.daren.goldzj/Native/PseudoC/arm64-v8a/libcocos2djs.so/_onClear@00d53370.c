
/* dragonBones::CCTextureData::_onClear() */

void __thiscall dragonBones::CCTextureData::_onClear(CCTextureData *this)

{
  TextureData::_onClear((TextureData *)this);
  if (*(Ref **)(this + 0x48) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x48));
    *(undefined8 *)(this + 0x48) = 0;
  }
  return;
}

