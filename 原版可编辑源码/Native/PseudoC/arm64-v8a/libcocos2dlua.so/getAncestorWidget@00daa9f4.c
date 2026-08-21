
/* cocos2d::ui::Widget::getAncestorWidget(cocos2d::Node*) */

long __thiscall cocos2d::ui::Widget::getAncestorWidget(Widget *this,Node *param_1)

{
  long lVar1;
  
  while( true ) {
    if (param_1 == (Node *)0x0) {
      return 0;
    }
    param_1 = (Node *)(**(code **)(*(long *)param_1 + 0x260))(param_1);
    if (param_1 == (Node *)0x0) break;
                    /* try { // try from 00daaa30 to 00eaaac3 has its CatchHandler @ 00daaa30
                       catch(type#1 @ 00000000) { ... } // from try @ 00daaa30 with catch @ 00daaa30
                       catch(type#1 @ 00000000) { ... } // from try @ 00daab64 with catch @ 00daaa30
                       catch(type#1 @ 00000000) { ... } // from try @ 00daace0 with catch @ 00daaa30
                        */
    lVar1 = __dynamic_cast(param_1,&Node::typeinfo,&typeinfo,0);
    if (lVar1 != 0) {
      return lVar1;
    }
  }
  return 0;
}

