
/* cocos2d::ui::ScrollView::scrollToPercentBothDirection(cocos2d::Vec2 const&, float, bool) */

void __thiscall
cocos2d::ui::ScrollView::scrollToPercentBothDirection
          (ScrollView *this,Vec2 *param_1,float param_2,bool param_3)

{
  long lVar1;
  float *pfVar2;
  float fVar3;
  float local_28;
  float fStack_24;
  
  if (*(int *)(this + 0x7c0) == 3) {
    fVar3 = *(float *)(this + 0x84);
                    /* catch() { ... } // from try @ 00dbd080 with catch @ 00dbd138 */
                    /* catch() { ... } // from try @ 00dbd0c0 with catch @ 00dbd140 */
    lVar1 = (**(code **)(**(long **)(this + 0x7b8) + 0x168))();
    fVar3 = fVar3 - *(float *)(lVar1 + 4);
    pfVar2 = (float *)(**(code **)(**(long **)(this + 0x7b8) + 0x168))(*(long **)(this + 0x7b8));
                    /* catch() { ... } // from try @ 00dbd5d4 with catch @ 00dbd174 */
    local_28 = ((*pfVar2 - *(float *)(this + 0x80)) * *(float *)param_1) / -100.0;
    fStack_24 = fVar3 + (fVar3 * *(float *)(param_1 + 4)) / -100.0;
    startAutoScrollToDestination(this,(Vec2 *)&local_28,param_2,param_3);
  }
                    /* try { // try from 00dbd1b4 to 00ebd1c3 has its CatchHandler @ 00dbd6dc */
  return;
}

