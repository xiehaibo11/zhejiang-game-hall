
/* cocos2d::ui::ScrollView::jumpToPercentHorizontal(float) */

void __thiscall cocos2d::ui::ScrollView::jumpToPercentHorizontal(ScrollView *this,float param_1)

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
  
                    /* try { // try from 00dbda50 to 00ebda5b has its CatchHandler @ 00dbe3fc */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pfVar2 = (float *)(**(code **)(**(long **)(this + 0x7b8) + 0x168))();
                    /* try { // try from 00dbda74 to 00ebda7b has its CatchHandler @ 00dbe400 */
  fVar5 = *pfVar2;
  fVar7 = *(float *)(this + 0x80);
                    /* try { // try from 00dbda98 to 00ebdac3 has its CatchHandler @ 00dbe3b8 */
  lVar3 = (**(code **)(**(long **)(this + 0x7b8) + 0xb0))(*(long **)(this + 0x7b8));
  fVar6 = *(float *)(lVar3 + 4);
  this[0x81d] = (ScrollView)0x0;
                    /* try { // try from 00dbdac4 to 00ebdacf has its CatchHandler @ 00dbe3fc */
  puVar4 = (undefined8 *)(**(code **)(**(long **)(this + 0x7b8) + 0xb0))(*(long **)(this + 0x7b8));
                    /* try { // try from 00dbdae4 to 00ebdaff has its CatchHandler @ 00dbe3f8 */
  local_40 = CONCAT44(fVar6 - (float)((ulong)*puVar4 >> 0x20),
                      ((fVar5 - fVar7) * param_1) / -100.0 - (float)*puVar4);
  (**(code **)(*(long *)this + 0x7c0))(this,&local_40,1);
                    /* try { // try from 00dbdb04 to 00ebdb13 has its CatchHandler @ 00dbe388 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00dbdb18 to 00ebdb2b has its CatchHandler @ 00dbe2c0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

