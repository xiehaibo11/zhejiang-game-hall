
/* cocos2d::ui::Widget::setScaleY(float) */

void __thiscall cocos2d::ui::Widget::setScaleY(Widget *this,float param_1)

{
  if (this[0x3e1] != (Widget)0x0) {
    param_1 = -param_1;
  }
  Node::setScaleY((Node *)this,param_1);
  return;
}

