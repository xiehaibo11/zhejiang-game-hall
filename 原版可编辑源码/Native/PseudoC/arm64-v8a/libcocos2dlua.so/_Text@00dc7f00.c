
/* non-virtual thunk to cocos2d::ui::Text::~Text() */

void __thiscall cocos2d::ui::Text::~Text(Text *this)

{
  Widget *this_00;
  
  this_00 = (Widget *)(this + -0x4f0);
  *(undefined ***)this_00 = &PTR__Text_016deba8;
  *(undefined ***)(this + -0x1d8) = &PTR__Text_016df260;
  *(undefined ***)this = &PTR__Text_016df288;
  if (((byte)this[0x18] & 1) != 0) {
    operator_delete(*(void **)(this + 0x28));
  }
  Widget::~Widget(this_00);
  operator_delete(this_00);
  return;
}

