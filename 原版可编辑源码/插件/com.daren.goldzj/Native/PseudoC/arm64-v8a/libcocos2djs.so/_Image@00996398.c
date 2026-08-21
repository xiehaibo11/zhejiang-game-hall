
/* cocos2d::Image::~Image() */

void __thiscall cocos2d::Image::~Image(Image *this)

{
  *(undefined ***)this = &PTR__Image_01c6a638;
  if (*(void **)(this + 0x10) != (void *)0x0) {
                    /* try { // try from 009963c0 to 00a963d7 has its CatchHandler @ 0099670c */
    free(*(void **)(this + 0x10));
    *(undefined8 *)(this + 0x10) = 0;
  }
  if (((byte)this[0x138] & 1) != 0) {
    operator_delete(*(void **)(this + 0x148));
  }
                    /* try { // try from 009963e0 to 00a963eb has its CatchHandler @ 00996708 */
  Ref::~Ref((Ref *)this);
  return;
}

