
/* cocostudio::Skin::~Skin() */

void __thiscall cocostudio::Skin::~Skin(Skin *this)

{
  *(undefined ***)this = &PTR__Skin_016c9608;
  *(undefined ***)(this + 0x2f8) = &PTR__Skin_016c9cb0;
  cocos2d::QuadCommand::~QuadCommand((QuadCommand *)(this + 0x5f0));
  if (((byte)this[0x5d8] & 1) != 0) {
    operator_delete(*(void **)(this + 0x5e8));
  }
  cocos2d::Mat4::~Mat4((Mat4 *)(this + 0x598));
  BaseData::~BaseData((BaseData *)(this + 0x530));
  cocos2d::Sprite::~Sprite((Sprite *)this);
  return;
}

