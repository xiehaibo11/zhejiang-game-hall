
/* cocos2d::ui::RadioButtonGroup::setAllowedNoSelection(bool) */

void __thiscall
cocos2d::ui::RadioButtonGroup::setAllowedNoSelection(RadioButtonGroup *this,bool param_1)

{
  this[0x548] = (RadioButtonGroup)param_1;
  if (((!param_1) && (*(long *)(this + 0x540) == 0)) &&
     (0 < *(long *)(this + 0x4f8) - (long)*(undefined8 **)(this + 0x4f0))) {
                    /* WARNING: Could not recover jumptable at 0x00dc6868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x690))(this,**(undefined8 **)(this + 0x4f0));
    return;
  }
  return;
}

