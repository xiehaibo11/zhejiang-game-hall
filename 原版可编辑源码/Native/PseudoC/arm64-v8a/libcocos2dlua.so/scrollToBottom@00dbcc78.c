
/* cocos2d::ui::ScrollView::scrollToBottom(float, bool) */

void __thiscall cocos2d::ui::ScrollView::scrollToBottom(ScrollView *this,float param_1,bool param_2)

{
  undefined4 *puVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  
  puVar1 = (undefined4 *)(**(code **)(**(long **)(this + 0x7b8) + 0xb0))();
  local_28 = *puVar1;
  uStack_24 = 0;
  startAutoScrollToDestination(this,(Vec2 *)&local_28,param_1,param_2);
                    /* try { // try from 00dbccc4 to 00ebcd07 has its CatchHandler @ 00dbccc4
                       catch() { ... } // from try @ 00dbccc4 with catch @ 00dbccc4
                       catch() { ... } // from try @ 00dbcd0c with catch @ 00dbccc4 */
  return;
}

