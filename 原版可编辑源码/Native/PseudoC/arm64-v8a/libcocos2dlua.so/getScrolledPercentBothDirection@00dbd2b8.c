
/* cocos2d::ui::ScrollView::getScrolledPercentBothDirection() const */

float __thiscall cocos2d::ui::ScrollView::getScrolledPercentBothDirection(ScrollView *this)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  pfVar1 = (float *)(**(code **)(*(long *)this + 0x168))();
                    /* try { // try from 00dbd2e0 to 00ebd2ef has its CatchHandler @ 00dbd678 */
  fVar4 = *pfVar1;
                    /* try { // try from 00dbd2f0 to 00ebd303 has its CatchHandler @ 00dbd674 */
  pfVar1 = (float *)(**(code **)(**(long **)(this + 0x7b8) + 0x168))(*(long **)(this + 0x7b8));
  fVar2 = *pfVar1;
  pfVar1 = (float *)(**(code **)(**(long **)(this + 0x7b8) + 0xb0))(*(long **)(this + 0x7b8));
  fVar3 = *pfVar1;
                    /* try { // try from 00dbd31c to 00ebd32b has its CatchHandler @ 00dbd670 */
                    /* try { // try from 00dbd32c to 00ebd33f has its CatchHandler @ 00dbd66c */
  (**(code **)(*(long *)this + 0x168))(this);
  (**(code **)(**(long **)(this + 0x7b8) + 0x168))(*(long **)(this + 0x7b8));
                    /* try { // try from 00dbd358 to 00ebd367 has its CatchHandler @ 00dbd668 */
  (**(code **)(**(long **)(this + 0x7b8) + 0xb0))(*(long **)(this + 0x7b8));
                    /* try { // try from 00dbd368 to 00ebd37b has its CatchHandler @ 00dbd664 */
  return (fVar3 / (fVar4 - fVar2)) * 100.0;
}

