
/* cocos2d::ui::TextAtlas::~TextAtlas() */

void __thiscall cocos2d::ui::TextAtlas::~TextAtlas(TextAtlas *this)

{
  TextAtlas TVar1;
  
  *(undefined ***)this = &PTR__TextAtlas_016df2f0;
  *(undefined ***)(this + 0x318) = &PTR__TextAtlas_016df980;
  if (((byte)this[0x530] & 1) == 0) {
    TVar1 = this[0x510];
  }
  else {
    operator_delete(*(void **)(this + 0x540));
    TVar1 = this[0x510];
  }
  if (((byte)TVar1 & 1) == 0) {
    TVar1 = this[0x4f8];
  }
  else {
    operator_delete(*(void **)(this + 0x520));
    TVar1 = this[0x4f8];
  }
  if (((byte)TVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x508));
  }
  Widget::~Widget((Widget *)this);
  return;
}

