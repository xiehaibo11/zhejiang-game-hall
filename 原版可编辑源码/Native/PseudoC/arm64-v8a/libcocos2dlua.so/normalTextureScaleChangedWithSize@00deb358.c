
/* cocos2d::ui::EditBox::normalTextureScaleChangedWithSize() */

void __thiscall cocos2d::ui::EditBox::normalTextureScaleChangedWithSize(EditBox *this)

{
  Scale9Sprite::setPreferredSize(*(Size **)(this + 0x4f8));
                    /* WARNING: Could not recover jumptable at 0x00deb398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x4f8) + 200))
            (*(float *)(this + 0x80) * 0.5,*(float *)(this + 0x84) * 0.5);
  return;
}

