
/* cocos2d::ui::Widget::getScaleX() const */

float __thiscall cocos2d::ui::Widget::getScaleX(Widget *this)

{
  float fVar1;
  
  fVar1 = (float)Node::getScaleX((Node *)this);
  if (this[0x3e0] != (Widget)0x0) {
    fVar1 = -fVar1;
  }
  return fVar1;
}

