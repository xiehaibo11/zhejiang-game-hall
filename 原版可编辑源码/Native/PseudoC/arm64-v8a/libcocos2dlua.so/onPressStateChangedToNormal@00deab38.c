
/* cocos2d::ui::EditBox::onPressStateChangedToNormal() */

void __thiscall cocos2d::ui::EditBox::onPressStateChangedToNormal(EditBox *this)

{
                    /* try { // try from 00deab44 to 00eeab47 has its CatchHandler @ 00deabac */
  (**(code **)(**(long **)(this + 0x4f8) + 0x170))(*(long **)(this + 0x4f8),1);
  (**(code **)(**(long **)(this + 0x500) + 0x170))(*(long **)(this + 0x500),0);
  (**(code **)(**(long **)(this + 0x508) + 0x170))(*(long **)(this + 0x508),0);
  Scale9Sprite::setState(*(Scale9Sprite **)(this + 0x4f8),0);
  return;
}

