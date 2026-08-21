
/* fairygui::GRoot::showTooltipsWin(fairygui::GObject*) */

void __thiscall fairygui::GRoot::showTooltipsWin(GRoot *this,GObject *param_1)

{
  long lVar1;
  ulong uVar2;
  GObject *pGVar3;
  
                    /* try { // try from 00a89bcc to 00b89c37 has its CatchHandler @ 00a89f80 */
  pGVar3 = *(GObject **)(this + 0x2d0);
  if (pGVar3 != (GObject *)0x0) {
    if (*(long *)(pGVar3 + 0xa0) != 0) {
      GComponent::removeChild((GComponent *)this,pGVar3);
    }
    *(undefined8 *)(this + 0x2d0) = 0;
  }
  *(GObject **)(this + 0x2d0) = param_1;
  lVar1 = cocos2d::Director::getInstance();
  uVar2 = cocos2d::Scheduler::isScheduled
                    (*(_func_void_float **)(lVar1 + 0xa0),(Ref *)__selector_doShowTooltipsWin);
  if ((uVar2 & 1) != 0) {
    return;
  }
  lVar1 = cocos2d::Director::getInstance();
                    /* try { // try from 00a89c50 to 00b89c5f has its CatchHandler @ 00a89f74 */
  cocos2d::Scheduler::schedule
            (*(Scheduler **)(lVar1 + 0xa0),__selector_doShowTooltipsWin,(Ref *)0x0,0.1,SUB81(this,0)
            );
  return;
}

