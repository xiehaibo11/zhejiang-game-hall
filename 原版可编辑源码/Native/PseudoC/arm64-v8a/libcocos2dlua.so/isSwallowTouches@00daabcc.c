
/* cocos2d::ui::Widget::isSwallowTouches() const */

void __thiscall cocos2d::ui::Widget::isSwallowTouches(Widget *this)

{
  if (*(EventListenerTouchOneByOne **)(this + 0x3c0) != (EventListenerTouchOneByOne *)0x0) {
    EventListenerTouchOneByOne::isSwallowTouches(*(EventListenerTouchOneByOne **)(this + 0x3c0));
    return;
  }
  return;
}

