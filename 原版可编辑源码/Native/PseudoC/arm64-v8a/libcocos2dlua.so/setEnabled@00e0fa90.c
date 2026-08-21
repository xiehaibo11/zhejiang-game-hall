
/* cocos2d::extension::ControlPotentiometer::setEnabled(bool) */

void __thiscall
cocos2d::extension::ControlPotentiometer::setEnabled(ControlPotentiometer *this,bool param_1)

{
  long *plVar1;
  undefined4 uVar2;
  
                    /* catch() { ... } // from try @ 00e0faf0 with catch @ 00e0fa94
                       catch() { ... } // from try @ 00e0fb18 with catch @ 00e0fa94 */
  Control::setEnabled((Control *)this,param_1);
  plVar1 = *(long **)(this + 0x368);
  if (plVar1 != (long *)0x0) {
    uVar2 = 0xffffff80;
    if (param_1) {
      uVar2 = 0xffffffff;
    }
                    /* WARNING: Could not recover jumptable at 0x00e0fad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x490))(plVar1,uVar2);
    return;
  }
  return;
}

