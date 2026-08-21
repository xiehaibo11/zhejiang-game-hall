
/* cocos2d::ui::Slider::adaptRenderers() */

void __thiscall cocos2d::ui::Slider::adaptRenderers(Slider *this)

{
  if (this[0x5f4] != (Slider)0x0) {
    barRendererScaleChangedWithSize(this);
    this[0x5f4] = (Slider)0x0;
  }
  if (this[0x5f5] != (Slider)0x0) {
    progressBarRendererScaleChangedWithSize(this);
    this[0x5f5] = (Slider)0x0;
  }
  return;
}

