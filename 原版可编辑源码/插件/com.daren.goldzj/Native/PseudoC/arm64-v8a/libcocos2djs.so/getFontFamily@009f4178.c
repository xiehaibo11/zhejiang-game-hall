
/* cocos2d::FontFreeType::getFontFamily() const */

undefined8 __thiscall cocos2d::FontFreeType::getFontFamily(FontFreeType *this)

{
  if (*(long *)(this + 0x58) != 0) {
    return *(undefined8 *)(*(long *)(this + 0x58) + 0x28);
  }
  return 0;
}

