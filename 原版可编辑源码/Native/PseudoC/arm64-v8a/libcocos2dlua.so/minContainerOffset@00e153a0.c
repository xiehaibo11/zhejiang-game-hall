
/* cocos2d::extension::ScrollView::minContainerOffset() */

void __thiscall cocos2d::extension::ScrollView::minContainerOffset(ScrollView *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x340) + 0x200))();
  if ((uVar1 & 1) == 0) {
                    /* try { // try from 00e153e0 to 00f153eb has its CatchHandler @ 00e155dc */
    (**(code **)(**(long **)(this + 0x340) + 0x150))();
  }
                    /* try { // try from 00e153f8 to 00f153ff has its CatchHandler @ 00e15568 */
  (**(code **)(**(long **)(this + 0x340) + 0x168))(*(long **)(this + 0x340));
                    /* try { // try from 00e15418 to 00f15423 has its CatchHandler @ 00e155dc */
  (**(code **)(**(long **)(this + 0x340) + 0x58))(*(long **)(this + 0x340));
  (**(code **)(**(long **)(this + 0x340) + 0x168))();
                    /* try { // try from 00e15430 to 00f15437 has its CatchHandler @ 00e15564 */
  (**(code **)(**(long **)(this + 0x340) + 0x68))(*(long **)(this + 0x340));
  NEON_fmov(0x3f800000,4);
                    /* try { // try from 00e15480 to 00f15487 has its CatchHandler @ 00e15584 */
  return;
}

