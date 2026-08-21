
/* cocos2d::FontAtlas::setAntiAliasTexParameters() */

void __thiscall cocos2d::FontAtlas::setAntiAliasTexParameters(FontAtlas *this)

{
  long *plVar1;
  
  if (this[200] == (FontAtlas)0x0) {
    plVar1 = *(long **)(this + 0x38);
    this[200] = (FontAtlas)0x1;
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      Texture2D::setAntiAliasTexParameters((Texture2D *)plVar1[3]);
    }
  }
  return;
}

