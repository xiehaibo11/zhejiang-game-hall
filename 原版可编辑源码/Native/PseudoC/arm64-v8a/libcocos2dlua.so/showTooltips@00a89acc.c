
/* fairygui::GRoot::showTooltips(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall fairygui::GRoot::showTooltips(GRoot *this,basic_string *param_1)

{
  long *plVar1;
  GObject *pGVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  plVar1 = *(long **)(this + 0x2d8);
  if (plVar1 == (long *)0x0) {
    uVar4 = (ulong)(UIConfig::tooltipsWin >> 1);
    if ((UIConfig::tooltipsWin & 1) != 0) {
      uVar4 = DAT_01782758;
    }
    if (uVar4 == 0) {
      return;
    }
    pGVar2 = (GObject *)UIPackage::createObjectFromURL((basic_string *)&UIConfig::tooltipsWin);
    *(GObject **)(this + 0x2d8) = pGVar2;
    GObject::setTouchable(pGVar2,false);
    cocos2d::Ref::retain(*(Ref **)(this + 0x2d8));
    plVar1 = *(long **)(this + 0x2d8);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,param_1);
  pGVar2 = *(GObject **)(this + 0x2d0);
  uVar5 = *(undefined8 *)(this + 0x2d8);
  if (pGVar2 != (GObject *)0x0) {
    if (*(long *)(pGVar2 + 0xa0) != 0) {
      GComponent::removeChild((GComponent *)this,pGVar2);
    }
    *(undefined8 *)(this + 0x2d0) = 0;
  }
  *(undefined8 *)(this + 0x2d0) = uVar5;
                    /* try { // try from 00a89b60 to 00b89bcb has its CatchHandler @ 00a89b60
                       catch() { ... } // from try @ 00a89b60 with catch @ 00a89b60
                       catch() { ... } // from try @ 00a89ca0 with catch @ 00a89b60
                       catch() { ... } // from try @ 00a89d8c with catch @ 00a89b60
                       catch() { ... } // from try @ 00a89e8c with catch @ 00a89b60
                       catch() { ... } // from try @ 00a89f14 with catch @ 00a89b60 */
  lVar3 = cocos2d::Director::getInstance();
  uVar4 = cocos2d::Scheduler::isScheduled
                    (*(_func_void_float **)(lVar3 + 0xa0),(Ref *)__selector_doShowTooltipsWin);
  if ((uVar4 & 1) != 0) {
    return;
  }
  lVar3 = cocos2d::Director::getInstance();
  cocos2d::Scheduler::schedule
            (*(Scheduler **)(lVar3 + 0xa0),__selector_doShowTooltipsWin,(Ref *)0x0,0.1,SUB81(this,0)
            );
  return;
}

