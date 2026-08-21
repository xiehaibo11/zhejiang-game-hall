
/* cocos2d::ui::Widget::isAncestorsEnabled() */

undefined8 __thiscall cocos2d::ui::Widget::isAncestorsEnabled(Widget *this)

{
  Widget *pWVar1;
  
  do {
    if ((this == (Widget *)0x0) ||
       (this = (Widget *)(**(code **)(*(long *)this + 0x260))(this), this == (Widget *)0x0)) {
      return 1;
    }
                    /* try { // try from 00daab60 to 00eaab63 has its CatchHandler @ 00daacc4 */
                    /* try { // try from 00daab64 to 00eaacdb has its CatchHandler @ 00daaa30 */
    pWVar1 = (Widget *)__dynamic_cast(this,&Node::typeinfo,&typeinfo,0);
  } while ((pWVar1 == (Widget *)0x0) || (this = pWVar1, pWVar1[0x382] != (Widget)0x0));
  return 0;
}

