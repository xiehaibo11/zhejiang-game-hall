
/* cocos2d::ui::EditBox::setContentSize(cocos2d::Size const&) */

void __thiscall cocos2d::ui::EditBox::setContentSize(EditBox *this,Size *param_1)

{
  long *plVar1;
  
  Widget::setContentSize((Widget *)this,param_1);
  plVar1 = *(long **)(this + 0x5b8);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00deb250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x108))(plVar1,param_1);
    return;
  }
  return;
}

