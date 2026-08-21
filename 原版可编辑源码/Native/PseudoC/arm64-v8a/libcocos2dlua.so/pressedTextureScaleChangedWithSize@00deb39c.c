
/* cocos2d::ui::EditBox::pressedTextureScaleChangedWithSize() */

void __thiscall cocos2d::ui::EditBox::pressedTextureScaleChangedWithSize(EditBox *this)

{
  Scale9Sprite::setPreferredSize(*(Size **)(this + 0x500));
                    /* WARNING: Could not recover jumptable at 0x00deb3dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x500) + 200))
            (*(float *)(this + 0x80) * 0.5,*(float *)(this + 0x84) * 0.5);
  return;
}

