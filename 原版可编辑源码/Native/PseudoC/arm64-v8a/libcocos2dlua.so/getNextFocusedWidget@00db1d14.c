
/* cocos2d::ui::Layout::getNextFocusedWidget(cocos2d::ui::Widget::FocusDirection,
   cocos2d::ui::Widget*) */

Widget * __thiscall
cocos2d::ui::Layout::getNextFocusedWidget(Layout *this,uint param_2,Widget *param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  Widget *pWVar7;
  Widget *pWVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  
  do {
    while( true ) {
      pWVar7 = param_3;
      plVar6 = *(long **)(this + 0x178);
      plVar1 = *(long **)(this + 0x180);
      plVar10 = plVar1;
      plVar11 = plVar6;
      if (plVar6 != plVar1) {
        pWVar8 = (Widget *)*plVar6;
        plVar9 = plVar6;
        while ((plVar10 = plVar9, plVar11 = plVar9, pWVar8 != pWVar7 &&
               (plVar9 = plVar9 + 1, plVar10 = plVar1, plVar11 = plVar1, plVar1 != plVar9))) {
          pWVar8 = (Widget *)*plVar9;
        }
      }
      lVar5 = 0;
      if (plVar10 != plVar1) {
        lVar5 = ((long)plVar11 - (long)plVar6 >> 3) + 1;
      }
      lVar12 = (long)plVar1 - (long)plVar6 >> 3;
      if (lVar12 <= lVar5) break;
      plVar1 = plVar6 + lVar5;
      lVar3 = *plVar1;
      while( true ) {
        if ((lVar3 != 0) &&
           (param_3 = (Widget *)__dynamic_cast(lVar3,&Node::typeinfo,&Widget::typeinfo,0),
           param_3 != (Widget *)0x0)) goto LAB_00db1ed0;
        lVar12 = lVar12 + -1;
        plVar1 = plVar1 + 1;
        if (lVar5 == lVar12) break;
        lVar3 = *plVar1;
      }
      if (lVar5 < 1) {
        return pWVar7;
      }
      while ((*plVar6 == 0 ||
             (param_3 = (Widget *)__dynamic_cast(*plVar6,&Node::typeinfo,&Widget::typeinfo,0),
             param_3 == (Widget *)0x0))) {
        lVar5 = lVar5 + -1;
        plVar6 = plVar6 + 1;
        if (lVar5 == 0) {
          return pWVar7;
        }
      }
LAB_00db1ed0:
      uVar4 = Widget::isFocusEnabled(param_3);
      if ((uVar4 & 1) != 0) goto LAB_00db204c;
    }
    if (this[0x7b2] == (Layout)0x0) {
      uVar4 = isLastWidgetInContainer(this,pWVar7,param_2);
      if ((uVar4 & 1) == 0) goto LAB_00db1fbc;
      lVar5 = (**(code **)(*(long *)this + 0x260))(this);
      if (lVar5 == 0) goto LAB_00db1fe4;
      goto LAB_00db1f74;
    }
    while( true ) {
      if (plVar6 == plVar1) goto LAB_00db1fe4;
      if (((*plVar6 != 0) &&
          (pWVar8 = (Widget *)__dynamic_cast(*plVar6,&Node::typeinfo,&Widget::typeinfo,0),
          pWVar8 != (Widget *)0x0)) && (uVar4 = Widget::isFocusEnabled(pWVar8), (uVar4 & 1) != 0))
      break;
      plVar6 = plVar6 + 1;
    }
    plVar6 = *(long **)(this + 0x178);
    if (*(long *)(this + 0x180) - (long)plVar6 < 1) {
LAB_00db1ee0:
      param_3 = (Widget *)0x0;
    }
    else {
      lVar5 = *(long *)(this + 0x180) - (long)plVar6 >> 3;
      lVar12 = *plVar6;
      if (lVar12 != 0) goto LAB_00db1e7c;
      do {
        do {
          lVar5 = lVar5 + -1;
          plVar6 = plVar6 + 1;
          if (lVar5 == 0) goto LAB_00db1ee0;
          lVar12 = *plVar6;
        } while (lVar12 == 0);
LAB_00db1e7c:
        param_3 = (Widget *)__dynamic_cast(lVar12,&Node::typeinfo,&Widget::typeinfo,0);
      } while (param_3 == (Widget *)0x0);
    }
    uVar4 = Widget::isFocusEnabled(param_3);
  } while ((uVar4 & 1) == 0);
  if (param_3 != (Widget *)0x0) {
LAB_00db204c:
    plVar6 = (long *)__dynamic_cast(param_3,&Widget::typeinfo,&typeinfo,0);
    if (plVar6 != (long *)0x0) {
      *(undefined1 *)((long)plVar6 + 0x7b4) = 1;
                    /* WARNING: Could not recover jumptable at 0x00db2088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pWVar7 = (Widget *)(**(code **)(*plVar6 + 0x618))(plVar6,param_2,plVar6);
      return pWVar7;
    }
  }
  Widget::dispatchFocusEvent((Widget *)this,pWVar7,param_3);
  return param_3;
LAB_00db1f74:
  do {
    plVar6 = (long *)__dynamic_cast(lVar5,&Node::typeinfo,&typeinfo,0);
    if (plVar6 == (long *)0x0) break;
    if (*(char *)((long)plVar6 + 0x7b2) != '\0') {
      iVar2 = (**(code **)(*plVar6 + 0x698))(plVar6);
      if (iVar2 == 1) {
        if ((param_2 | 1) == 3) {
LAB_00db1fbc:
          pWVar7 = (Widget *)Widget::findNextFocusedWidget((Widget *)this,param_2,this);
          return pWVar7;
        }
      }
      else {
        if (iVar2 != 2) break;
        if (param_2 < 2) goto LAB_00db1fbc;
      }
    }
    lVar5 = (**(code **)(*plVar6 + 0x260))(plVar6);
  } while (lVar5 != 0);
LAB_00db1fe4:
  if ((pWVar7 == (Widget *)0x0) ||
     (lVar5 = __dynamic_cast(pWVar7,&Widget::typeinfo,&typeinfo,0), lVar5 == 0)) {
    pWVar7 = Widget::_focusedWidget;
  }
                    /* try { // try from 00db2034 to 00eb20c3 has its CatchHandler @ 00db2034
                       catch() { ... } // from try @ 00db2034 with catch @ 00db2034
                       catch() { ... } // from try @ 00db21d4 with catch @ 00db2034 */
  return pWVar7;
}

