
/* cocos2d::ui::RichElementImage::~RichElementImage() */

void __thiscall cocos2d::ui::RichElementImage::~RichElementImage(RichElementImage *this)

{
  *(undefined ***)this = &PTR__RichElementImage_0169e148;
  if (((byte)this[0x68] & 1) != 0) {
    operator_delete(*(void **)(this + 0x78));
  }
  if (((byte)this[0x30] & 1) != 0) {
    operator_delete(*(void **)(this + 0x40));
  }
  Ref::~Ref((Ref *)this);
  return;
}

