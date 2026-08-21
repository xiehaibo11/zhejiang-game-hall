
/* cocos2d::ui::Text::adaptRenderers() */

void __thiscall cocos2d::ui::Text::adaptRenderers(Text *this)

{
  if (this[0x530] != (Text)0x0) {
    labelScaleChangedWithSize(this);
    this[0x530] = (Text)0x0;
  }
  return;
}

