
/* cocos2d::ui::TextAtlas::adaptRenderers() */

void __thiscall cocos2d::ui::TextAtlas::adaptRenderers(TextAtlas *this)

{
  if (this[0x548] != (TextAtlas)0x0) {
    labelAtlasScaleChangedWithSize(this);
    this[0x548] = (TextAtlas)0x0;
  }
  return;
}

