
/* cocos2d::extension::ControlButton::setEnabled(bool) */

void __thiscall cocos2d::extension::ControlButton::setEnabled(ControlButton *this,bool param_1)

{
  Control::setEnabled((Control *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00e0aae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x680))(this);
  return;
}

