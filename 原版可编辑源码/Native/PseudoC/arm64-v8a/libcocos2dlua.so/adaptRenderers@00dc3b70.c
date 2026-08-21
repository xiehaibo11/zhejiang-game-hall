
/* cocos2d::ui::AbstractCheckButton::adaptRenderers() */

void __thiscall cocos2d::ui::AbstractCheckButton::adaptRenderers(AbstractCheckButton *this)

{
  if (this[0x53c] != (AbstractCheckButton)0x0) {
    (**(code **)(*(long *)this + 0x6c0))(this);
    this[0x53c] = (AbstractCheckButton)0x0;
  }
  if (this[0x53d] != (AbstractCheckButton)0x0) {
    backGroundSelectedTextureScaleChangedWithSize(this);
    this[0x53d] = (AbstractCheckButton)0x0;
  }
  if (this[0x53e] != (AbstractCheckButton)0x0) {
    frontCrossTextureScaleChangedWithSize(this);
    this[0x53e] = (AbstractCheckButton)0x0;
  }
  if (this[0x53f] != (AbstractCheckButton)0x0) {
    backGroundDisabledTextureScaleChangedWithSize(this);
    this[0x53f] = (AbstractCheckButton)0x0;
  }
  if (this[0x540] != (AbstractCheckButton)0x0) {
    frontCrossDisabledTextureScaleChangedWithSize(this);
    this[0x540] = (AbstractCheckButton)0x0;
  }
  return;
}

