
/* cocos2d::extension::ScrollView::setSwallowTouches(bool) */

void __thiscall cocos2d::extension::ScrollView::setSwallowTouches(ScrollView *this,bool param_1)

{
  if (*(EventListenerTouchOneByOne **)(this + 0x3b8) != (EventListenerTouchOneByOne *)0x0) {
    EventListenerTouchOneByOne::setSwallowTouches
              (*(EventListenerTouchOneByOne **)(this + 0x3b8),param_1);
    return;
  }
  return;
}

