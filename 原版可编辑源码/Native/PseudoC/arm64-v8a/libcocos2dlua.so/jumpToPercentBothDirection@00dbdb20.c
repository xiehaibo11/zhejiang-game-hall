
/* cocos2d::ui::ScrollView::jumpToPercentBothDirection(cocos2d::Vec2 const&) */

void __thiscall cocos2d::ui::ScrollView::jumpToPercentBothDirection(ScrollView *this,Vec2 *param_1)

{
  long lVar1;
  long lVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_50;
  float fStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00dbdb44 to 00ebdb53 has its CatchHandler @ 00dbe29c */
  if (*(int *)(this + 0x7c0) == 3) {
    fVar8 = *(float *)(this + 0x84);
                    /* try { // try from 00dbdb60 to 00ebdb6b has its CatchHandler @ 00dbe2bc */
    lVar2 = (**(code **)(**(long **)(this + 0x7b8) + 0x168))();
    fVar8 = fVar8 - *(float *)(lVar2 + 4);
    pfVar3 = (float *)(**(code **)(**(long **)(this + 0x7b8) + 0x168))(*(long **)(this + 0x7b8));
    fVar4 = *pfVar3;
    fVar5 = *(float *)(this + 0x80);
    fVar6 = *(float *)param_1;
    fVar7 = *(float *)(param_1 + 4);
    this[0x81d] = (ScrollView)0x0;
                    /* try { // try from 00dbdbb8 to 00ebdbc7 has its CatchHandler @ 00dbe398 */
    pfVar3 = (float *)(**(code **)(**(long **)(this + 0x7b8) + 0xb0))();
    local_50 = (fVar6 * (fVar4 - fVar5)) / -100.0 - *pfVar3;
    fStack_4c = (fVar8 + (fVar8 * fVar7) / -100.0) - pfVar3[1];
    (**(code **)(*(long *)this + 0x7c0))(this,&local_50,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00dbdc14 to 00ebdc1f has its CatchHandler @ 00dbe300 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

