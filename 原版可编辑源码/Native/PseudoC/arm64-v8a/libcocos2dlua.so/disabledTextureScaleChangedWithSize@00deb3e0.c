
/* cocos2d::ui::EditBox::disabledTextureScaleChangedWithSize() */

void __thiscall cocos2d::ui::EditBox::disabledTextureScaleChangedWithSize(EditBox *this)

{
  Scale9Sprite::setPreferredSize(*(Size **)(this + 0x508));
                    /* WARNING: Could not recover jumptable at 0x00deb420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x508) + 200))
            (*(float *)(this + 0x80) * 0.5,*(float *)(this + 0x84) * 0.5);
  return;
}

