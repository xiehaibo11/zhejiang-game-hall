
/* cocos2d::ui::TextBMFont::~TextBMFont() */

void __thiscall cocos2d::ui::TextBMFont::~TextBMFont(TextBMFont *this)

{
  *(undefined ***)this = &PTR__TextBMFont_016df9c0;
  *(undefined ***)(this + 0x318) = &PTR__TextBMFont_016e0050;
  if (((byte)this[0x510] & 1) != 0) {
    operator_delete(*(void **)(this + 0x520));
  }
  if (((byte)this[0x4f8] & 1) != 0) {
    operator_delete(*(void **)(this + 0x508));
  }
  Widget::~Widget((Widget *)this);
  return;
}

