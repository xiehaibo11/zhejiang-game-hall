
/* cocos2d::FontFNT::~FontFNT() */

void __thiscall cocos2d::FontFNT::~FontFNT(FontFNT *this)

{
  *(undefined ***)this = &PTR__FontFNT_016fd158;
  Ref::release(*(Ref **)(this + 0x28));
                    /* catch() { ... } // from try @ 00f02f00 with catch @ 00f02fa0 */
  Ref::~Ref((Ref *)this);
  return;
}

