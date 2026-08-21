
/* cocos2d::ui::Widget::setSwallowTouches(bool) */

void __thiscall cocos2d::ui::Widget::setSwallowTouches(Widget *this,bool param_1)

{
  if (*(EventListenerTouchOneByOne **)(this + 0x3c0) != (EventListenerTouchOneByOne *)0x0) {
    EventListenerTouchOneByOne::setSwallowTouches
              (*(EventListenerTouchOneByOne **)(this + 0x3c0),param_1);
    return;
  }
  return;
}

