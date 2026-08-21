
/* cocos2d::ui::Button::getTitleFontSize() const */

undefined1  [16] __thiscall cocos2d::ui::Button::getTitleFontSize(Button *this)

{
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  if (*(Label **)(this + 0x508) != (Label *)0x0) {
    Label::getRenderingFontSize(*(Label **)(this + 0x508));
    auVar1._4_4_ = extraout_var;
    auVar1._0_4_ = extraout_s0;
    auVar1._8_8_ = extraout_var_00;
    return auVar1;
  }
  return ZEXT816(0xbf800000);
}

