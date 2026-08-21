
/* cocos2d::ui::EditBox::setPlaceholderFontSize(int) */

void __thiscall cocos2d::ui::EditBox::setPlaceholderFontSize(EditBox *this,int param_1)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x5b8);
  if (plVar2 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 0xa8))(plVar2,param_1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00deaf3c with catch @ 00deaf80
                        */
                    /* WARNING: Could not recover jumptable at 0x00deaf8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x28))(plVar2,uVar1,param_1);
    return;
  }
  return;
}

