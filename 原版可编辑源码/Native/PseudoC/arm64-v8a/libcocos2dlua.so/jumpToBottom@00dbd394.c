
/* cocos2d::ui::ScrollView::jumpToBottom() */

void __thiscall cocos2d::ui::ScrollView::jumpToBottom(ScrollView *this)

{
  long lVar1;
  float *pfVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined8 local_30;
  long local_28;
  
                    /* try { // try from 00dbd394 to 00ebd3a3 has its CatchHandler @ 00dbd660 */
                    /* try { // try from 00dbd3a4 to 00ebd3b7 has its CatchHandler @ 00dbd65c */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pfVar2 = (float *)(**(code **)(**(long **)(this + 0x7b8) + 0xb0))();
  fVar4 = *pfVar2;
                    /* try { // try from 00dbd3d0 to 00ebd3df has its CatchHandler @ 00dbd658 */
  this[0x81d] = (ScrollView)0x0;
                    /* try { // try from 00dbd3e0 to 00ebd3f3 has its CatchHandler @ 00dbd654 */
  puVar3 = (undefined8 *)(**(code **)(**(long **)(this + 0x7b8) + 0xb0))(*(long **)(this + 0x7b8));
  local_30 = CONCAT44(0.0 - (float)((ulong)*puVar3 >> 0x20),fVar4 - (float)*puVar3);
                    /* try { // try from 00dbd40c to 00ebd41b has its CatchHandler @ 00dbd650 */
  (**(code **)(*(long *)this + 0x7c0))(this,&local_30,1);
                    /* try { // try from 00dbd41c to 00ebd42f has its CatchHandler @ 00dbd64c */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

