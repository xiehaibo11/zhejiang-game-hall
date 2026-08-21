
/* cocos2d::Image::~Image() */

void __thiscall cocos2d::Image::~Image(Image *this)

{
                    /* try { // try from 009963ec to 00a963f7 has its CatchHandler @ 00996704 */
                    /* try { // try from 009963f8 to 00a9640f has its CatchHandler @ 0099671c */
  *(undefined ***)this = &PTR__Image_01c6a638;
  if (*(void **)(this + 0x10) != (void *)0x0) {
    free(*(void **)(this + 0x10));
    *(undefined8 *)(this + 0x10) = 0;
  }
  if (((byte)this[0x138] & 1) != 0) {
    operator_delete(*(void **)(this + 0x148));
  }
                    /* try { // try from 0099642c to 00a96433 has its CatchHandler @ 009966ec */
  Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

