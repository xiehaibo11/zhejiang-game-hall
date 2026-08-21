
/* cocos2d::ui::ImageView::~ImageView() */

void __thiscall cocos2d::ui::ImageView::~ImageView(ImageView *this)

{
                    /* try { // try from 00dc70c0 to 00ec70c3 has its CatchHandler @ 00dc70c8 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dc70c0 with catch @ 00dc70c8
                        */
  *(undefined ***)this = &PTR__ImageView_016de470;
  *(undefined ***)(this + 0x318) = &PTR__ImageView_016deb18;
  *(undefined ***)(this + 0x4f0) = &PTR__ImageView_016deb40;
  if (((byte)this[0x528] & 1) != 0) {
    operator_delete(*(void **)(this + 0x538));
  }
  Widget::~Widget((Widget *)this);
  return;
}

