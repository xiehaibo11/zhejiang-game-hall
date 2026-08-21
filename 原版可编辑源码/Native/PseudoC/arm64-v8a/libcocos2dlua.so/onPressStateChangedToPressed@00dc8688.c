
/* cocos2d::ui::Text::onPressStateChangedToPressed() */

void __thiscall cocos2d::ui::Text::onPressStateChangedToPressed(Text *this)

{
  if (this[0x4f8] != (Text)0x0) {
    (**(code **)(**(long **)(this + 0x528) + 0x50))
              (*(float *)(this + 0x4fc) + *(float *)(this + 0x524));
                    /* WARNING: Could not recover jumptable at 0x00dc86dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x528) + 0x60))
              (*(float *)(this + 0x500) + *(float *)(this + 0x524));
    return;
  }
  return;
}

