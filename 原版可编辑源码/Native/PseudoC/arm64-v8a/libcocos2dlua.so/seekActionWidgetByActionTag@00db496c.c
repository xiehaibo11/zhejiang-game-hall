
/* cocos2d::ui::Helper::seekActionWidgetByActionTag(cocos2d::ui::Widget*, int) */

Widget * cocos2d::ui::Helper::seekActionWidgetByActionTag(Widget *param_1,int param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  Widget *pWVar4;
  long *plVar5;
  
  if ((param_1 != (Widget *)0x0) && (iVar1 = Widget::getActionTag(param_1), iVar1 != param_2)) {
                    /* try { // try from 00db49a4 to 00eb49ab has its CatchHandler @ 00db4aec */
    plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x240))(param_1);
    plVar5 = (long *)*plVar2;
    plVar2 = (long *)plVar2[1];
    if (plVar5 == plVar2) {
LAB_00db4a0c:
                    /* try { // try from 00db4a0c to 00eb4b43 has its CatchHandler @ 00db47ac */
      param_1 = (Widget *)0x0;
    }
    else {
      lVar3 = *plVar5;
      if (lVar3 != 0) goto LAB_00db49e4;
      do {
        do {
          plVar5 = plVar5 + 1;
          if (plVar2 == plVar5) goto LAB_00db4a0c;
          lVar3 = *plVar5;
        } while (lVar3 == 0);
LAB_00db49e4:
        pWVar4 = (Widget *)__dynamic_cast(lVar3,&Node::typeinfo,&Widget::typeinfo,0);
      } while ((pWVar4 == (Widget *)0x0) ||
              (param_1 = (Widget *)seekActionWidgetByActionTag(pWVar4,param_2),
              param_1 == (Widget *)0x0));
    }
  }
  return param_1;
}

