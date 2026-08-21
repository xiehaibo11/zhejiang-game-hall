
/* cocos2d::ui::EditBox::setFontSize(int) */

void __thiscall cocos2d::ui::EditBox::setFontSize(EditBox *this,int param_1)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x5b8);
  if (plVar2 != (long *)0x0) {
                    /* try { // try from 00deadc4 to 00eeadc7 has its CatchHandler @ 00deae08 */
    uVar1 = (**(code **)(*plVar2 + 0x90))(plVar2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00deadec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x18))(plVar2,uVar1,param_1);
    return;
  }
  return;
}

