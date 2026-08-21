
/* cocos2d::ui::Widget::setScaleX(float) */

void __thiscall cocos2d::ui::Widget::setScaleX(Widget *this,float param_1)

{
                    /* try { // try from 00daca9c to 00eacaa3 has its CatchHandler @ 00dacb98 */
                    /* try { // try from 00dacaa4 to 00eacac7 has its CatchHandler @ 00daca34 */
  if (this[0x3e0] != (Widget)0x0) {
    param_1 = -param_1;
  }
  Node::setScaleX((Node *)this,param_1);
  return;
}

