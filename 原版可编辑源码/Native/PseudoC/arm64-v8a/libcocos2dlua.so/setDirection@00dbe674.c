
/* cocos2d::ui::ScrollView::setDirection(cocos2d::ui::ScrollView::Direction) */

void __thiscall cocos2d::ui::ScrollView::setDirection(ScrollView *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x7c0) = param_2;
  if (this[0x851] != (ScrollView)0x0) {
                    /* try { // try from 00dbe690 to 00ebe69b has its CatchHandler @ 00dbe840 */
    (**(code **)(*(long *)this + 0x7b0))();
                    /* WARNING: Could not recover jumptable at 0x00dbe6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x7a8))(this);
    return;
  }
  return;
}

