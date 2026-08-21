
/* cocos2d::ui::ScrollView::getScrolledPercentVertical() const */

float __thiscall cocos2d::ui::ScrollView::getScrolledPercentVertical(ScrollView *this)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
                    /* try { // try from 00dbd1c4 to 00ebd1d7 has its CatchHandler @ 00dbd69c */
  lVar1 = (**(code **)(*(long *)this + 0x168))();
  fVar3 = *(float *)(lVar1 + 4);
                    /* try { // try from 00dbd1f0 to 00ebd1ff has its CatchHandler @ 00dbd698 */
  lVar1 = (**(code **)(**(long **)(this + 0x7b8) + 0x168))(*(long **)(this + 0x7b8));
  fVar2 = *(float *)(lVar1 + 4);
                    /* try { // try from 00dbd200 to 00ebd213 has its CatchHandler @ 00dbd694 */
  lVar1 = (**(code **)(**(long **)(this + 0x7b8) + 0xb0))(*(long **)(this + 0x7b8));
                    /* try { // try from 00dbd22c to 00ebd23b has its CatchHandler @ 00dbd690 */
                    /* try { // try from 00dbd23c to 00ebd24f has its CatchHandler @ 00dbd68c */
  return (1.0 - *(float *)(lVar1 + 4) / (fVar3 - fVar2)) * 100.0;
}

