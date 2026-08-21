
/* cocos2d::renderer::AssemblerSprite::fillBuffers(cocos2d::renderer::NodeProxy*,
   cocos2d::renderer::ModelBatcher*, unsigned long) */

void __thiscall
cocos2d::renderer::AssemblerSprite::fillBuffers
          (AssemblerSprite *this,NodeProxy *param_1,ModelBatcher *param_2,ulong param_3)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  MeshBuffer *this_00;
  RenderData *this_01;
  uint *puVar7;
  long lVar8;
  long lVar9;
  short sVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  short *psVar15;
  undefined8 *puVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  if (*(long *)(this + 0x38) == 0) {
    return;
  }
  if (*(VertexFormat **)(this + 0x70) == (VertexFormat *)0x0) {
    return;
  }
  if ((ulong)(*(long *)(this + 0x48) - *(long *)(this + 0x40) >> 5) <= param_3) {
    return;
  }
  this_00 = (MeshBuffer *)ModelBatcher::getBuffer(param_2,*(VertexFormat **)(this + 0x70));
  lVar13 = *(long *)(this + 0x40);
  lVar8 = lVar13 + param_3 * 0x20;
  iVar11 = *(int *)(lVar8 + 8);
  uVar20 = (long)iVar11;
  if (iVar11 < 0) {
    uVar20 = param_3;
  }
  this_01 = (RenderData *)RenderDataList::getRenderData(*(RenderDataList **)(this + 0x38),uVar20);
  if (this_01 == (RenderData *)0x0) {
    return;
  }
  uVar19 = *(uint *)(lVar8 + 0x10);
  if ((int)uVar19 < 0) {
    uVar19 = 0;
    if (*(uint *)(this + 0x58) != 0) {
      uVar19 = *(uint *)(this_01 + 8) / *(uint *)(this + 0x58);
    }
  }
  lVar8 = lVar13 + param_3 * 0x20;
  uVar18 = *(uint *)(lVar8 + 0x18);
  if ((int)uVar18 < 0) {
    uVar18 = (uint)(*(ulong *)(this_01 + 0x10) >> 1) & 0x7fffffff;
  }
  iVar11 = *(int *)(lVar8 + 0xc);
  puVar7 = (uint *)MeshBuffer::request(this_00,uVar19,uVar18);
  uVar4 = *puVar7;
  uVar5 = puVar7[1];
  uVar20 = (ulong)uVar5;
  uVar6 = puVar7[2];
  if (((**(byte **)(this + 0x18) >> 1 & 1) != 0) || (**(uint **)(param_1 + 0x80) >> 0x1e != 0)) {
    (**(code **)(*(long *)this + 0x68))(this);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(param_1 + 0x98));
  }
  lVar9 = *(long *)this_00;
  lVar8 = RenderData::getVertices(this_01);
  memcpy((void *)(lVar9 + (ulong)(uVar4 >> 2) * 4),
         (void *)(lVar8 + (ulong)(uint)(*(int *)(this + 0x58) * iVar11)),
         (ulong)(*(int *)(this + 0x58) * uVar19));
  lVar8 = RenderData::getIndices(this_01);
  if (uVar18 == 0) {
    return;
  }
  lVar13 = (long)*(int *)(lVar13 + param_3 * 0x20 + 0x14);
  uVar3 = (ulong)(uVar18 - 1) + 1;
  lVar9 = *(long *)(this_00 + 8);
  sVar10 = (short)uVar6 - (short)iVar11;
  if ((0xf < uVar3) && (uVar18 - 1 <= ~uVar5)) {
    if ((lVar9 + ((uVar18 - 1) + uVar20) * 2 + 2 <= (ulong)(lVar8 + lVar13 * 2)) ||
       (lVar8 + lVar13 * 2 + (ulong)(uVar18 - 1) * 2 + 2 <= lVar9 + uVar20 * 2)) {
      uVar12 = uVar3 & 0x1fffffff0;
      lVar1 = lVar13 * 2;
      lVar13 = uVar12 + lVar13;
      uVar14 = (ulong)(uVar5 + (int)uVar12);
      puVar16 = (undefined8 *)(lVar8 + lVar1 + 0x10);
      uVar17 = uVar12;
      do {
        uVar22 = puVar16[-1];
        uVar21 = puVar16[-2];
        uVar24 = puVar16[1];
        uVar23 = *puVar16;
        puVar2 = (undefined8 *)(lVar9 + uVar20 * 2);
        puVar16 = puVar16 + 4;
        uVar17 = uVar17 - 0x10;
        uVar20 = (ulong)((int)uVar20 + 0x10);
        puVar2[1] = CONCAT26((short)((ulong)uVar22 >> 0x30) + sVar10,
                             CONCAT24((short)((ulong)uVar22 >> 0x20) + sVar10,
                                      CONCAT22((short)((ulong)uVar22 >> 0x10) + sVar10,
                                               (short)uVar22 + sVar10)));
        *puVar2 = CONCAT26((short)((ulong)uVar21 >> 0x30) + sVar10,
                           CONCAT24((short)((ulong)uVar21 >> 0x20) + sVar10,
                                    CONCAT22((short)((ulong)uVar21 >> 0x10) + sVar10,
                                             (short)uVar21 + sVar10)));
        puVar2[3] = CONCAT26((short)((ulong)uVar24 >> 0x30) + sVar10,
                             CONCAT24((short)((ulong)uVar24 >> 0x20) + sVar10,
                                      CONCAT22((short)((ulong)uVar24 >> 0x10) + sVar10,
                                               (short)uVar24 + sVar10)));
        puVar2[2] = CONCAT26((short)((ulong)uVar23 >> 0x30) + sVar10,
                             CONCAT24((short)((ulong)uVar23 >> 0x20) + sVar10,
                                      CONCAT22((short)((ulong)uVar23 >> 0x10) + sVar10,
                                               (short)uVar23 + sVar10)));
      } while (uVar17 != 0);
      if (uVar3 == uVar12) {
        return;
      }
      goto LAB_009d00c0;
    }
  }
  uVar12 = 0;
  uVar14 = uVar20;
LAB_009d00c0:
  iVar11 = uVar18 - (int)uVar12;
  psVar15 = (short *)(lVar8 + lVar13 * 2);
  do {
    iVar11 = iVar11 + -1;
    *(short *)(lVar9 + uVar14 * 2) = *psVar15 + sVar10;
    uVar14 = (ulong)((int)uVar14 + 1);
    psVar15 = psVar15 + 1;
  } while (iVar11 != 0);
  return;
}

