
/* fairygui::GList::addSelection(int, bool) */

void __thiscall fairygui::GList::addSelection(GList *this,int param_1,bool param_2)

{
  int iVar1;
  long lVar2;
  GButton *this_00;
  GController *pGVar3;
  long lVar4;
  
  iVar1 = *(int *)(this + 0x304);
  if (iVar1 != 3) {
    if (*(int *)(this + 0x358) != 0) {
      doRefreshVirtualList(this);
      lVar2 = cocos2d::Director::getInstance();
      cocos2d::Scheduler::unschedule
                (*(_func_void_float **)(lVar2 + 0xa0),(Ref *)__selector_doRefreshVirtualList);
      iVar1 = *(int *)(this + 0x304);
    }
    if (iVar1 == 0) {
      clearSelection(this);
    }
    if (param_2) {
      scrollToView(this,param_1,false,false);
    }
    *(int *)(this + 0x334) = param_1;
    if (this[0x338] == (GList)0x0) {
      lVar2 = GComponent::getChildAt((GComponent *)this,param_1);
      if (lVar2 == 0) {
        return;
      }
      this_00 = (GButton *)__dynamic_cast(lVar2,&GObject::typeinfo,&GButton::typeinfo,0);
    }
    else {
      lVar4 = *(long *)(this + 0x368);
      lVar2 = *(long *)(lVar4 + (long)param_1 * 0x18 + 8);
      this_00 = (GButton *)0x0;
      if (lVar2 != 0) {
        this_00 = (GButton *)__dynamic_cast(lVar2,&GObject::typeinfo,&GButton::typeinfo,0);
      }
      *(undefined1 *)(lVar4 + (long)param_1 * 0x18 + 0x14) = 1;
    }
    if ((this_00 != (GButton *)0x0) && (this_00[0x33c] == (GButton)0x0)) {
      GButton::setSelected(this_00,true);
      pGVar3 = *(GController **)(this + 800);
      if ((pGVar3 != (GController *)0x0) &&
         ((pGVar3[0x60] == (GController)0x0 &&
          (iVar1 = GController::getPageCount(pGVar3), param_1 < iVar1)))) {
        pGVar3 = *(GController **)(this + 800);
        *(undefined8 *)(this + 800) = 0;
        GController::setSelectedIndex(pGVar3,param_1,true);
        *(GController **)(this + 800) = pGVar3;
      }
    }
  }
  return;
}

