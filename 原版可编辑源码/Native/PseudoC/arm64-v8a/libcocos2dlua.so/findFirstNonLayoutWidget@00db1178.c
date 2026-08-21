
/* cocos2d::ui::Layout::findFirstNonLayoutWidget() */

long __thiscall cocos2d::ui::Layout::findFirstNonLayoutWidget(Layout *this)

{
  long *plVar1;
  Layout *this_00;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x178);
  plVar1 = *(long **)(this + 0x180);
  if (plVar3 == plVar1) {
LAB_00db120c:
    lVar2 = 0;
  }
  else {
    lVar2 = *plVar3;
    if (lVar2 != 0) goto LAB_00db11d8;
    do {
      while( true ) {
        do {
                    /* try { // try from 00db11c4 to 00eb11cb has its CatchHandler @ 00db13fc */
          plVar3 = plVar3 + 1;
          if (plVar1 == plVar3) goto LAB_00db120c;
          lVar2 = *plVar3;
                    /* try { // try from 00db11d4 to 00eb122b has its CatchHandler @ 00db1408 */
        } while (lVar2 == 0);
LAB_00db11d8:
        this_00 = (Layout *)__dynamic_cast(lVar2,&Node::typeinfo,&typeinfo,0);
        if (this_00 != (Layout *)0x0) break;
        lVar2 = __dynamic_cast(lVar2,&Node::typeinfo,&Widget::typeinfo,0);
        if (lVar2 != 0) {
          return lVar2;
        }
      }
      lVar2 = findFirstNonLayoutWidget(this_00);
    } while (lVar2 == 0);
  }
  return lVar2;
}

