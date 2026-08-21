
/* cocos2d::FontFreeType::getGlyphBitmap(unsigned long, bool) */

void __thiscall cocos2d::FontFreeType::getGlyphBitmap(FontFreeType *this,ulong param_1,bool param_2)

{
  if (param_2) {
    getSDFGlyphBitmap((ulong)this);
    return;
  }
  getNormalGlyphBitmap((ulong)this);
  return;
}

