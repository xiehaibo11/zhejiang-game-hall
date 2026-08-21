
/* cocos2d::ui::EditBox::setFontName(char const*) */

void __thiscall cocos2d::ui::EditBox::setFontName(EditBox *this,char *param_1)

{
  undefined4 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x5b8);
  if (plVar2 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 0x98))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x00dead78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x18))(plVar2,param_1,uVar1);
    return;
  }
  return;
}

