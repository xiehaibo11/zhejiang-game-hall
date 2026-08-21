
/* cocos2d::ui::RichElementImage::~RichElementImage() */

void __thiscall cocos2d::ui::RichElementImage::~RichElementImage(RichElementImage *this)

{
  *(undefined ***)this = &PTR__RichElementImage_0169e148;
  if (((byte)this[0x68] & 1) != 0) {
    operator_delete(*(void **)(this + 0x78));
  }
  if (((byte)this[0x30] & 1) != 0) {
                    /* catch() { ... } // from try @ 0099b8b4 with catch @ 0099ba40 */
    operator_delete(*(void **)(this + 0x40));
  }
                    /* catch() { ... } // from try @ 0099b3ec with catch @ 0099ba44 */
                    /* catch() { ... } // from try @ 0099b8cc with catch @ 0099ba48 */
  Ref::~Ref((Ref *)this);
                    /* catch() { ... } // from try @ 0099b7c4 with catch @ 0099ba4c */
                    /* catch() { ... } // from try @ 0099b404 with catch @ 0099ba50 */
  operator_delete(this);
  return;
}

