
/* non-virtual thunk to cocos2d::ui::ImageView::~ImageView() */

void __thiscall cocos2d::ui::ImageView::~ImageView(ImageView *this)

{
  Widget *this_00;
  
  this_00 = (Widget *)(this + -0x318);
  *(undefined ***)this_00 = &PTR__ImageView_016de470;
  *(undefined ***)this = &PTR__ImageView_016deb18;
  *(undefined ***)(this + 0x1d8) = &PTR__ImageView_016deb40;
  if (((byte)this[0x210] & 1) != 0) {
    operator_delete(*(void **)(this + 0x220));
  }
  Widget::~Widget(this_00);
  operator_delete(this_00);
  return;
}

