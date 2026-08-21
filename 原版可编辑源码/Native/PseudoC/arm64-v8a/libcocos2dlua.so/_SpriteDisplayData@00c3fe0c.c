
/* cocostudio::SpriteDisplayData::~SpriteDisplayData() */

void __thiscall cocostudio::SpriteDisplayData::~SpriteDisplayData(SpriteDisplayData *this)

{
  *(undefined ***)this = &PTR__SpriteDisplayData_016c8d10;
  cocos2d::Ref::~Ref((Ref *)(this + 0x40));
  *(undefined ***)this = &PTR__DisplayData_016c8ce8;
  if (((byte)this[0x28] & 1) != 0) {
    operator_delete(*(void **)(this + 0x38));
  }
  cocos2d::Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

