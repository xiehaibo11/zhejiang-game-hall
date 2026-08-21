
/* cocos2d::extension::ControlButton::setSelected(bool) */

void __thiscall cocos2d::extension::ControlButton::setSelected(ControlButton *this,bool param_1)

{
  Control::setSelected((Control *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00e0ab14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x680))(this);
  return;
}

