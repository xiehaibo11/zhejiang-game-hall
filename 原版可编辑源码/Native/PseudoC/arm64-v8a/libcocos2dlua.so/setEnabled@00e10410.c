
/* cocos2d::extension::ControlSaturationBrightnessPicker::setEnabled(bool) */

void __thiscall
cocos2d::extension::ControlSaturationBrightnessPicker::setEnabled
          (ControlSaturationBrightnessPicker *this,bool param_1)

{
  long *plVar1;
  undefined4 uVar2;
  
  Control::setEnabled((Control *)this,param_1);
  plVar1 = *(long **)(this + 0x378);
  if (plVar1 != (long *)0x0) {
    uVar2 = 0xffffff80;
    if (param_1) {
      uVar2 = 0xffffffff;
    }
                    /* WARNING: Could not recover jumptable at 0x00e10450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x490))(plVar1,uVar2);
    return;
  }
  return;
}

