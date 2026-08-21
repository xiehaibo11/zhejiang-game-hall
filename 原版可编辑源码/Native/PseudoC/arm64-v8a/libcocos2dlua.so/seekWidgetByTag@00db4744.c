
/* cocos2d::ui::Helper::seekWidgetByTag(cocos2d::ui::Widget*, int) */

Widget * cocos2d::ui::Helper::seekWidgetByTag(Widget *param_1,int param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  Widget *pWVar4;
  long lVar5;
  long lVar6;
  
  if ((param_1 != (Widget *)0x0) &&
     (iVar1 = (**(code **)(*(long *)param_1 + 0x2b8))(param_1), iVar1 != param_2)) {
    plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x240))(param_1);
    lVar5 = plVar2[1] - *plVar2;
    if (0 < lVar5) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00db4804 with catch @ 00db47ac
                       catch(type#1 @ 00000000) { ... } // from try @ 00db4a0c with catch @ 00db47ac
                        */
      lVar6 = 0;
      lVar3 = *(long *)*plVar2;
      while( true ) {
        if (((lVar3 != 0) &&
            (pWVar4 = (Widget *)__dynamic_cast(lVar3,&Node::typeinfo,&Widget::typeinfo,0),
            pWVar4 != (Widget *)0x0)) &&
           (pWVar4 = (Widget *)seekWidgetByTag(pWVar4,param_2), pWVar4 != (Widget *)0x0)) {
          return pWVar4;
        }
        lVar6 = lVar6 + 1;
        if (lVar5 >> 3 <= lVar6) break;
        lVar3 = *(long *)(*plVar2 + lVar6 * 8);
      }
    }
    param_1 = (Widget *)0x0;
  }
                    /* try { // try from 00db4804 to 00eb49a3 has its CatchHandler @ 00db47ac */
  return param_1;
}

