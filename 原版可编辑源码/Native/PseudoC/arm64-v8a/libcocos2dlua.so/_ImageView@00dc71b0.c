
/* cocos2d::ui::ImageView::~ImageView() */

void __thiscall cocos2d::ui::ImageView::~ImageView(ImageView *this)

{
  *(undefined ***)this = &PTR__ImageView_016de470;
  *(undefined ***)(this + 0x318) = &PTR__ImageView_016deb18;
  *(undefined ***)(this + 0x4f0) = &PTR__ImageView_016deb40;
  if (((byte)this[0x528] & 1) != 0) {
    operator_delete(*(void **)(this + 0x538));
  }
  Widget::~Widget((Widget *)this);
  operator_delete(this);
  return;
}

