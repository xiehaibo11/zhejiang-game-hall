
/* cocos2d::ui::Button::disabledTextureScaleChangedWithSize() */

void __thiscall cocos2d::ui::Button::disabledTextureScaleChangedWithSize(Button *this)

{
  Scale9Sprite::setPreferredSize(*(Size **)(this + 0x500));
                    /* WARNING: Could not recover jumptable at 0x00dc1834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x500) + 200))
            (*(float *)(this + 0x80) * 0.5,*(float *)(this + 0x84) * 0.5);
  return;
}

