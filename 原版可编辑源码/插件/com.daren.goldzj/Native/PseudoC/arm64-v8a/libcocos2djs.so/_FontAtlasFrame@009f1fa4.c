
/* cocos2d::FontAtlasFrame::~FontAtlasFrame() */

void __thiscall cocos2d::FontAtlasFrame::~FontAtlasFrame(FontAtlasFrame *this)

{
  void *pvVar1;
  
                    /* try { // try from 009f1fa4 to 00af1fab has its CatchHandler @ 009f2068 */
                    /* try { // try from 009f1fac to 00af1fd3 has its CatchHandler @ 009f1b08 */
  *(undefined ***)this = &PTR__FontAtlasFrame_01c6c348;
  if (*(Ref **)(this + 0x50) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x50));
  }
  pvVar1 = *(void **)(this + 8);
                    /* try { // try from 009f1fd4 to 00af1fd7 has its CatchHandler @ 009f2104 */
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar1;
    operator_delete(pvVar1);
  }
                    /* try { // try from 009f1fec to 00af1ff3 has its CatchHandler @ 009f2064 */
  operator_delete(this);
  return;
}

