
/* cocos2d::ui::Layout::getChildWidgetByIndex(long) const */

long __thiscall cocos2d::ui::Layout::getChildWidgetByIndex(Layout *this,long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = *(long **)(this + 0x178);
  lVar2 = *(long *)(this + 0x180) - (long)plVar3 >> 3;
  lVar1 = lVar2 - param_1;
  if (lVar1 == 0 || lVar2 < param_1) {
LAB_00db1114:
                    /* try { // try from 00db1118 to 00eb111f has its CatchHandler @ 00db140c */
    if (param_1 < 1) {
LAB_00db1160:
      lVar2 = 0;
    }
    else {
      lVar1 = *plVar3;
      if (lVar1 != 0) goto LAB_00db1148;
      do {
        do {
          param_1 = param_1 + -1;
          plVar3 = plVar3 + 1;
          if (param_1 == 0) goto LAB_00db1160;
          lVar1 = *plVar3;
        } while (lVar1 == 0);
LAB_00db1148:
        lVar2 = __dynamic_cast(lVar1,&Node::typeinfo,&Widget::typeinfo,0);
      } while (lVar2 == 0);
    }
  }
  else {
    plVar4 = plVar3 + param_1;
    lVar2 = *plVar4;
                    /* try { // try from 00db10e4 to 00eb10eb has its CatchHandler @ 00db1420 */
    if (lVar2 != 0) goto LAB_00db10fc;
    do {
      do {
        lVar1 = lVar1 + -1;
        plVar4 = plVar4 + 1;
        if (lVar1 == 0) goto LAB_00db1114;
        lVar2 = *plVar4;
      } while (lVar2 == 0);
LAB_00db10fc:
      lVar2 = __dynamic_cast(lVar2,&Node::typeinfo,&Widget::typeinfo,0);
    } while (lVar2 == 0);
  }
  return lVar2;
}

