
/* non-virtual thunk to cocos2d::ui::LoadingBar::~LoadingBar() */

void __thiscall cocos2d::ui::LoadingBar::~LoadingBar(LoadingBar *this)

{
  Widget *this_00;
  
  this_00 = (Widget *)(this + -0x318);
                    /* try { // try from 00dca67c to 00eca687 has its CatchHandler @ 00dca77c */
  *(undefined ***)this_00 = &PTR__LoadingBar_016e0090;
                    /* try { // try from 00dca688 to 00eca6d7 has its CatchHandler @ 00dca4b4 */
  *(undefined ***)this = &PTR__LoadingBar_016e0720;
  if (((byte)this[0x228] & 1) != 0) {
    operator_delete(*(void **)(this + 0x238));
  }
  Widget::~Widget(this_00);
  operator_delete(this_00);
  return;
}

