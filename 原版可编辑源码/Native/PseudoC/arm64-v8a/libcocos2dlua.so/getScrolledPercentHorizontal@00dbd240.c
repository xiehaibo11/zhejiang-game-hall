
/* cocos2d::ui::ScrollView::getScrolledPercentHorizontal() const */

float __thiscall cocos2d::ui::ScrollView::getScrolledPercentHorizontal(ScrollView *this)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  
  pfVar1 = (float *)(**(code **)(*(long *)this + 0x168))();
  fVar3 = *pfVar1;
                    /* try { // try from 00dbd268 to 00ebd277 has its CatchHandler @ 00dbd688 */
  pfVar1 = (float *)(**(code **)(**(long **)(this + 0x7b8) + 0x168))(*(long **)(this + 0x7b8));
                    /* try { // try from 00dbd278 to 00ebd28b has its CatchHandler @ 00dbd684 */
  fVar2 = *pfVar1;
  pfVar1 = (float *)(**(code **)(**(long **)(this + 0x7b8) + 0xb0))(*(long **)(this + 0x7b8));
                    /* try { // try from 00dbd2a4 to 00ebd2b3 has its CatchHandler @ 00dbd680 */
                    /* try { // try from 00dbd2b4 to 00ebd2c7 has its CatchHandler @ 00dbd67c */
  return (*pfVar1 / (fVar3 - fVar2)) * 100.0;
}

