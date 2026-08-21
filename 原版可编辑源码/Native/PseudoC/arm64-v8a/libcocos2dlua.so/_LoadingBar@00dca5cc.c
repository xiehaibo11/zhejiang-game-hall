
/* non-virtual thunk to cocos2d::ui::LoadingBar::~LoadingBar() */

void __thiscall cocos2d::ui::LoadingBar::~LoadingBar(LoadingBar *this)

{
  *(undefined ***)(this + -0x318) = &PTR__LoadingBar_016e0090;
                    /* try { // try from 00dca5f0 to 00eca5f7 has its CatchHandler @ 00dca758 */
  *(undefined ***)this = &PTR__LoadingBar_016e0720;
  if (((byte)this[0x228] & 1) != 0) {
    operator_delete(*(void **)(this + 0x238));
  }
  Widget::~Widget((Widget *)(this + -0x318));
  return;
}

