
/* cocos2d::ui::ImageView::imageTextureScaleChangedWithSize() */

void __thiscall cocos2d::ui::ImageView::imageTextureScaleChangedWithSize(ImageView *this)

{
  Scale9Sprite::setPreferredSize(*(Size **)(this + 0x510));
                    /* WARNING: Could not recover jumptable at 0x00dc791c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x510) + 200))
            (*(float *)(this + 0x80) * 0.5,*(float *)(this + 0x84) * 0.5);
  return;
}

