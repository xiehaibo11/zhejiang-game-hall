
/* cocos2d::ui::ScrollView::jumpToPercentVertical(float) */

void __thiscall cocos2d::ui::ScrollView::jumpToPercentVertical(ScrollView *this,float param_1)

{
  long lVar1;
  long lVar2;
  float *pfVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  undefined8 local_40;
  long local_38;
  
                    /* try { // try from 00dbd96c to 00ebd97f has its CatchHandler @ 00dbe388 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00dbd984 to 00ebd99f has its CatchHandler @ 00dbe37c */
  fVar6 = *(float *)(this + 0x84);
  lVar2 = (**(code **)(**(long **)(this + 0x7b8) + 0x168))();
  fVar6 = fVar6 - *(float *)(lVar2 + 4);
  pfVar3 = (float *)(**(code **)(**(long **)(this + 0x7b8) + 0xb0))(*(long **)(this + 0x7b8));
  fVar5 = *pfVar3;
                    /* try { // try from 00dbd9b8 to 00ebd9c7 has its CatchHandler @ 00dbe338 */
  this[0x81d] = (ScrollView)0x0;
                    /* try { // try from 00dbd9e0 to 00ebd9eb has its CatchHandler @ 00dbe368 */
  puVar4 = (undefined8 *)(**(code **)(**(long **)(this + 0x7b8) + 0xb0))(*(long **)(this + 0x7b8));
                    /* try { // try from 00dbd9ec to 00ebd9f7 has its CatchHandler @ 00dbe364 */
                    /* try { // try from 00dbd9f8 to 00ebd9ff has its CatchHandler @ 00dbe360 */
  local_40 = CONCAT44((fVar6 + (fVar6 * param_1) / -100.0) - (float)((ulong)*puVar4 >> 0x20),
                      fVar5 - (float)*puVar4);
                    /* try { // try from 00dbda04 to 00ebda17 has its CatchHandler @ 00dbe35c */
  (**(code **)(*(long *)this + 0x7c0))(this,&local_40,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

