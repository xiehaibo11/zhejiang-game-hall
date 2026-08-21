
/* cocos2d::ui::Button::pressedTextureScaleChangedWithSize() */

void __thiscall cocos2d::ui::Button::pressedTextureScaleChangedWithSize(Button *this)

{
                    /* try { // try from 00dc17c0 to 00ec1853 has its CatchHandler @ 00dc17c0
                       catch() { ... } // from try @ 00dc17c0 with catch @ 00dc17c0
                       catch() { ... } // from try @ 00dc1864 with catch @ 00dc17c0 */
  Scale9Sprite::setPreferredSize(*(Size **)(this + 0x4f8));
                    /* WARNING: Could not recover jumptable at 0x00dc17f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x4f8) + 200))
            (*(float *)(this + 0x80) * 0.5,*(float *)(this + 0x84) * 0.5);
  return;
}

