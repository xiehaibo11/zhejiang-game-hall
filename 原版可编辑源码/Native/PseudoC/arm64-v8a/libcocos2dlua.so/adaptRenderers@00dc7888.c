
/* cocos2d::ui::ImageView::adaptRenderers() */

void __thiscall cocos2d::ui::ImageView::adaptRenderers(ImageView *this)

{
  if (this[0x524] != (ImageView)0x0) {
    Scale9Sprite::setPreferredSize(*(Size **)(this + 0x510));
    (**(code **)(**(long **)(this + 0x510) + 200))
              (*(float *)(this + 0x80) * 0.5,*(float *)(this + 0x84) * 0.5);
    this[0x524] = (ImageView)0x0;
  }
  return;
}

