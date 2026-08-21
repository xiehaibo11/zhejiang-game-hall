
/* cocos2d::extension::ControlButton::setPreferredSize(cocos2d::Size const&) */

void __thiscall
cocos2d::extension::ControlButton::setPreferredSize(ControlButton *this,Size *param_1)

{
  long *plVar1;
  
  if ((*(float *)param_1 == 0.0) && (*(float *)(param_1 + 4) == 0.0)) {
    this[0x35a] = (ControlButton)0x1;
  }
  else {
    plVar1 = *(long **)(this + 0x430);
    this[0x35a] = (ControlButton)0x0;
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      cocos2d::ui::Scale9Sprite::setPreferredSize((Size *)plVar1[3]);
    }
  }
  Size::operator=((Size *)(this + 0x390),param_1);
                    /* WARNING: Could not recover jumptable at 0x00e0aca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x680))(this);
  return;
}

