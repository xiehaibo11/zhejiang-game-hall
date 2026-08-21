
/* cocos2d::ui::Widget::setBrightStyle(cocos2d::ui::Widget::BrightStyle) */

void __thiscall cocos2d::ui::Widget::setBrightStyle(Widget *this,int param_2)

{
  if (*(int *)(this + 0x38c) != param_2) {
    *(int *)(this + 0x38c) = param_2;
    if (param_2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00daa988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 0x640))();
      return;
    }
    if (param_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00daa978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 0x638))();
      return;
    }
  }
  return;
}

