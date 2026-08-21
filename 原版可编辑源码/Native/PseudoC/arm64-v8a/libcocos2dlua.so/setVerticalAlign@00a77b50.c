
/* fairygui::GList::setVerticalAlign(cocos2d::TextVAlignment) */

void __thiscall fairygui::GList::setVerticalAlign(GList *this,int param_2)

{
  long lVar1;
  ulong uVar2;
  
                    /* catch() { ... } // from try @ 00a77928 with catch @ 00a77b50
                       catch() { ... } // from try @ 00a77b18 with catch @ 00a77b50 */
                    /* catch() { ... } // from try @ 00a77a18 with catch @ 00a77b54 */
                    /* catch() { ... } // from try @ 00a77900 with catch @ 00a77b58 */
                    /* catch() { ... } // from try @ 00a77894 with catch @ 00a77b5c
                       catch() { ... } // from try @ 00a77b00 with catch @ 00a77b5c */
                    /* catch() { ... } // from try @ 00a779fc with catch @ 00a77b60 */
                    /* catch() { ... } // from try @ 00a778e4 with catch @ 00a77b64 */
  if (*(int *)(this + 0x2fc) != param_2) {
                    /* catch() { ... } // from try @ 00a77870 with catch @ 00a77b68 */
                    /* catch() { ... } // from try @ 00a77978 with catch @ 00a77b6c
                       catch() { ... } // from try @ 00a77af4 with catch @ 00a77b6c */
    *(int *)(this + 0x2fc) = param_2;
                    /* catch() { ... } // from try @ 00a7795c with catch @ 00a77b70 */
    GComponent::setBoundsChangedFlag((GComponent *)this);
                    /* catch() { ... } // from try @ 00a778c8 with catch @ 00a77b74 */
                    /* catch() { ... } // from try @ 00a77854 with catch @ 00a77b78 */
    if (this[0x338] != (GList)0x0) {
      *(undefined4 *)(this + 0x358) = 2;
      lVar1 = cocos2d::Director::getInstance();
      uVar2 = cocos2d::Scheduler::isScheduled
                        (*(_func_void_float **)(lVar1 + 0xa0),(Ref *)__selector_doRefreshVirtualList
                        );
      if ((uVar2 & 1) == 0) {
        lVar1 = cocos2d::Director::getInstance();
        cocos2d::Scheduler::schedule
                  (*(Scheduler **)(lVar1 + 0xa0),__selector_doRefreshVirtualList,(Ref *)0x0,0.0,
                   SUB81(this,0));
        return;
      }
    }
  }
  return;
}

