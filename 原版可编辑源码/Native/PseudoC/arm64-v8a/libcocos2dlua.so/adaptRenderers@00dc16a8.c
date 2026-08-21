
/* cocos2d::ui::Button::adaptRenderers() */

void __thiscall cocos2d::ui::Button::adaptRenderers(Button *this)

{
  if (this[0x563] != (Button)0x0) {
    Scale9Sprite::setPreferredSize(*(Size **)(this + 0x4f0));
    (**(code **)(**(long **)(this + 0x4f0) + 200))
              (*(float *)(this + 0x80) * 0.5,*(float *)(this + 0x84) * 0.5);
    this[0x563] = (Button)0x0;
  }
  if (this[0x564] != (Button)0x0) {
    Scale9Sprite::setPreferredSize(*(Size **)(this + 0x4f8));
    (**(code **)(**(long **)(this + 0x4f8) + 200))
              (*(float *)(this + 0x80) * 0.5,*(float *)(this + 0x84) * 0.5);
    this[0x564] = (Button)0x0;
  }
  if (this[0x565] != (Button)0x0) {
    Scale9Sprite::setPreferredSize(*(Size **)(this + 0x500));
    (**(code **)(**(long **)(this + 0x500) + 200))
              (*(float *)(this + 0x80) * 0.5,*(float *)(this + 0x84) * 0.5);
    this[0x565] = (Button)0x0;
  }
  return;
}

