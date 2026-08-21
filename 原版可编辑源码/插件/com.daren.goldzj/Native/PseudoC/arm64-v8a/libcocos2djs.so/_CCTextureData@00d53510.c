
/* dragonBones::CCTextureData::~CCTextureData() */

void __thiscall dragonBones::CCTextureData::~CCTextureData(CCTextureData *this)

{
  *(undefined ***)this = &PTR__CCTextureData_01c91ac8;
  TextureData::_onClear((TextureData *)this);
  if (*(Ref **)(this + 0x48) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x48));
    *(undefined8 *)(this + 0x48) = 0;
  }
  TextureData::~TextureData((TextureData *)this);
  operator_delete(this);
  return;
}

