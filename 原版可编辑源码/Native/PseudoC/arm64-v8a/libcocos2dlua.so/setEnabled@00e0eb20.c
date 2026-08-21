
/* cocos2d::extension::ControlColourPicker::setEnabled(bool) */

void __thiscall
cocos2d::extension::ControlColourPicker::setEnabled(ControlColourPicker *this,bool param_1)

{
  long *plVar1;
  
  Control::setEnabled((Control *)this,param_1);
  plVar1 = *(long **)(this + 0x378);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x650))(plVar1,param_1);
  }
  plVar1 = *(long **)(this + 0x370);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00e0eb7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x650))(plVar1,param_1);
    return;
  }
  return;
}

