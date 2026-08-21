
/* cocos2d::ui::Text::~Text() */

void __thiscall cocos2d::ui::Text::~Text(Text *this)

{
  *(undefined ***)this = &PTR__Text_016deba8;
  *(undefined ***)(this + 0x318) = &PTR__Text_016df260;
  *(undefined ***)(this + 0x4f0) = &PTR__Text_016df288;
  if (((byte)this[0x508] & 1) != 0) {
    operator_delete(*(void **)(this + 0x518));
  }
  Widget::~Widget((Widget *)this);
  operator_delete(this);
  return;
}

