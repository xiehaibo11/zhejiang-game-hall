
/* cocos2d::ui::Widget::setHighlighted(bool) */

void __thiscall cocos2d::ui::Widget::setHighlighted(Widget *this,bool param_1)

{
  if ((Widget)param_1 != this[0x385]) {
                    /* catch() { ... } // from try @ 00daa8b0 with catch @ 00daa908 */
    this[0x385] = (Widget)param_1;
    if (this[899] == (Widget)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00daa93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 0x648))();
      return;
    }
    if (param_1) {
      if (*(int *)(this + 0x38c) != 1) {
        *(undefined4 *)(this + 0x38c) = 1;
                    /* WARNING: Could not recover jumptable at 0x00daa930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)this + 0x640))();
        return;
      }
    }
    else if (*(int *)(this + 0x38c) != 0) {
                    /* try { // try from 00daa944 to 00eaa99b has its CatchHandler @ 00daa944
                       catch() { ... } // from try @ 00daa944 with catch @ 00daa944
                       catch() { ... } // from try @ 00daa9a8 with catch @ 00daa944 */
      *(undefined4 *)(this + 0x38c) = 0;
                    /* WARNING: Could not recover jumptable at 0x00daa950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 0x638))();
      return;
    }
  }
  return;
}

