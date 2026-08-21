
/* cocos2d::FontFreeType::getGlyphCollection() const */

FontFreeType * __thiscall cocos2d::FontFreeType::getGlyphCollection(FontFreeType *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x70);
  if (iVar1 == 3) {
    if (((byte)this[0x78] & 1) == 0) {
      return this + 0x79;
    }
                    /* catch() { ... } // from try @ 00f0547c with catch @ 00f055a8 */
    return *(FontFreeType **)(this + 0x88);
  }
  if (iVar1 != 2) {
    if (iVar1 == 1) {
                    /* catch() { ... } // from try @ 00f05488 with catch @ 00f05578 */
      return (FontFreeType *)_glyphNEHE;
    }
    return (FontFreeType *)0x0;
  }
  return (FontFreeType *)_glyphASCII;
}

