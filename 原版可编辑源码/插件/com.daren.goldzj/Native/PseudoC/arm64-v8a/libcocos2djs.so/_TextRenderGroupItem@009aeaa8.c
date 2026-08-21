
/* cocos2d::TextRenderGroupItem::~TextRenderGroupItem() */

void __thiscall cocos2d::TextRenderGroupItem::~TextRenderGroupItem(TextRenderGroupItem *this)

{
  *(undefined ***)this = &PTR__TextRenderGroupItem_01c6ab98;
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  operator_delete(this);
  return;
}

