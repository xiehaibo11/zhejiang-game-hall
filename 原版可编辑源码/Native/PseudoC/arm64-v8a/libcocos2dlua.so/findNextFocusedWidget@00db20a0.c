
/* cocos2d::ui::Layout::findNextFocusedWidget(cocos2d::ui::Widget::FocusDirection,
   cocos2d::ui::Widget*) */

Layout * __thiscall
cocos2d::ui::Layout::findNextFocusedWidget(Layout *this,uint param_2,Layout *param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  Layout *pLVar6;
  undefined8 uVar7;
  
                    /* try { // try from 00db20c4 to 00eb21d3 has its CatchHandler @ 00db21e0 */
  if ((this[0x7b4] == (Layout)0x0) && (uVar2 = Widget::isFocused((Widget *)this), (uVar2 & 1) == 0))
  {
    uVar2 = Widget::isFocused((Widget *)param_3);
    if (((uVar2 & 1) != 0) ||
       ((param_3 != (Layout *)0x0 &&
        (lVar3 = __dynamic_cast(param_3,&Widget::typeinfo,&typeinfo,0), lVar3 != 0)))) {
      if (*(int *)(this + 0x5a8) == 1) {
        if (param_2 < 2) {
          uVar2 = isLastWidgetInContainer(this,this,param_2);
          if ((uVar2 & 1) == 0) {
LAB_00db23c0:
            pLVar6 = (Layout *)Widget::findNextFocusedWidget((Widget *)this,param_2,this);
            return pLVar6;
          }
          lVar3 = (**(code **)(*(long *)param_3 + 0x260))(param_3);
          if (lVar3 != 0) {
            do {
              plVar4 = (long *)__dynamic_cast(lVar3,&Node::typeinfo,&typeinfo,0);
              if (plVar4 == (long *)0x0) {
                return param_3;
              }
              if (*(char *)((long)plVar4 + 0x7b2) != '\0') {
                iVar1 = (**(code **)(*plVar4 + 0x698))(plVar4);
                if (iVar1 != 1) {
                  if (iVar1 != 2) {
                    return param_3;
                  }
                  goto LAB_00db23c0;
                }
                if ((param_2 | 1) == 3) goto LAB_00db23c0;
              }
              lVar3 = (**(code **)(*plVar4 + 0x260))(plVar4);
            } while (lVar3 != 0);
          }
        }
        else {
          if (param_2 == 2) {
            uVar7 = 2;
LAB_00db239c:
            pLVar6 = (Layout *)getPreviousFocusedWidget(this,uVar7,param_3);
            return pLVar6;
          }
          if (param_2 == 3) {
            uVar7 = 3;
            goto LAB_00db2374;
          }
        }
      }
      else {
                    /* try { // try from 00db21d4 to 00eb21fb has its CatchHandler @ 00db2034 */
        if (*(int *)(this + 0x5a8) == 2) {
                    /* catch() { ... } // from try @ 00db20c4 with catch @ 00db21e0 */
          if (param_2 - 2 < 2) {
            uVar2 = isLastWidgetInContainer(this,this,param_2);
            if ((uVar2 & 1) == 0) goto LAB_00db23c0;
                    /* catch() { ... } // from try @ 00db2560 with catch @ 00db2254 */
            lVar3 = (**(code **)(*(long *)param_3 + 0x260))(param_3);
            if (lVar3 != 0) {
              do {
                    /* try { // try from 00db2294 to 00eb255f has its CatchHandler @ 00db256c */
                plVar4 = (long *)__dynamic_cast(lVar3,&Node::typeinfo,&typeinfo,0);
                if (plVar4 == (long *)0x0) {
                  return param_3;
                }
                if ((*(char *)((long)plVar4 + 0x7b2) != '\0') &&
                   (iVar1 = (**(code **)(*plVar4 + 0x698))(plVar4), iVar1 != 2)) {
                  if (iVar1 != 1) {
                    return param_3;
                  }
                  if ((param_2 | 1) == 3) goto LAB_00db23c0;
                }
                lVar3 = (**(code **)(*plVar4 + 0x260))(plVar4);
              } while (lVar3 != 0);
            }
          }
          else {
            if (param_2 == 1) {
              uVar7 = 1;
LAB_00db2374:
              pLVar6 = (Layout *)getNextFocusedWidget(this,uVar7,param_3);
              return pLVar6;
            }
            if (param_2 == 0) {
              uVar7 = 0;
              goto LAB_00db239c;
            }
          }
        }
      }
    }
  }
  else {
    lVar3 = (**(code **)(*(long *)this + 0x260))(this);
    if (lVar3 == 0) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = (long *)__dynamic_cast(lVar3,&Node::typeinfo,&typeinfo,0);
    }
    this[0x7b4] = (Layout)0x0;
    pLVar6 = this;
    plVar5 = plVar4;
    if (((this[0x7b3] == (Layout)0x0) ||
        ((param_3 = (Layout *)passFocusToChild(this,param_2,param_3), param_3 != (Layout *)0x0 &&
         (plVar5 = (long *)__dynamic_cast(param_3,&Widget::typeinfo,&typeinfo,0), pLVar6 = param_3,
         plVar4 != (long *)0x0)))) && (param_3 = pLVar6, plVar5 != (long *)0x0)) {
      *(undefined1 *)((long)plVar4 + 0x7b4) = 1;
                    /* WARNING: Could not recover jumptable at 0x00db2190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pLVar6 = (Layout *)(**(code **)(*plVar4 + 0x618))(plVar4,param_2,this);
      return pLVar6;
    }
  }
  return param_3;
}

