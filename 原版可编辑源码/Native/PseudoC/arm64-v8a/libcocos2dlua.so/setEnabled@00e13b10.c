
/* cocos2d::extension::ControlSwitch::setEnabled(bool) */

void __thiscall cocos2d::extension::ControlSwitch::setEnabled(ControlSwitch *this,bool param_1)

{
  long *plVar1;
  undefined4 uVar2;
  
  plVar1 = *(long **)(this + 0x358);
                    /* catch() { ... } // from try @ 00e13a74 with catch @ 00e13b18 */
  this[0x31d] = (ControlSwitch)param_1;
  if (plVar1 != (long *)0x0) {
    uVar2 = 0xffffff80;
    if (param_1) {
      uVar2 = 0xffffffff;
    }
                    /* WARNING: Could not recover jumptable at 0x00e13b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x490))(plVar1,uVar2);
    return;
  }
  return;
}

