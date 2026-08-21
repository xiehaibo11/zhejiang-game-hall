
/* non-virtual thunk to cocos2d::ui::TextBMFont::~TextBMFont() */

void __thiscall cocos2d::ui::TextBMFont::~TextBMFont(TextBMFont *this)

{
  Widget *this_00;
  
  this_00 = (Widget *)(this + -0x318);
  *(undefined ***)this_00 = &PTR__TextBMFont_016df9c0;
                    /* catch() { ... } // from try @ 00dc9c10 with catch @ 00dc9c44 */
  *(undefined ***)this = &PTR__TextBMFont_016e0050;
  if (((byte)this[0x1f8] & 1) != 0) {
    operator_delete(*(void **)(this + 0x208));
  }
  if (((byte)this[0x1e0] & 1) != 0) {
                    /* catch() { ... } // from try @ 00dc9c9c with catch @ 00dc9c60 */
    operator_delete(*(void **)(this + 0x1f0));
  }
  Widget::~Widget(this_00);
  operator_delete(this_00);
  return;
}

