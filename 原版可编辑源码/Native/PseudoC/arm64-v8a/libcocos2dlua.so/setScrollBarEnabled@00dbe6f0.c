
/* cocos2d::ui::ScrollView::setScrollBarEnabled(bool) */

void __thiscall cocos2d::ui::ScrollView::setScrollBarEnabled(ScrollView *this,bool param_1)

{
  if (this[0x851] != (ScrollView)param_1) {
                    /* try { // try from 00dbe718 to 00ebe723 has its CatchHandler @ 00dbe860 */
    if (this[0x851] != (ScrollView)0x0) {
      (**(code **)(*(long *)this + 0x7b0))(this);
    }
                    /* try { // try from 00dbe72c to 00ebe76b has its CatchHandler @ 00dbe888 */
    this[0x851] = (ScrollView)param_1;
    if (param_1) {
                    /* WARNING: Could not recover jumptable at 0x00dbe74c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 0x7a8))(this);
      return;
    }
  }
  return;
}

