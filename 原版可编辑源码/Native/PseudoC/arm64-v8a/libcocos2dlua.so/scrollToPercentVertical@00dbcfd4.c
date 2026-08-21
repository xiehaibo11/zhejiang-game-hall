
/* cocos2d::ui::ScrollView::scrollToPercentVertical(float, float, bool) */

void __thiscall
cocos2d::ui::ScrollView::scrollToPercentVertical
          (ScrollView *this,float param_1,float param_2,bool param_3)

{
  long lVar1;
  undefined4 *puVar2;
  float fVar3;
  undefined4 local_38;
  float local_34;
  
  fVar3 = *(float *)(this + 0x84);
  lVar1 = (**(code **)(**(long **)(this + 0x7b8) + 0x168))();
  fVar3 = fVar3 - *(float *)(lVar1 + 4);
  puVar2 = (undefined4 *)(**(code **)(**(long **)(this + 0x7b8) + 0xb0))(*(long **)(this + 0x7b8));
  local_38 = *puVar2;
  local_34 = fVar3 + (fVar3 * param_1) / -100.0;
                    /* try { // try from 00dbd040 to 00ebd07f has its CatchHandler @ 00dbd040
                       catch() { ... } // from try @ 00dbd040 with catch @ 00dbd040
                       catch() { ... } // from try @ 00dbd0d0 with catch @ 00dbd040 */
  startAutoScrollToDestination(this,(Vec2 *)&local_38,param_2,param_3);
  return;
}

