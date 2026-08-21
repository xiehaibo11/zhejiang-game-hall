
/* fairygui::GList::selectReverse() */

void __thiscall fairygui::GList::selectReverse(GList *this)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  GController *pGVar6;
  GButton *pGVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  
  if (*(int *)(this + 0x358) != 0) {
    doRefreshVirtualList(this);
    lVar3 = cocos2d::Director::getInstance();
    cocos2d::Scheduler::unschedule
              (*(_func_void_float **)(lVar3 + 0xa0),(Ref *)__selector_doRefreshVirtualList);
  }
  if (this[0x338] == (GList)0x0) {
    uVar9 = *(long *)(this + 0x1e8) - (long)*(long **)(this + 0x1e0);
    if ((int)(uVar9 >> 3) < 1) {
      return;
    }
    lVar3 = 0;
    iVar8 = -1;
    lVar5 = **(long **)(this + 0x1e0);
    while( true ) {
      if (((lVar5 != 0) &&
          (pGVar7 = (GButton *)__dynamic_cast(lVar5,&GObject::typeinfo,&GButton::typeinfo,0),
          pGVar7 != (GButton *)0x0)) &&
         (GButton::setSelected(pGVar7,pGVar7[0x33c] == (GButton)0x0), pGVar7[0x33c] != (GButton)0x0)
         ) {
        iVar8 = (int)lVar3;
      }
      if ((uVar9 >> 3 & 0xffffffff) - 1 == lVar3) break;
      lVar3 = lVar3 + 1;
      lVar5 = *(long *)(*(long *)(this + 0x1e0) + lVar3 * 8);
    }
  }
  else {
    uVar1 = *(uint *)(this + 0x340);
    if ((int)uVar1 < 1) {
      return;
    }
    lVar3 = 0;
    uVar9 = 0;
    iVar8 = -1;
    do {
      lVar10 = *(long *)(this + 0x368);
      lVar5 = lVar10 + lVar3;
      pGVar7 = *(GButton **)(lVar5 + 8);
      if (((pGVar7 != (GButton *)0x0) &&
          (lVar4 = __dynamic_cast(pGVar7,&GObject::typeinfo,&GButton::typeinfo,0), lVar4 != 0)) &&
         (GButton::setSelected(pGVar7,pGVar7[0x33c] == (GButton)0x0),
         *(char *)(*(long *)(lVar10 + lVar3 + 8) + 0x33c) != '\0')) {
        iVar8 = (int)uVar9;
      }
      uVar9 = uVar9 + 1;
      lVar3 = lVar3 + 0x18;
      *(byte *)(lVar5 + 0x14) = *(byte *)(lVar5 + 0x14) ^ 1;
    } while (uVar1 != uVar9);
  }
  if (((iVar8 != -1) && (pGVar6 = *(GController **)(this + 800), pGVar6 != (GController *)0x0)) &&
     ((pGVar6[0x60] == (GController)0x0 &&
      (iVar2 = GController::getPageCount(pGVar6), iVar8 < iVar2)))) {
    pGVar6 = *(GController **)(this + 800);
    *(undefined8 *)(this + 800) = 0;
    GController::setSelectedIndex(pGVar6,iVar8,true);
    *(GController **)(this + 800) = pGVar6;
  }
                    /* try { // try from 00a79234 to 00b79287 has its CatchHandler @ 00a79234
                       catch() { ... } // from try @ 00a79234 with catch @ 00a79234
                       catch() { ... } // from try @ 00a792a4 with catch @ 00a79234 */
  return;
}

