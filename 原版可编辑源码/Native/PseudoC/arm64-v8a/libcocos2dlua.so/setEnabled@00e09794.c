
/* cocos2d::extension::Control::setEnabled(bool) */

void __thiscall cocos2d::extension::Control::setEnabled(Control *this,bool param_1)

{
  undefined4 uVar1;
  
  this[0x31d] = (Control)param_1;
  uVar1 = 4;
  if (param_1) {
    uVar1 = 1;
  }
  *(undefined4 *)(this + 0x354) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00e097b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x680))();
  return;
}

