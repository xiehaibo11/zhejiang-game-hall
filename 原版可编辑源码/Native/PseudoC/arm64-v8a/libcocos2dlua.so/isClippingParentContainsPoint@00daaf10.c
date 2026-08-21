
/* cocos2d::ui::Widget::isClippingParentContainsPoint(cocos2d::Vec2 const&) */

undefined8 __thiscall cocos2d::ui::Widget::isClippingParentContainsPoint(Widget *this,Vec2 *param_1)

{
  long *plVar1;
  Widget *pWVar2;
  ulong uVar3;
  long lVar4;
  
  do {
    this[0x386] = (Widget)0x0;
                    /* try { // try from 00daaf4c to 00eab0b7 has its CatchHandler @ 00daaf4c
                       catch() { ... } // from try @ 00daaf4c with catch @ 00daaf4c
                       catch() { ... } // from try @ 00dab0d0 with catch @ 00daaf4c */
    plVar1 = (long *)(**(code **)(*(long *)this + 0x260))(this);
    while( true ) {
      if (plVar1 == (long *)0x0) {
        return 1;
      }
      pWVar2 = (Widget *)__dynamic_cast(plVar1,&Node::typeinfo,&Layout::typeinfo,0);
      if ((pWVar2 != (Widget *)0x0) &&
         (uVar3 = (**(code **)(*(long *)pWVar2 + 0x688))(), (uVar3 & 1) != 0)) break;
      plVar1 = (long *)(**(code **)(*plVar1 + 0x260))(plVar1);
    }
    this[0x386] = (Widget)0x1;
    lVar4 = Camera::getVisitingCamera();
    if (lVar4 == 0) {
      lVar4 = *(long *)(this + 0x3b8);
    }
    uVar3 = (**(code **)(*(long *)pWVar2 + 0x5d0))(pWVar2,param_1,lVar4,0);
    this = pWVar2;
  } while ((uVar3 & 1) != 0);
  return 0;
}

