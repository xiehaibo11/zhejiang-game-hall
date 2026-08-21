
/* cocos2d::ui::Button::normalTextureScaleChangedWithSize() */

void __thiscall cocos2d::ui::Button::normalTextureScaleChangedWithSize(Button *this)

{
  Scale9Sprite::setPreferredSize(*(Size **)(this + 0x4f0));
                    /* catch() { ... } // from try @ 00dc15c4 with catch @ 00dc17a4 */
                    /* WARNING: Could not recover jumptable at 0x00dc17ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x4f0) + 200))
            (*(float *)(this + 0x80) * 0.5,*(float *)(this + 0x84) * 0.5);
  return;
}

