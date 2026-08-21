
/* fairygui::GList::selectAll() */

void __thiscall fairygui::GList::selectAll(GList *this)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  GController *pGVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  GButton *pGVar10;
  ulong uVar11;
  
  if (*(int *)(this + 0x358) != 0) {
    doRefreshVirtualList(this);
    lVar4 = cocos2d::Director::getInstance();
    cocos2d::Scheduler::unschedule
              (*(_func_void_float **)(lVar4 + 0xa0),(Ref *)__selector_doRefreshVirtualList);
  }
  if (this[0x338] == (GList)0x0) {
    uVar11 = *(long *)(this + 0x1e8) - (long)*(long **)(this + 0x1e0);
    if ((int)(uVar11 >> 3) < 1) {
      return;
    }
    uVar8 = 0;
    uVar9 = 0xffffffff;
    lVar4 = **(long **)(this + 0x1e0);
    while( true ) {
      if (((lVar4 != 0) &&
          (pGVar10 = (GButton *)__dynamic_cast(lVar4,&GObject::typeinfo,&GButton::typeinfo,0),
          pGVar10 != (GButton *)0x0)) && (pGVar10[0x33c] == (GButton)0x0)) {
        GButton::setSelected(pGVar10,true);
        uVar9 = uVar8 & 0xffffffff;
      }
      iVar7 = (int)uVar9;
      if ((uVar11 >> 3 & 0xffffffff) - 1 == uVar8) break;
      uVar8 = uVar8 + 1;
      lVar4 = *(long *)(*(long *)(this + 0x1e0) + uVar8 * 8);
    }
  }
  else {
    uVar2 = *(uint *)(this + 0x340);
    if ((int)uVar2 < 1) {
      return;
    }
    lVar4 = 0;
    uVar11 = 0;
    uVar8 = 0xffffffff;
    do {
      lVar1 = *(long *)(this + 0x368) + lVar4;
      pGVar10 = *(GButton **)(lVar1 + 8);
      if (((pGVar10 != (GButton *)0x0) &&
          (lVar5 = __dynamic_cast(pGVar10,&GObject::typeinfo,&GButton::typeinfo,0), lVar5 != 0)) &&
         (pGVar10[0x33c] == (GButton)0x0)) {
        GButton::setSelected(pGVar10,true);
        uVar8 = uVar11 & 0xffffffff;
      }
      iVar7 = (int)uVar8;
      uVar11 = uVar11 + 1;
      lVar4 = lVar4 + 0x18;
      *(undefined1 *)(lVar1 + 0x14) = 1;
    } while (uVar2 != uVar11);
  }
  if (((iVar7 != -1) && (pGVar6 = *(GController **)(this + 800), pGVar6 != (GController *)0x0)) &&
     ((pGVar6[0x60] == (GController)0x0 &&
      (iVar3 = GController::getPageCount(pGVar6), iVar7 < iVar3)))) {
    pGVar6 = *(GController **)(this + 800);
    *(undefined8 *)(this + 800) = 0;
    GController::setSelectedIndex(pGVar6,iVar7,true);
    *(GController **)(this + 800) = pGVar6;
  }
  return;
}

