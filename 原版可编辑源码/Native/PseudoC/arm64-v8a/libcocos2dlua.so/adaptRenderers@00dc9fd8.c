
/* cocos2d::ui::TextBMFont::adaptRenderers() */

void __thiscall cocos2d::ui::TextBMFont::adaptRenderers(TextBMFont *this)

{
  if (this[0x528] != (TextBMFont)0x0) {
    labelBMFontScaleChangedWithSize(this);
    this[0x528] = (TextBMFont)0x0;
  }
  return;
}

