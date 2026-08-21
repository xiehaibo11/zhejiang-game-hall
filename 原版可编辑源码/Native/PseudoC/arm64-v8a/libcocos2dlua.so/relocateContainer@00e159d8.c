
/* cocos2d::extension::ScrollView::relocateContainer(bool) */

void __thiscall cocos2d::extension::ScrollView::relocateContainer(ScrollView *this,bool param_1)

{
  ulong uVar1;
  float *pfVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
                    /* try { // try from 00e159e0 to 00f159e7 has its CatchHandler @ 00e15a78 */
                    /* try { // try from 00e159e8 to 00f15aab has its CatchHandler @ 00e158f4 */
  uVar1 = (**(code **)(**(long **)(this + 0x340) + 0x200))();
  if ((uVar1 & 1) == 0) {
    pfVar2 = (float *)(**(code **)(**(long **)(this + 0x340) + 0x150))();
  }
  else {
    pfVar2 = (float *)&Vec2::ZERO;
  }
  fVar4 = *pfVar2;
  fVar5 = pfVar2[1];
  pfVar2 = (float *)(**(code **)(**(long **)(this + 0x340) + 0x168))(*(long **)(this + 0x340));
  fVar6 = *pfVar2;
  fVar7 = (float)(**(code **)(**(long **)(this + 0x340) + 0x58))(*(long **)(this + 0x340));
                    /* catch() { ... } // from try @ 00e159e0 with catch @ 00e15a78 */
  lVar3 = (**(code **)(**(long **)(this + 0x340) + 0x168))();
                    /* catch() { ... } // from try @ 00e159c8 with catch @ 00e15a88 */
  fVar8 = *(float *)(lVar3 + 4);
                    /* catch() { ... } // from try @ 00e15998 with catch @ 00e15a98 */
  fVar9 = (float)(**(code **)(**(long **)(this + 0x340) + 0x68))(*(long **)(this + 0x340));
  fVar13 = *(float *)(this + 0x394);
  fVar19 = *(float *)(this + 0x390);
                    /* try { // try from 00e15aac to 00f15b5b has its CatchHandler @ 00e15aac
                       catch() { ... } // from try @ 00e15aac with catch @ 00e15aac
                       catch() { ... } // from try @ 00e15b98 with catch @ 00e15aac */
  uVar1 = (**(code **)(**(long **)(this + 0x340) + 0x200))();
  if ((uVar1 & 1) == 0) {
    pfVar2 = (float *)(**(code **)(**(long **)(this + 0x340) + 0x150))();
  }
  else {
    pfVar2 = (float *)&Vec2::ZERO;
  }
  fVar17 = *pfVar2;
  fVar18 = pfVar2[1];
  pfVar2 = (float *)(**(code **)(**(long **)(this + 0x340) + 0x168))(*(long **)(this + 0x340));
  fVar16 = *pfVar2;
  fVar10 = (float)(**(code **)(**(long **)(this + 0x340) + 0x58))(*(long **)(this + 0x340));
  lVar3 = (**(code **)(**(long **)(this + 0x340) + 0x168))();
  fVar20 = *(float *)(lVar3 + 4);
  fVar11 = (float)(**(code **)(**(long **)(this + 0x340) + 0x68))(*(long **)(this + 0x340));
  pfVar2 = (float *)(**(code **)(**(long **)(this + 0x340) + 0xb0))();
  fVar15 = *pfVar2;
  fVar14 = pfVar2[1];
                    /* try { // try from 00e15b5c to 00f15b63 has its CatchHandler @ 00e15c44 */
  fVar12 = fVar15;
  if ((*(uint *)(this + 0x330) | 2) == 2) {
                    /* try { // try from 00e15b78 to 00f15b83 has its CatchHandler @ 00e15c34 */
    fVar19 = fVar19 - (1.0 - fVar4) * fVar6 * fVar7;
    fVar17 = fVar17 * fVar16 * fVar10;
                    /* try { // try from 00e15b8c to 00f15b97 has its CatchHandler @ 00e15c24 */
    if (fVar15 <= fVar19) {
      fVar12 = fVar19;
    }
    if (fVar17 <= fVar12) {
      fVar12 = fVar17;
    }
  }
                    /* try { // try from 00e15b98 to 00f15c57 has its CatchHandler @ 00e15aac */
  fVar4 = fVar14;
  if (*(uint *)(this + 0x330) - 1 < 2) {
    fVar18 = fVar18 * fVar20 * fVar11;
    if (fVar18 <= fVar14) {
      fVar4 = fVar18;
    }
    fVar13 = fVar13 - (1.0 - fVar5) * fVar8 * fVar9;
    if (fVar4 <= fVar13) {
      fVar4 = fVar13;
    }
  }
  if ((fVar12 == fVar15) && (fVar4 == fVar14)) {
    return;
  }
                    /* catch() { ... } // from try @ 00e15b8c with catch @ 00e15c24 */
                    /* catch() { ... } // from try @ 00e15b78 with catch @ 00e15c34 */
  setContentOffset(this,param_1);
  return;
}

