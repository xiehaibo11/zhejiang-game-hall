
/* cocos2d::ui::Widget::getAncensterWidget(cocos2d::Node*) */

long __thiscall cocos2d::ui::Widget::getAncensterWidget(Widget *this,Node *param_1)

{
  long lVar1;
  
  while( true ) {
    if (param_1 == (Node *)0x0) {
                    /* try { // try from 00daaac4 to 00eaaadf has its CatchHandler @ 00daacc0 */
      return 0;
    }
    param_1 = (Node *)(**(code **)(*(long *)param_1 + 0x260))(param_1);
    if (param_1 == (Node *)0x0) break;
    lVar1 = __dynamic_cast(param_1,&Node::typeinfo,&typeinfo,0);
    if (lVar1 != 0) {
      return lVar1;
    }
  }
  return 0;
}

