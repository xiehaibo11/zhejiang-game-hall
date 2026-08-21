
/* cocos2d::renderer::Assembler::fillBuffers(cocos2d::renderer::NodeProxy*,
   cocos2d::renderer::ModelBatcher*, unsigned long) */

void __thiscall
cocos2d::renderer::Assembler::fillBuffers
          (Assembler *this,NodeProxy *param_1,ModelBatcher *param_2,ulong param_3)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  void *__dest;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  short sVar9;
  MeshBuffer *this_00;
  RenderData *this_01;
  uint *puVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  short *psVar17;
  undefined8 *puVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  Mat4 *this_02;
  Vec3 *this_03;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  if (*(long *)(this + 0x38) == 0) {
    return;
  }
  if (*(VertexFormat **)(this + 0x70) == (VertexFormat *)0x0) {
    return;
  }
  this_00 = (MeshBuffer *)ModelBatcher::getBuffer(param_2,*(VertexFormat **)(this + 0x70));
  lVar15 = *(long *)(this + 0x40);
  lVar11 = lVar15 + param_3 * 0x20;
  iVar13 = *(int *)(lVar11 + 8);
  uVar22 = (long)iVar13;
  if (iVar13 < 0) {
    uVar22 = param_3;
  }
  this_01 = (RenderData *)RenderDataList::getRenderData(*(RenderDataList **)(this + 0x38),uVar22);
  if (this_01 == (RenderData *)0x0) {
    return;
  }
  uVar21 = *(uint *)(lVar11 + 0x10);
  if ((int)uVar21 < 0) {
    uVar21 = 0;
    if (*(uint *)(this + 0x58) != 0) {
      uVar21 = *(uint *)(this_01 + 8) / *(uint *)(this + 0x58);
    }
  }
  lVar11 = lVar15 + param_3 * 0x20;
  uVar20 = *(uint *)(lVar11 + 0x18);
  if ((int)uVar20 < 0) {
    uVar20 = (uint)(*(ulong *)(this_01 + 0x10) >> 1) & 0x7fffffff;
  }
  iVar13 = *(int *)(lVar11 + 0xc);
  puVar10 = (uint *)MeshBuffer::request(this_00,uVar21,uVar20);
  uVar5 = puVar10[2];
  uVar4 = puVar10[1];
  uVar22 = (ulong)uVar4;
  iVar6 = *(int *)(*(long *)(this + 0x78) + 0x28);
  __dest = (void *)(*(long *)this_00 + ((ulong)*puVar10 & 0xfffffffc));
  lVar11 = RenderData::getVertices(this_01);
  memcpy(__dest,(void *)(lVar11 + (ulong)(uint)(*(int *)(this + 0x58) * iVar13)),
         (ulong)(*(int *)(this + 0x58) * uVar21));
  if ((this[0x28] == (Assembler)0x0) && (this[0x88] == (Assembler)0x0)) {
                    /* try { // try from 009cde70 to 00acde83 has its CatchHandler @ 009cdee0 */
    uVar7 = *(uint *)(this + 0x58);
    this_02 = *(Mat4 **)(param_1 + 0x98);
    this_03 = (Vec3 *)((long)__dest + *(long *)(this + 0x60) * 4);
                    /* try { // try from 009cde8c to 00acde97 has its CatchHandler @ 009cdf0c */
    if (iVar6 == 3) {
      for (; uVar21 != 0; uVar21 = uVar21 - 1) {
        Vec3::transformMat4(this_03,this_03,this_02);
        this_03 = this_03 + (ulong)(uVar7 >> 2) * 4;
      }
    }
    else {
                    /* try { // try from 009cde98 to 00acdeab has its CatchHandler @ 009cdedc */
      if ((iVar6 == 2) && (uVar21 != 0)) {
        do {
          uVar8 = *(undefined4 *)(this_03 + 8);
                    /* try { // try from 009cdebc to 00acdec7 has its CatchHandler @ 009cdf0c */
          *(undefined4 *)(this_03 + 8) = 0;
          Mat4::transformVector(this_02,*(float *)this_03,*(float *)(this_03 + 4),0.0,1.0,this_03);
          *(undefined4 *)(this_03 + 8) = uVar8;
                    /* try { // try from 009cdec8 to 00acdf63 has its CatchHandler @ 009cdb0c */
          uVar21 = uVar21 - 1;
          this_03 = this_03 + (ulong)(uVar7 >> 2) * 4;
        } while (uVar21 != 0);
      }
    }
  }
  lVar11 = RenderData::getIndices(this_01);
  if (uVar20 == 0) {
    return;
  }
  lVar15 = (long)*(int *)(lVar15 + param_3 * 0x20 + 0x14);
  uVar3 = (ulong)(uVar20 - 1) + 1;
  lVar12 = *(long *)(this_00 + 8);
  sVar9 = (short)uVar5 - (short)iVar13;
  if ((0xf < uVar3) && (uVar20 - 1 <= ~uVar4)) {
    if ((lVar12 + ((uVar20 - 1) + uVar22) * 2 + 2 <= (ulong)(lVar11 + lVar15 * 2)) ||
       (lVar11 + lVar15 * 2 + (ulong)(uVar20 - 1) * 2 + 2 <= lVar12 + uVar22 * 2)) {
      uVar14 = uVar3 & 0x1fffffff0;
                    /* catch() { ... } // from try @ 009cde98 with catch @ 009cdedc */
      lVar1 = lVar15 * 2;
                    /* catch() { ... } // from try @ 009cde70 with catch @ 009cdee0 */
                    /* catch() { ... } // from try @ 009cde48 with catch @ 009cdee4 */
      lVar15 = uVar14 + lVar15;
      uVar16 = (ulong)(uVar4 + (int)uVar14);
      puVar18 = (undefined8 *)(lVar11 + lVar1 + 0x10);
      uVar19 = uVar14;
      do {
                    /* catch() { ... } // from try @ 009cdb90 with catch @ 009cdef4 */
        uVar24 = puVar18[-1];
        uVar23 = puVar18[-2];
        uVar26 = puVar18[1];
        uVar25 = *puVar18;
                    /* catch() { ... } // from try @ 009cdb84 with catch @ 009cdef8 */
        puVar2 = (undefined8 *)(lVar12 + uVar22 * 2);
                    /* catch() { ... } // from try @ 009cdb64 with catch @ 009cdefc */
        puVar18 = puVar18 + 4;
        uVar19 = uVar19 - 0x10;
                    /* catch() { ... } // from try @ 009cdb9c with catch @ 009cdf0c
                       catch() { ... } // from try @ 009cde68 with catch @ 009cdf0c
                       catch() { ... } // from try @ 009cde8c with catch @ 009cdf0c
                       catch() { ... } // from try @ 009cdebc with catch @ 009cdf0c */
        uVar22 = (ulong)((int)uVar22 + 0x10);
        puVar2[1] = CONCAT26((short)((ulong)uVar24 >> 0x30) + sVar9,
                             CONCAT24((short)((ulong)uVar24 >> 0x20) + sVar9,
                                      CONCAT22((short)((ulong)uVar24 >> 0x10) + sVar9,
                                               (short)uVar24 + sVar9)));
        *puVar2 = CONCAT26((short)((ulong)uVar23 >> 0x30) + sVar9,
                           CONCAT24((short)((ulong)uVar23 >> 0x20) + sVar9,
                                    CONCAT22((short)((ulong)uVar23 >> 0x10) + sVar9,
                                             (short)uVar23 + sVar9)));
        puVar2[3] = CONCAT26((short)((ulong)uVar26 >> 0x30) + sVar9,
                             CONCAT24((short)((ulong)uVar26 >> 0x20) + sVar9,
                                      CONCAT22((short)((ulong)uVar26 >> 0x10) + sVar9,
                                               (short)uVar26 + sVar9)));
        puVar2[2] = CONCAT26((short)((ulong)uVar25 >> 0x30) + sVar9,
                             CONCAT24((short)((ulong)uVar25 >> 0x20) + sVar9,
                                      CONCAT22((short)((ulong)uVar25 >> 0x10) + sVar9,
                                               (short)uVar25 + sVar9)));
      } while (uVar19 != 0);
      if (uVar3 == uVar14) {
        return;
      }
      goto LAB_009cde28;
    }
  }
  uVar14 = 0;
  uVar16 = uVar22;
LAB_009cde28:
  iVar13 = uVar20 - (int)uVar14;
  psVar17 = (short *)(lVar11 + lVar15 * 2);
  do {
    iVar13 = iVar13 + -1;
    *(short *)(lVar12 + uVar16 * 2) = *psVar17 + sVar9;
    uVar16 = (ulong)((int)uVar16 + 1);
    psVar17 = psVar17 + 1;
                    /* try { // try from 009cde48 to 00acde5b has its CatchHandler @ 009cdee4 */
  } while (iVar13 != 0);
                    /* try { // try from 009cde68 to 00acde6f has its CatchHandler @ 009cdf0c */
  return;
}

