
/* dragonBones::CCTextureAtlasData::_onClear() */

void __thiscall dragonBones::CCTextureAtlasData::_onClear(CCTextureAtlasData *this)

{
  TextureAtlasData::_onClear((TextureAtlasData *)this);
  if (*(Ref **)(this + 0x68) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x68));
    *(undefined8 *)(this + 0x68) = 0;
  }
  return;
}

