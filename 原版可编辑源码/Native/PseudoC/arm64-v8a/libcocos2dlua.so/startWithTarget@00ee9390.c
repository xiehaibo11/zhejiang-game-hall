
/* cocos2d::ShuffleTiles::startWithTarget(cocos2d::Node*) */

void __thiscall cocos2d::ShuffleTiles::startWithTarget(ShuffleTiles *this,Node *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  void *pvVar5;
  float *pfVar6;
  ulong uVar7;
  long lVar8;
  float *pfVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  undefined4 *puVar16;
  float fVar17;
  undefined8 uVar18;
  int iVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float local_58;
  float fStack_54;
  Size aSStack_50 [8];
  long local_48;
  
                    /* try { // try from 00ee9398 to 00fe93a3 has its CatchHandler @ 00ee9504 */
                    /* try { // try from 00ee93a4 to 00fe93af has its CatchHandler @ 00ee94e4 */
  lVar3 = tpidr_el0;
                    /* try { // try from 00ee93b0 to 00fe93c3 has its CatchHandler @ 00ee94c4 */
  local_48 = *(long *)(lVar3 + 0x28);
  GridAction::startWithTarget((GridAction *)this,param_1);
  if (*(uint *)(this + 0x68) != 0xffffffff) {
    srand(*(uint *)(this + 0x68));
  }
  uVar13 = (uint)(*(float *)(this + 0x58) * *(float *)(this + 0x5c));
  uVar15 = (ulong)uVar13;
                    /* try { // try from 00ee93e0 to 00fe93e7 has its CatchHandler @ 00ee9484 */
  *(uint *)(this + 0x6c) = uVar13;
  pvVar5 = operator_new__(uVar15 << 2);
                    /* try { // try from 00ee93e8 to 00fe951f has its CatchHandler @ 00ee935c */
  *(void **)(this + 0x70) = pvVar5;
  if (uVar13 == 0) {
    pfVar6 = operator_new__(0);
    goto LAB_00ee94dc;
  }
  if (uVar13 < 8) {
    uVar7 = 0;
LAB_00ee9454:
    do {
      *(int *)((long)pvVar5 + uVar7 * 4) = (int)uVar7;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar15);
  }
  else {
    uVar20 = 0x300000002;
    uVar18 = 0x100000000;
    uVar7 = uVar15 & 0xfffffff8;
    puVar11 = (undefined8 *)((long)pvVar5 + 0x10);
    uVar12 = uVar7;
    do {
      iVar19 = (int)((ulong)uVar18 >> 0x20);
      iVar4 = (int)((ulong)uVar20 >> 0x20);
      puVar11[-1] = uVar20;
      puVar11[-2] = uVar18;
      puVar11[1] = CONCAT44(iVar4 + 4,(int)uVar20 + 4);
      *puVar11 = CONCAT44(iVar19 + 4,(int)uVar18 + 4);
      uVar18 = CONCAT44(iVar19 + 8,(int)uVar18 + 8);
      uVar20 = CONCAT44(iVar4 + 8,(int)uVar20 + 8);
      uVar12 = uVar12 - 8;
      puVar11 = puVar11 + 4;
    } while (uVar12 != 0);
    if (uVar7 != uVar15) goto LAB_00ee9454;
  }
  if (-1 < (int)(uVar13 - 1)) {
    puVar16 = (undefined4 *)((long)pvVar5 + (long)(int)(uVar13 - 1) * 4);
    do {
      iVar4 = rand();
      iVar19 = 0;
      iVar14 = (int)uVar15;
      if (iVar14 != 0) {
        iVar19 = iVar4 / iVar14;
      }
      lVar8 = (ulong)(uint)(iVar4 - iVar19 * iVar14) * 4;
                    /* catch() { ... } // from try @ 00ee93e0 with catch @ 00ee9484 */
      uVar1 = *puVar16;
      uVar15 = (ulong)(iVar14 - 1U);
      *puVar16 = *(undefined4 *)((long)pvVar5 + lVar8);
      *(undefined4 *)((long)pvVar5 + lVar8) = uVar1;
      puVar16 = puVar16 + -1;
    } while (0 < (int)(iVar14 - 1U));
    uVar15 = (ulong)*(uint *)(this + 0x6c);
  }
  pfVar6 = operator_new__(uVar15 * 0x18);
  if ((int)uVar15 != 0) {
    pfVar9 = pfVar6;
    do {
                    /* catch() { ... } // from try @ 00ee93b0 with catch @ 00ee94c4 */
      pfVar9[0] = 0.0;
      pfVar9[1] = 0.0;
      pfVar9[2] = 0.0;
      pfVar9[3] = 0.0;
      Size::Size((Size *)(pfVar9 + 4));
      pfVar9 = pfVar9 + 6;
    } while (pfVar9 != pfVar6 + uVar15 * 6);
  }
LAB_00ee94dc:
  fVar21 = *(float *)(this + 0x58);
  *(float **)(this + 0x78) = pfVar6;
                    /* catch() { ... } // from try @ 00ee93a4 with catch @ 00ee94e4 */
  if (0.0 < fVar21) {
    fVar17 = *(float *)(this + 0x5c);
    iVar19 = 0;
    fVar22 = 0.0;
    do {
      if (0.0 < fVar17) {
        fVar21 = 0.0;
        iVar4 = 1;
        do {
                    /* try { // try from 00ee9520 to 00fe955b has its CatchHandler @ 00ee9520
                       catch() { ... } // from try @ 00ee9520 with catch @ 00ee9520
                       catch() { ... } // from try @ 00ee95a0 with catch @ 00ee9520 */
          *pfVar6 = fVar22;
          pfVar6[1] = fVar21;
          pfVar6[2] = fVar22;
          pfVar6[3] = fVar21;
          Size::Size((Size *)&local_58,fVar22,fVar21);
          uVar13 = *(uint *)(*(long *)(this + 0x70) +
                            (ulong)(uint)(int)(local_58 * *(float *)(this + 0x5c) + fStack_54) * 4);
          uVar10 = (uint)*(float *)(this + 0x5c);
          uVar2 = 0;
          if (uVar10 != 0) {
            uVar2 = uVar13 / uVar10;
          }
                    /* try { // try from 00ee955c to 00fe9567 has its CatchHandler @ 00ee967c */
                    /* try { // try from 00ee9568 to 00fe957b has its CatchHandler @ 00ee965c */
          Size::Size(aSStack_50,(float)(int)((float)uVar2 - local_58),
                     (float)(int)((float)(uVar13 - uVar2 * uVar10) - fStack_54));
          Size::operator=((Size *)(pfVar6 + 4),aSStack_50);
          fVar17 = *(float *)(this + 0x5c);
          fVar21 = (float)iVar4;
                    /* try { // try from 00ee9598 to 00fe959f has its CatchHandler @ 00ee9624 */
          pfVar6 = pfVar6 + 6;
          iVar4 = iVar4 + 1;
                    /* try { // try from 00ee95a0 to 00fe9697 has its CatchHandler @ 00ee9520 */
        } while (fVar21 < fVar17);
        fVar21 = *(float *)(this + 0x58);
      }
      iVar19 = iVar19 + 1;
                    /* catch() { ... } // from try @ 00ee9398 with catch @ 00ee9504 */
      fVar22 = (float)iVar19;
    } while (fVar22 < fVar21);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

