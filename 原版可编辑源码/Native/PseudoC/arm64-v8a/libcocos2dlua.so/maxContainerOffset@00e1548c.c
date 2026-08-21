
/* cocos2d::extension::ScrollView::maxContainerOffset() */

float __thiscall cocos2d::extension::ScrollView::maxContainerOffset(ScrollView *this)

{
  ulong uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
                    /* try { // try from 00e15494 to 00f1549f has its CatchHandler @ 00e15574 */
  uVar1 = (**(code **)(**(long **)(this + 0x340) + 0x200))();
  if ((uVar1 & 1) == 0) {
    pfVar2 = (float *)(**(code **)(**(long **)(this + 0x340) + 0x150))();
  }
  else {
    pfVar2 = (float *)&Vec2::ZERO;
  }
  fVar4 = *pfVar2;
  pfVar2 = (float *)(**(code **)(**(long **)(this + 0x340) + 0x168))(*(long **)(this + 0x340));
                    /* try { // try from 00e154ec to 00f154f7 has its CatchHandler @ 00e155d4 */
  fVar5 = *pfVar2;
  fVar3 = (float)(**(code **)(**(long **)(this + 0x340) + 0x58))(*(long **)(this + 0x340));
                    /* try { // try from 00e15508 to 00f1550f has its CatchHandler @ 00e155b8 */
                    /* try { // try from 00e15510 to 00f15613 has its CatchHandler @ 00e15278 */
  (**(code **)(**(long **)(this + 0x340) + 0x168))();
  (**(code **)(**(long **)(this + 0x340) + 0x68))(*(long **)(this + 0x340));
  return fVar4 * fVar5 * fVar3;
}

