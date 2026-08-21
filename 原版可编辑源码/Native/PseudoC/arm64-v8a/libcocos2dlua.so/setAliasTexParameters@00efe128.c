
/* cocos2d::FontAtlas::setAliasTexParameters() */

void __thiscall cocos2d::FontAtlas::setAliasTexParameters(FontAtlas *this)

{
  long *plVar1;
  
                    /* catch() { ... } // from try @ 00efe02c with catch @ 00efe138
                       catch() { ... } // from try @ 00efe0cc with catch @ 00efe138 */
  if (this[200] != (FontAtlas)0x0) {
                    /* catch() { ... } // from try @ 00efdff4 with catch @ 00efe13c */
    plVar1 = *(long **)(this + 0x38);
    this[200] = (FontAtlas)0x0;
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      Texture2D::setAliasTexParameters((Texture2D *)plVar1[3]);
    }
  }
  return;
}

