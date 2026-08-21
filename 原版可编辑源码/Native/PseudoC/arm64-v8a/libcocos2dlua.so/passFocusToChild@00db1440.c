
/* cocos2d::ui::Layout::passFocusToChild(cocos2d::ui::Widget::FocusDirection, cocos2d::ui::Widget*)
    */

Layout * __thiscall
cocos2d::ui::Layout::passFocusToChild(Layout *this,undefined4 param_2,Widget *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  Widget *pWVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 local_78;
  undefined4 local_6c;
  long local_68;
  
                    /* catch() { ... } // from try @ 00db1064 with catch @ 00db1440 */
                    /* catch() { ... } // from try @ 00db0fa8 with catch @ 00db1444 */
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  plVar7 = *(long **)(this + 0x178);
  plVar9 = *(long **)(this + 0x180);
  if (plVar7 == plVar9) goto LAB_00db1574;
  lVar3 = *plVar7;
  if (lVar3 != 0) goto LAB_00db14b0;
  do {
    do {
                    /* try { // try from 00db149c to 00eb14f3 has its CatchHandler @ 00db149c
                       catch() { ... } // from try @ 00db149c with catch @ 00db149c
                       catch() { ... } // from try @ 00db15c4 with catch @ 00db149c */
      plVar7 = plVar7 + 1;
      if (plVar9 == plVar7) goto LAB_00db1574;
      lVar3 = *plVar7;
    } while (lVar3 == 0);
LAB_00db14b0:
    pWVar4 = (Widget *)__dynamic_cast(lVar3,&Node::typeinfo,&Widget::typeinfo,0);
  } while ((pWVar4 == (Widget *)0x0) || (uVar5 = Widget::isFocusEnabled(pWVar4), (uVar5 & 1) == 0));
  uVar6 = Widget::getCurrentFocusedWidget();
  findProperSearchingFunctor(this,param_2,uVar6);
  plVar7 = *(long **)(this + 0x520);
                    /* try { // try from 00db14f4 to 00eb152f has its CatchHandler @ 00db1648 */
  local_78 = uVar6;
  local_6c = param_2;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_009d64e4();
  }
  iVar2 = (**(code **)(*plVar7 + 0x30))(plVar7,&local_6c,&local_78);
  plVar7 = *(long **)(this + 0x178);
  lVar10 = (long)iVar2;
  lVar8 = *(long *)(this + 0x180) - (long)plVar7 >> 3;
  lVar3 = lVar8 - lVar10;
  if (lVar3 == 0 || lVar8 < lVar10) {
LAB_00db15a8:
    if (0 < iVar2) {
                    /* try { // try from 00db15bc to 00eb15c3 has its CatchHandler @ 00db1648 */
                    /* try { // try from 00db15c4 to 00eb1663 has its CatchHandler @ 00db149c */
      lVar3 = *plVar7;
      if (lVar3 != 0) goto LAB_00db15e0;
      do {
        do {
          lVar10 = lVar10 + -1;
          plVar7 = plVar7 + 1;
          if (lVar10 == 0) goto LAB_00db1640;
          lVar3 = *plVar7;
        } while (lVar3 == 0);
LAB_00db15e0:
        pWVar4 = (Widget *)__dynamic_cast(lVar3,&Node::typeinfo,&Widget::typeinfo,0);
      } while (pWVar4 == (Widget *)0x0);
      goto LAB_00db15f4;
    }
LAB_00db1640:
    pWVar4 = (Widget *)0x0;
  }
  else {
    plVar9 = plVar7 + lVar10;
    lVar8 = *plVar9;
    if (lVar8 != 0) goto LAB_00db1554;
    do {
      do {
                    /* try { // try from 00db1540 to 00eb1547 has its CatchHandler @ 00db15f8 */
        lVar3 = lVar3 + -1;
        plVar9 = plVar9 + 1;
        if (lVar3 == 0) goto LAB_00db15a8;
        lVar8 = *plVar9;
      } while (lVar8 == 0);
LAB_00db1554:
      pWVar4 = (Widget *)__dynamic_cast(lVar8,&Node::typeinfo,&Widget::typeinfo,0);
    } while (pWVar4 == (Widget *)0x0);
LAB_00db15f4:
                    /* catch() { ... } // from try @ 00db1540 with catch @ 00db15f8 */
    plVar7 = (long *)__dynamic_cast(pWVar4,&Widget::typeinfo,&typeinfo,0);
    if (plVar7 != (long *)0x0) {
      *(undefined1 *)((long)plVar7 + 0x7b4) = 1;
      this = (Layout *)(**(code **)(*plVar7 + 0x618))(plVar7,param_2,plVar7);
      goto LAB_00db1574;
    }
  }
                    /* catch() { ... } // from try @ 00db14f4 with catch @ 00db1648
                       catch() { ... } // from try @ 00db15bc with catch @ 00db1648 */
  Widget::dispatchFocusEvent((Widget *)this,param_3,pWVar4);
  this = (Layout *)pWVar4;
LAB_00db1574:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}

