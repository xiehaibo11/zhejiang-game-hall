
/* cocos2d::extension::Control::setSelected(bool) */

void __thiscall cocos2d::extension::Control::setSelected(Control *this,bool param_1)

{
  this[0x31e] = (Control)param_1;
                    /* WARNING: Could not recover jumptable at 0x00e097d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x680))();
  return;
}

