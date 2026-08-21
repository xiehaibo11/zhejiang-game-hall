
/* non-virtual thunk to cocostudio::Skin::~Skin() */

void __thiscall cocostudio::Skin::~Skin(Skin *this)

{
  *(undefined ***)(this + -0x2f8) = &PTR__Skin_016c9608;
  *(undefined ***)this = &PTR__Skin_016c9cb0;
  cocos2d::QuadCommand::~QuadCommand((QuadCommand *)(this + 0x2f8));
  if (((byte)this[0x2e0] & 1) != 0) {
    operator_delete(*(void **)(this + 0x2f0));
  }
  cocos2d::Mat4::~Mat4((Mat4 *)(this + 0x2a0));
  BaseData::~BaseData((BaseData *)(this + 0x238));
  cocos2d::Sprite::~Sprite((Sprite *)(this + -0x2f8));
  return;
}

