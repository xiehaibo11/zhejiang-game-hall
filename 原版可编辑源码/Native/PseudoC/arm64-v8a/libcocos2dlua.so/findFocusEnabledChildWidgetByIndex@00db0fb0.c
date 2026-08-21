
/* cocos2d::ui::Layout::findFocusEnabledChildWidgetByIndex(long) */

Widget * __thiscall
cocos2d::ui::Layout::findFocusEnabledChildWidgetByIndex(Layout *this,long param_1)

{
  long *plVar1;
  long lVar2;
  Widget *this_00;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  do {
    plVar1 = *(long **)(this + 0x178);
    lVar4 = *(long *)(this + 0x180) - (long)plVar1 >> 3;
    if (param_1 < lVar4) {
      plVar5 = plVar1 + param_1;
                    /* try { // try from 00db0ff8 to 00eb100f has its CatchHandler @ 00db1410 */
      lVar2 = *plVar5;
      if (lVar2 != 0) goto LAB_00db1018;
      do {
        do {
          lVar4 = lVar4 + -1;
          plVar5 = plVar5 + 1;
          if (param_1 == lVar4) goto LAB_00db1030;
          lVar2 = *plVar5;
        } while (lVar2 == 0);
LAB_00db1018:
        this_00 = (Widget *)__dynamic_cast(lVar2,&Node::typeinfo,&Widget::typeinfo,0);
      } while (this_00 == (Widget *)0x0);
    }
    else {
LAB_00db1030:
      if (param_1 < 1) {
        return (Widget *)0x0;
      }
      lVar4 = 0;
      lVar2 = *plVar1;
      if (lVar2 != 0) goto LAB_00db1058;
      do {
        do {
                    /* try { // try from 00db1044 to 00eb1057 has its CatchHandler @ 00db1434 */
          lVar4 = lVar4 + 1;
          if (param_1 == lVar4) {
            return (Widget *)0x0;
          }
          lVar2 = plVar1[lVar4];
        } while (lVar2 == 0);
LAB_00db1058:
                    /* try { // try from 00db1064 to 00eb107b has its CatchHandler @ 00db1440 */
        this_00 = (Widget *)__dynamic_cast(lVar2,&Node::typeinfo,&Widget::typeinfo,0);
      } while (this_00 == (Widget *)0x0);
    }
    uVar3 = Widget::isFocusEnabled(this_00);
    param_1 = param_1 + 1;
    if ((uVar3 & 1) != 0) {
      return this_00;
    }
  } while( true );
}

