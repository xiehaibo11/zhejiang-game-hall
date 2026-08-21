
/* cocos2d::ui::ScrollView::scrollToPercentHorizontal(float, float, bool) */

void __thiscall
cocos2d::ui::ScrollView::scrollToPercentHorizontal
          (ScrollView *this,float param_1,float param_2,bool param_3)

{
  float *pfVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float local_38;
  undefined4 local_34;
  
                    /* try { // try from 00dbd080 to 00ebd08b has its CatchHandler @ 00dbd138 */
  pfVar1 = (float *)(**(code **)(**(long **)(this + 0x7b8) + 0x168))();
  fVar3 = *pfVar1;
  fVar4 = *(float *)(this + 0x80);
                    /* try { // try from 00dbd0c0 to 00ebd0cf has its CatchHandler @ 00dbd140 */
                    /* try { // try from 00dbd0d0 to 00ebd173 has its CatchHandler @ 00dbd040 */
  lVar2 = (**(code **)(**(long **)(this + 0x7b8) + 0xb0))(*(long **)(this + 0x7b8));
  local_34 = *(undefined4 *)(lVar2 + 4);
  local_38 = ((fVar3 - fVar4) * param_1) / -100.0;
  startAutoScrollToDestination(this,(Vec2 *)&local_38,param_2,param_3);
  return;
}

