
/* cocos2d::ui::Layout::getPreviousFocusedWidget(cocos2d::ui::Widget::FocusDirection,
   cocos2d::ui::Widget*) */

Widget * __thiscall
cocos2d::ui::Layout::getPreviousFocusedWidget(Layout *this,uint param_2,Widget *param_3)

{
  long *plVar1;
  int iVar2;
  Widget *this_00;
  ulong uVar3;
  long *plVar4;
  Widget *pWVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  do {
    while( true ) {
      pWVar5 = param_3;
      plVar4 = *(long **)(this + 0x178);
      plVar10 = *(long **)(this + 0x180);
      if ((long)plVar10 - (long)plVar4 != 0) break;
LAB_00db17c4:
      if (this[0x7b2] == (Layout)0x0) {
        uVar3 = isLastWidgetInContainer(this,pWVar5,param_2);
        if ((uVar3 & 1) == 0) goto LAB_00db19d8;
        lVar8 = (**(code **)(*(long *)this + 0x260))(this);
        if (lVar8 == 0) goto LAB_00db1a00;
        goto LAB_00db1990;
      }
      while( true ) {
        if (plVar10 == plVar4) goto LAB_00db1a00;
        if (((*plVar4 != 0) &&
            (this_00 = (Widget *)__dynamic_cast(*plVar4,&Node::typeinfo,&Widget::typeinfo,0),
            this_00 != (Widget *)0x0)) &&
           (uVar3 = Widget::isFocusEnabled(this_00), (uVar3 & 1) != 0)) break;
        plVar4 = plVar4 + 1;
      }
      plVar4 = *(long **)(this + 0x178);
      lVar8 = (*(long *)(this + 0x180) - (long)plVar4 >> 3) + -1;
      if ((plVar4[lVar8] == 0) ||
         (param_3 = (Widget *)__dynamic_cast(plVar4[lVar8],&Node::typeinfo,&Widget::typeinfo,0),
         param_3 == (Widget *)0x0)) {
        if (0 < lVar8) {
          do {
            if ((*plVar4 != 0) &&
               (param_3 = (Widget *)__dynamic_cast(*plVar4,&Node::typeinfo,&Widget::typeinfo,0),
               param_3 != (Widget *)0x0)) goto LAB_00db18bc;
            lVar8 = lVar8 + -1;
            plVar4 = plVar4 + 1;
          } while (lVar8 != 0);
        }
        param_3 = (Widget *)0x0;
      }
LAB_00db18bc:
      uVar3 = Widget::isFocusEnabled(param_3);
      if ((uVar3 & 1) != 0) goto LAB_00db18dc;
    }
    plVar7 = plVar4;
    if ((Widget *)*plVar4 != pWVar5) {
      do {
        if (plVar10 + -1 == plVar7) goto LAB_00db17c4;
        plVar1 = plVar7 + 1;
        plVar7 = plVar7 + 1;
      } while ((Widget *)*plVar1 != pWVar5);
    }
    lVar8 = (long)plVar7 - (long)plVar4 >> 3;
    if (plVar7 == plVar10) {
      lVar8 = -1;
    }
    lVar9 = lVar8 + -1;
    if (lVar8 < 1) goto LAB_00db17c4;
    lVar6 = (long)plVar10 - (long)plVar4 >> 3;
    if (lVar6 < lVar8) {
LAB_00db186c:
      if (lVar9 < 1) {
        param_3 = (Widget *)0x0;
      }
      else {
        do {
          if ((*plVar4 != 0) &&
             (param_3 = (Widget *)__dynamic_cast(*plVar4,&Node::typeinfo,&Widget::typeinfo,0),
             param_3 != (Widget *)0x0)) goto LAB_00db18d0;
          lVar9 = lVar9 + -1;
          plVar4 = plVar4 + 1;
        } while (lVar9 != 0);
        param_3 = (Widget *)0x0;
      }
    }
    else {
      lVar6 = (lVar6 - lVar8) + 1;
      plVar10 = plVar4 + lVar8 + -1;
      lVar8 = *plVar10;
      if (lVar8 != 0) goto LAB_00db17ac;
      do {
        do {
          lVar6 = lVar6 + -1;
          plVar10 = plVar10 + 1;
          if (lVar6 == 0) goto LAB_00db186c;
          lVar8 = *plVar10;
        } while (lVar8 == 0);
LAB_00db17ac:
        param_3 = (Widget *)__dynamic_cast(lVar8,&Node::typeinfo,&Widget::typeinfo,0);
      } while (param_3 == (Widget *)0x0);
    }
LAB_00db18d0:
    uVar3 = Widget::isFocusEnabled(param_3);
  } while ((uVar3 & 1) == 0);
LAB_00db18dc:
  if ((param_3 != (Widget *)0x0) &&
     (plVar4 = (long *)__dynamic_cast(param_3,&Widget::typeinfo,&typeinfo,0), plVar4 != (long *)0x0)
     ) {
    *(undefined1 *)((long)plVar4 + 0x7b4) = 1;
                    /* WARNING: Could not recover jumptable at 0x00db1930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pWVar5 = (Widget *)(**(code **)(*plVar4 + 0x618))(plVar4,param_2,plVar4);
    return pWVar5;
  }
  Widget::dispatchFocusEvent((Widget *)this,pWVar5,param_3);
  return param_3;
LAB_00db1990:
  do {
    plVar4 = (long *)__dynamic_cast(lVar8,&Node::typeinfo,&typeinfo,0);
    if (plVar4 == (long *)0x0) break;
    if (*(char *)((long)plVar4 + 0x7b2) != '\0') {
      iVar2 = (**(code **)(*plVar4 + 0x698))(plVar4);
      if (iVar2 == 1) {
        if ((param_2 | 1) == 3) {
LAB_00db19d8:
          pWVar5 = (Widget *)Widget::findNextFocusedWidget((Widget *)this,param_2,this);
          return pWVar5;
        }
      }
      else {
        if (iVar2 != 2) break;
        if (param_2 < 2) goto LAB_00db19d8;
      }
    }
    lVar8 = (**(code **)(*plVar4 + 0x260))(plVar4);
  } while (lVar8 != 0);
LAB_00db1a00:
  if ((pWVar5 == (Widget *)0x0) ||
     (lVar8 = __dynamic_cast(pWVar5,&Widget::typeinfo,&typeinfo,0), lVar8 == 0)) {
    pWVar5 = Widget::_focusedWidget;
  }
  return pWVar5;
}

