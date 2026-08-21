
/* cocos2d::ui::LoadingBar::~LoadingBar() */

void __thiscall cocos2d::ui::LoadingBar::~LoadingBar(LoadingBar *this)

{
  *(undefined ***)this = &PTR__LoadingBar_016e0090;
  *(undefined ***)(this + 0x318) = &PTR__LoadingBar_016e0720;
  if (((byte)this[0x540] & 1) != 0) {
    operator_delete(*(void **)(this + 0x550));
  }
  Widget::~Widget((Widget *)this);
  return;
}

