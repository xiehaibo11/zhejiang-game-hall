
/* dragonBones::CCTextureAtlasData::~CCTextureAtlasData() */

void __thiscall dragonBones::CCTextureAtlasData::~CCTextureAtlasData(CCTextureAtlasData *this)

{
  *(undefined ***)this = &PTR__CCTextureAtlasData_01c91a70;
  TextureAtlasData::_onClear((TextureAtlasData *)this);
  if (*(Ref **)(this + 0x68) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x68));
    *(undefined8 *)(this + 0x68) = 0;
  }
  TextureAtlasData::~TextureAtlasData((TextureAtlasData *)this);
  return;
}

