
/* cocos2d::renderer::View::View() */

void __thiscall cocos2d::renderer::View::View(View *this)

{
  int iVar1;
  
                    /* try { // try from 009c9458 to 00ac9543 has its CatchHandler @ 009c9258 */
  Ref::Ref((Ref *)this);
  *(undefined ***)this = &PTR__View_01c6b2b0;
  iVar1 = DAT_01d381e4 + 1;
  *(int *)(this + 0xc) = DAT_01d381e4;
  DAT_01d381e4 = iVar1;
  Rect::Rect((Rect *)(this + 0x10),0.0,0.0,1.0,1.0);
  Color4F::Color4F((Color4F *)(this + 0x20),0.3,0.3,0.3,1.0);
  *(undefined8 *)(this + 0x30) = 0x100000001;
  *(undefined4 *)(this + 0x38) = 1;
  this[0x3c] = (View)0x3;
                    /* catch() { ... } // from try @ 009c92e0 with catch @ 009c94d4 */
  Mat4::Mat4((Mat4 *)(this + 0x40));
                    /* catch() { ... } // from try @ 009c92d4 with catch @ 009c94d8 */
                    /* catch() { ... } // from try @ 009c92b4 with catch @ 009c94dc */
  Mat4::Mat4((Mat4 *)(this + 0x80));
                    /* catch() { ... } // from try @ 009c92ec with catch @ 009c94ec */
  Mat4::Mat4((Mat4 *)(this + 0xc0));
  Mat4::Mat4((Mat4 *)(this + 0x100));
  Mat4::Mat4((Mat4 *)(this + 0x140));
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  this[0x198] = (View)0x0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  return;
}

