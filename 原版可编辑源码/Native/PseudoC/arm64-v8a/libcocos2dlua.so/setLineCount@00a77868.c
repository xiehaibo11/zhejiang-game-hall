
/* fairygui::GList::setLineCount(int) */

void __thiscall fairygui::GList::setLineCount(GList *this,int param_1)

{
  long lVar1;
  ulong uVar2;
  
                    /* try { // try from 00a77870 to 00b77887 has its CatchHandler @ 00a77b68 */
                    /* try { // try from 00a77894 to 00b778bb has its CatchHandler @ 00a77b5c */
  if (((*(int *)(this + 0x2e8) != param_1) &&
      (*(int *)(this + 0x2e8) = param_1, *(int *)(this + 0x2e4) - 3U < 2)) &&
     (GComponent::setBoundsChangedFlag((GComponent *)this), this[0x338] != (GList)0x0)) {
    *(undefined4 *)(this + 0x358) = 2;
    lVar1 = cocos2d::Director::getInstance();
                    /* try { // try from 00a778c8 to 00b778df has its CatchHandler @ 00a77b74 */
    uVar2 = cocos2d::Scheduler::isScheduled
                      (*(_func_void_float **)(lVar1 + 0xa0),(Ref *)__selector_doRefreshVirtualList);
    if ((uVar2 & 1) == 0) {
      lVar1 = cocos2d::Director::getInstance();
                    /* try { // try from 00a778e4 to 00b778fb has its CatchHandler @ 00a77b64 */
                    /* try { // try from 00a77900 to 00b77917 has its CatchHandler @ 00a77b58 */
      cocos2d::Scheduler::schedule
                (*(Scheduler **)(lVar1 + 0xa0),__selector_doRefreshVirtualList,(Ref *)0x0,0.0,
                 SUB81(this,0));
      return;
    }
  }
  return;
}

