
/* cocos2d::ui::ScrollView::update(float) */

void __thiscall cocos2d::ui::ScrollView::update(ScrollView *this,float param_1)

{
  if (this[0x81d] != (ScrollView)0x0) {
    processAutoScrolling(param_1);
    return;
  }
  return;
}

