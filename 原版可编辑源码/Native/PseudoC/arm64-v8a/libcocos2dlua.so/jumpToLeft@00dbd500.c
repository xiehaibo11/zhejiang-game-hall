
/* cocos2d::ui::ScrollView::jumpToLeft() */

void __thiscall cocos2d::ui::ScrollView::jumpToLeft(ScrollView *this)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined8 local_30;
  long local_28;
  
                    /* try { // try from 00dbd50c to 00ebd51f has its CatchHandler @ 00dbd62c */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = (**(code **)(**(long **)(this + 0x7b8) + 0xb0))();
                    /* try { // try from 00dbd538 to 00ebd547 has its CatchHandler @ 00dbd628 */
  fVar4 = *(float *)(lVar2 + 4);
  this[0x81d] = (ScrollView)0x0;
                    /* try { // try from 00dbd548 to 00ebd55b has its CatchHandler @ 00dbd624 */
  puVar3 = (undefined8 *)(**(code **)(**(long **)(this + 0x7b8) + 0xb0))();
  local_30 = CONCAT44(fVar4 - (float)((ulong)*puVar3 >> 0x20),0.0 - (float)*puVar3);
                    /* try { // try from 00dbd574 to 00ebd583 has its CatchHandler @ 00dbd620 */
  (**(code **)(*(long *)this + 0x7c0))(this,&local_30,1);
                    /* try { // try from 00dbd584 to 00ebd597 has its CatchHandler @ 00dbd61c */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

