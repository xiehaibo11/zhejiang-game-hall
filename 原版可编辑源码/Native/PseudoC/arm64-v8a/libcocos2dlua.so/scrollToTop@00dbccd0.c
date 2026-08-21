
/* cocos2d::ui::ScrollView::scrollToTop(float, bool) */

void __thiscall cocos2d::ui::ScrollView::scrollToTop(ScrollView *this,float param_1,bool param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  long lVar3;
  float fVar4;
  undefined4 local_28;
  float local_24;
  
  puVar2 = (undefined4 *)(**(code **)(**(long **)(this + 0x7b8) + 0xb0))();
  uVar1 = *puVar2;
                    /* try { // try from 00dbcd08 to 00ebcd0b has its CatchHandler @ 00dbcd24 */
  fVar4 = *(float *)(this + 0x84);
                    /* try { // try from 00dbcd0c to 00ebcd37 has its CatchHandler @ 00dbccc4 */
  lVar3 = (**(code **)(**(long **)(this + 0x7b8) + 0x168))(*(long **)(this + 0x7b8));
                    /* catch() { ... } // from try @ 00dbcd08 with catch @ 00dbcd24 */
  local_24 = fVar4 - *(float *)(lVar3 + 4);
  local_28 = uVar1;
  startAutoScrollToDestination(this,(Vec2 *)&local_28,param_1,param_2);
  return;
}

