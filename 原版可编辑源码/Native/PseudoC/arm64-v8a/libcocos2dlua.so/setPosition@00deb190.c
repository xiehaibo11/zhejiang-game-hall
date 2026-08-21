
/* cocos2d::ui::EditBox::setPosition(cocos2d::Vec2 const&) */

void __thiscall cocos2d::ui::EditBox::setPosition(EditBox *this,Vec2 *param_1)

{
  long *plVar1;
  
  Widget::setPosition((Widget *)this,param_1);
  plVar1 = *(long **)(this + 0x5b8);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00deb1c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xf8))(plVar1,param_1);
    return;
  }
  return;
}

