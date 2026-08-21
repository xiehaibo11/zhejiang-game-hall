
/* cocos2d::renderer::Particle3DAssembler::fillTrailBuffer(cocos2d::renderer::NodeProxy*,
   cocos2d::renderer::MeshBuffer*, cocos2d::renderer::Assembler::IARenderData const&,
   cocos2d::renderer::RenderData*) */

void __thiscall
cocos2d::renderer::Particle3DAssembler::fillTrailBuffer
          (Particle3DAssembler *this,NodeProxy *param_1,MeshBuffer *param_2,IARenderData *param_3,
          RenderData *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  short sVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  short *psVar16;
  undefined8 *puVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  uVar6 = *(uint *)(param_3 + 0x10);
  if ((int)uVar6 < 0) {
                    /* try { // try from 009d1228 to 00ad129f has its CatchHandler @ 009d0fe8 */
    uVar6 = 0;
    if (*(uint *)(this + 0x8c) != 0) {
      uVar6 = *(uint *)(param_4 + 8) / *(uint *)(this + 0x8c);
    }
                    /* catch() { ... } // from try @ 009d1068 with catch @ 009d1230 */
    uVar19 = *(uint *)(param_3 + 0x18);
  }
  else {
    uVar19 = *(uint *)(param_3 + 0x18);
  }
                    /* catch() { ... } // from try @ 009d105c with catch @ 009d1234 */
  if ((int)uVar19 < 0) {
                    /* catch() { ... } // from try @ 009d103c with catch @ 009d1238 */
    uVar19 = (uint)(*(ulong *)(param_4 + 0x10) >> 1) & 0x7fffffff;
  }
  iVar13 = *(int *)(param_3 + 0xc);
  puVar8 = (uint *)MeshBuffer::request(param_2,uVar6,uVar19);
  uVar4 = *puVar8;
  uVar5 = puVar8[1];
  uVar20 = (ulong)uVar5;
  lVar12 = *(long *)param_2;
  uVar7 = puVar8[2];
  lVar9 = RenderData::getVertices(param_4);
  memcpy((void *)(lVar12 + ((ulong)uVar4 & 0xfffffffc)),
         (void *)(lVar9 + (ulong)(uint)(*(int *)(this + 0x8c) * iVar13)),
         (ulong)(*(int *)(this + 0x8c) * uVar6));
  lVar9 = RenderData::getIndices(param_4);
  if (uVar19 == 0) {
    return;
  }
  lVar10 = *(long *)(param_2 + 8);
  lVar12 = (long)*(int *)(param_3 + 0x14);
  uVar3 = (ulong)(uVar19 - 1) + 1;
  sVar11 = (short)uVar7 - (short)iVar13;
  if ((0xf < uVar3) && (uVar19 - 1 <= ~uVar5)) {
    if ((lVar10 + ((uVar19 - 1) + uVar20) * 2 + 2 <= (ulong)(lVar9 + lVar12 * 2)) ||
       (lVar9 + lVar12 * 2 + (ulong)(uVar19 - 1) * 2 + 2 <= lVar10 + uVar20 * 2)) {
      uVar14 = uVar3 & 0x1fffffff0;
                    /* catch() { ... } // from try @ 009d1074 with catch @ 009d1248 */
      lVar1 = lVar12 * 2;
      lVar12 = uVar14 + lVar12;
      uVar15 = (ulong)(uVar5 + (int)uVar14);
      puVar17 = (undefined8 *)(lVar9 + lVar1 + 0x10);
      uVar18 = uVar14;
      do {
        uVar22 = puVar17[-1];
        uVar21 = puVar17[-2];
        uVar24 = puVar17[1];
        uVar23 = *puVar17;
        puVar2 = (undefined8 *)(lVar10 + uVar20 * 2);
        puVar17 = puVar17 + 4;
        uVar18 = uVar18 - 0x10;
        uVar20 = (ulong)((int)uVar20 + 0x10);
        puVar2[1] = CONCAT26((short)((ulong)uVar22 >> 0x30) + sVar11,
                             CONCAT24((short)((ulong)uVar22 >> 0x20) + sVar11,
                                      CONCAT22((short)((ulong)uVar22 >> 0x10) + sVar11,
                                               (short)uVar22 + sVar11)));
        *puVar2 = CONCAT26((short)((ulong)uVar21 >> 0x30) + sVar11,
                           CONCAT24((short)((ulong)uVar21 >> 0x20) + sVar11,
                                    CONCAT22((short)((ulong)uVar21 >> 0x10) + sVar11,
                                             (short)uVar21 + sVar11)));
        puVar2[3] = CONCAT26((short)((ulong)uVar24 >> 0x30) + sVar11,
                             CONCAT24((short)((ulong)uVar24 >> 0x20) + sVar11,
                                      CONCAT22((short)((ulong)uVar24 >> 0x10) + sVar11,
                                               (short)uVar24 + sVar11)));
        puVar2[2] = CONCAT26((short)((ulong)uVar23 >> 0x30) + sVar11,
                             CONCAT24((short)((ulong)uVar23 >> 0x20) + sVar11,
                                      CONCAT22((short)((ulong)uVar23 >> 0x10) + sVar11,
                                               (short)uVar23 + sVar11)));
      } while (uVar18 != 0);
      if (uVar3 == uVar14) {
        return;
      }
      goto LAB_009d11e4;
    }
  }
  uVar14 = 0;
  uVar15 = uVar20;
LAB_009d11e4:
  iVar13 = uVar19 - (int)uVar14;
  psVar16 = (short *)(lVar9 + lVar12 * 2);
  do {
    iVar13 = iVar13 + -1;
    *(short *)(lVar10 + uVar15 * 2) = *psVar16 + sVar11;
    uVar15 = (ulong)((int)uVar15 + 1);
    psVar16 = psVar16 + 1;
  } while (iVar13 != 0);
  return;
}

