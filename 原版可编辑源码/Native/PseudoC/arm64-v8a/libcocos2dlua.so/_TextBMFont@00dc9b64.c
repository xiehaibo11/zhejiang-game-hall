
/* non-virtual thunk to cocos2d::ui::TextBMFont::~TextBMFont() */

void __thiscall cocos2d::ui::TextBMFont::~TextBMFont(TextBMFont *this)

{
  *(undefined ***)(this + -0x318) = &PTR__TextBMFont_016df9c0;
  *(undefined ***)this = &PTR__TextBMFont_016e0050;
  if (((byte)this[0x1f8] & 1) != 0) {
    operator_delete(*(void **)(this + 0x208));
  }
  if (((byte)this[0x1e0] & 1) != 0) {
    operator_delete(*(void **)(this + 0x1f0));
  }
  Widget::~Widget((Widget *)(this + -0x318));
  return;
}

