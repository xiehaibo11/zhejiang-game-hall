
/* cocos2d::ui::EditBox::setVisible(bool) */

void __thiscall cocos2d::ui::EditBox::setVisible(EditBox *this,bool param_1)

{
  long *plVar1;
  
  Node::setVisible((Node *)this,param_1);
  plVar1 = *(long **)(this + 0x5b8);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00deb20c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x100))(plVar1,param_1);
    return;
  }
  return;
}

