
/* cocos2d::ui::ScrollView::startAutoScroll(cocos2d::Vec2 const&, float, bool) */

void __thiscall
cocos2d::ui::ScrollView::startAutoScroll(ScrollView *this,Vec2 *param_1,float param_2,bool param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_50;
  float fStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = 0;
  if (*(int *)(this + 0x7c0) != 1) {
    local_50 = *(undefined4 *)param_1;
  }
                    /* try { // try from 00dbbebc to 00ebbec3 has its CatchHandler @ 00dbbf9c */
  fVar6 = 0.0;
  if (*(int *)(this + 0x7c0) != 2) {
    fVar6 = *(float *)(param_1 + 4);
  }
                    /* try { // try from 00dbbec4 to 00ebbf03 has its CatchHandler @ 00dbbe40 */
  this[0x81d] = (ScrollView)0x1;
  *(ulong *)(this + 0x828) = CONCAT44(fVar6,local_50);
  this[0x81e] = (ScrollView)param_3;
  fStack_4c = fVar6;
  puVar2 = (undefined8 *)(**(code **)(**(long **)(this + 0x7b8) + 0xb0))();
  uVar3 = *puVar2;
  *(float *)(this + 0x830) = param_2;
  *(undefined4 *)(this + 0x834) = 0;
  this[0x839] = (ScrollView)0x0;
  *(undefined8 *)(this + 0x820) = uVar3;
                    /* try { // try from 00dbbf04 to 00ebbf0f has its CatchHandler @ 00dbbfb0 */
  *(undefined8 *)(this + 0x83c) = 0;
                    /* try { // try from 00dbbf18 to 00ebbf3f has its CatchHandler @ 00dbbfb4 */
  fVar4 = (float)(**(code **)(*(long *)this + 0x7b8))(this);
  fVar7 = fVar6;
                    /* try { // try from 00dbbf40 to 00ebbfc7 has its CatchHandler @ 00dbbe40 */
  if ((0.0001 < ABS(fVar4)) || (fVar7 = 0.0001, 0.0001 < ABS(fVar6))) {
    this[0x838] = (ScrollView)0x1;
    fVar5 = (float)(**(code **)(*(long *)this + 0x7b8))(this,&local_50);
    if ((0.0 < fVar4 * fVar5) || (0.0 < fVar6 * fVar7)) {
      this[0x839] = (ScrollView)0x1;
    }
  }
                    /* catch() { ... } // from try @ 00dbbebc with catch @ 00dbbf9c */
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 00dbbf04 with catch @ 00dbbfb0 */
                    /* catch() { ... } // from try @ 00dbbf18 with catch @ 00dbbfb4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

