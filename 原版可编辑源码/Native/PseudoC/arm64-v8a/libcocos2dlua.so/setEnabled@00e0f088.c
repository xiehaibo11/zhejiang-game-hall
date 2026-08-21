
/* cocos2d::extension::ControlHuePicker::setEnabled(bool) */

void __thiscall
cocos2d::extension::ControlHuePicker::setEnabled(ControlHuePicker *this,bool param_1)

{
  long *plVar1;
  undefined4 uVar2;
  
  Control::setEnabled((Control *)this,param_1);
  plVar1 = *(long **)(this + 0x368);
  if (plVar1 != (long *)0x0) {
                    /* try { // try from 00e0f0b8 to 00f0f0bf has its CatchHandler @ 00e0f1a0 */
    uVar2 = 0xffffff80;
                    /* try { // try from 00e0f0c0 to 00f0f1cf has its CatchHandler @ 00e0eea8 */
    if (param_1) {
      uVar2 = 0xffffffff;
    }
                    /* WARNING: Could not recover jumptable at 0x00e0f0c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x490))(plVar1,uVar2);
    return;
  }
  return;
}

