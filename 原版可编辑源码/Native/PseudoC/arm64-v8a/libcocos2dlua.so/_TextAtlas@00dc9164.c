
/* non-virtual thunk to cocos2d::ui::TextAtlas::~TextAtlas() */

void __thiscall cocos2d::ui::TextAtlas::~TextAtlas(TextAtlas *this)

{
  TextAtlas TVar1;
  
  *(undefined ***)(this + -0x318) = &PTR__TextAtlas_016df2f0;
  *(undefined ***)this = &PTR__TextAtlas_016df980;
  if (((byte)this[0x218] & 1) == 0) {
    TVar1 = this[0x1f8];
  }
  else {
    operator_delete(*(void **)(this + 0x228));
    TVar1 = this[0x1f8];
  }
  if (((byte)TVar1 & 1) == 0) {
    TVar1 = this[0x1e0];
  }
  else {
    operator_delete(*(void **)(this + 0x208));
    TVar1 = this[0x1e0];
  }
  if (((byte)TVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x1f0));
  }
  Widget::~Widget((Widget *)(this + -0x318));
  return;
}

