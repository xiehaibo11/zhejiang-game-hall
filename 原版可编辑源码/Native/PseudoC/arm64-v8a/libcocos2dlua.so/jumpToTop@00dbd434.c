
/* cocos2d::ui::ScrollView::jumpToTop() */

void __thiscall cocos2d::ui::ScrollView::jumpToTop(ScrollView *this)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_40;
  long local_38;
  
                    /* try { // try from 00dbd448 to 00ebd457 has its CatchHandler @ 00dbd648 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00dbd458 to 00ebd46b has its CatchHandler @ 00dbd644 */
  pfVar2 = (float *)(**(code **)(**(long **)(this + 0x7b8) + 0xb0))();
  fVar5 = *pfVar2;
  fVar7 = *(float *)(this + 0x84);
                    /* try { // try from 00dbd484 to 00ebd493 has its CatchHandler @ 00dbd640 */
  lVar3 = (**(code **)(**(long **)(this + 0x7b8) + 0x168))(*(long **)(this + 0x7b8));
  fVar6 = *(float *)(lVar3 + 4);
  this[0x81d] = (ScrollView)0x0;
                    /* try { // try from 00dbd494 to 00ebd4a7 has its CatchHandler @ 00dbd63c */
  puVar4 = (undefined8 *)(**(code **)(**(long **)(this + 0x7b8) + 0xb0))(*(long **)(this + 0x7b8));
                    /* try { // try from 00dbd4c0 to 00ebd4cf has its CatchHandler @ 00dbd638 */
  local_40 = CONCAT44((fVar7 - fVar6) - (float)((ulong)*puVar4 >> 0x20),fVar5 - (float)*puVar4);
                    /* try { // try from 00dbd4d0 to 00ebd4e3 has its CatchHandler @ 00dbd634 */
  (**(code **)(*(long *)this + 0x7c0))(this,&local_40,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00dbd4fc to 00ebd50b has its CatchHandler @ 00dbd630 */
  __stack_chk_fail();
}

