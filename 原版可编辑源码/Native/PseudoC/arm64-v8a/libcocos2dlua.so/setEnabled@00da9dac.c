
/* cocos2d::ui::Widget::setEnabled(bool) */

void __thiscall cocos2d::ui::Widget::setEnabled(Widget *this,bool param_1)

{
  this[0x382] = (Widget)param_1;
  this[899] = (Widget)param_1;
  if (param_1) {
    *(undefined4 *)(this + 0x38c) = 0;
                    /* WARNING: Could not recover jumptable at 0x00da9dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x638))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00da9dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x648))();
  return;
}

