
/* cocos2d::FontFNT::~FontFNT() */

void __thiscall cocos2d::FontFNT::~FontFNT(FontFNT *this)

{
  *(undefined ***)this = &PTR__FontFNT_016fd158;
  Ref::release(*(Ref **)(this + 0x28));
  Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

