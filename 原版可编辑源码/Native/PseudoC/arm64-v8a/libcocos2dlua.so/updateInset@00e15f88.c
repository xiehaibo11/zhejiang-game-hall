
/* cocos2d::extension::ScrollView::updateInset() */

void __thiscall cocos2d::extension::ScrollView::updateInset(ScrollView *this)

{
  ulong uVar1;
  undefined8 *puVar2;
  float *pfVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (*(long **)(this + 0x340) != (long *)0x0) {
    uVar1 = (**(code **)(**(long **)(this + 0x340) + 0x200))();
    if ((uVar1 & 1) == 0) {
                    /* try { // try from 00e15fc8 to 00f15fcf has its CatchHandler @ 00e1606c */
                    /* try { // try from 00e15fd0 to 00f1607f has its CatchHandler @ 00e15f70 */
      puVar2 = (undefined8 *)(**(code **)(**(long **)(this + 0x340) + 0x150))();
    }
    else {
      puVar2 = &Vec2::ZERO;
    }
    uVar11 = *puVar2;
    pfVar3 = (float *)(**(code **)(**(long **)(this + 0x340) + 0x168))(*(long **)(this + 0x340));
    fVar5 = *pfVar3;
    fVar6 = (float)(**(code **)(**(long **)(this + 0x340) + 0x58))(*(long **)(this + 0x340));
    lVar4 = (**(code **)(**(long **)(this + 0x340) + 0x168))();
    fVar8 = *(float *)(lVar4 + 4);
    fVar7 = (float)(**(code **)(**(long **)(this + 0x340) + 0x68))(*(long **)(this + 0x340));
                    /* catch() { ... } // from try @ 00e15fc8 with catch @ 00e1606c */
    *(ulong *)(this + 0x34c) =
         CONCAT44((float)((ulong)uVar11 >> 0x20) * fVar8 * fVar7 +
                  (float)((ulong)*(undefined8 *)(this + 0x390) >> 0x20) * 0.2,
                  (float)uVar11 * fVar5 * fVar6 + (float)*(undefined8 *)(this + 0x390) * 0.2);
    uVar1 = (**(code **)(**(long **)(this + 0x340) + 0x200))();
                    /* try { // try from 00e16080 to 00f160d7 has its CatchHandler @ 00e16080
                       catch() { ... } // from try @ 00e16080 with catch @ 00e16080
                       catch() { ... } // from try @ 00e160e0 with catch @ 00e16080 */
    if ((uVar1 & 1) == 0) {
      puVar2 = (undefined8 *)(**(code **)(**(long **)(this + 0x340) + 0x150))();
    }
    else {
      puVar2 = &Vec2::ZERO;
    }
    uVar12 = *puVar2;
    pfVar3 = (float *)(**(code **)(**(long **)(this + 0x340) + 0x168))(*(long **)(this + 0x340));
    fVar5 = *pfVar3;
    fVar6 = (float)(**(code **)(**(long **)(this + 0x340) + 0x58))(*(long **)(this + 0x340));
                    /* try { // try from 00e160d8 to 00f160df has its CatchHandler @ 00e16164 */
                    /* try { // try from 00e160e0 to 00f16177 has its CatchHandler @ 00e16080 */
    lVar4 = (**(code **)(**(long **)(this + 0x340) + 0x168))();
    fVar9 = *(float *)(lVar4 + 4);
    fVar7 = (float)(**(code **)(**(long **)(this + 0x340) + 0x68))(*(long **)(this + 0x340));
    uVar11 = NEON_fmov(0x3f800000,4);
    fVar8 = (float)*(undefined8 *)(this + 0x390);
    fVar10 = (float)((ulong)*(undefined8 *)(this + 0x390) >> 0x20);
    *(ulong *)(this + 0x354) =
         CONCAT44((fVar10 - ((float)((ulong)uVar11 >> 0x20) - (float)((ulong)uVar12 >> 0x20)) *
                            fVar9 * fVar7) + fVar10 * -0.2,
                  (fVar8 - ((float)uVar11 - (float)uVar12) * fVar5 * fVar6) + fVar8 * -0.2);
  }
  return;
}

