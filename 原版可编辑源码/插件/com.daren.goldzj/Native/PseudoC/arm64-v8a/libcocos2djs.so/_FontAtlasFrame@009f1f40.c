
/* cocos2d::FontAtlasFrame::~FontAtlasFrame() */

void __thiscall cocos2d::FontAtlasFrame::~FontAtlasFrame(FontAtlasFrame *this)

{
  void *pvVar1;
  
                    /* try { // try from 009f1f44 to 00af1f57 has its CatchHandler @ 009f2104 */
                    /* try { // try from 009f1f58 to 00af1f67 has its CatchHandler @ 009f20ac */
  *(undefined ***)this = &PTR__FontAtlasFrame_01c6c348;
  if (*(Ref **)(this + 0x50) != (Ref *)0x0) {
                    /* try { // try from 009f1f68 to 00af1f7b has its CatchHandler @ 009f209c */
    Ref::release(*(Ref **)(this + 0x50));
  }
  pvVar1 = *(void **)(this + 8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
                    /* try { // try from 009f1f84 to 00af1f8f has its CatchHandler @ 009f2104 */
  return;
}

