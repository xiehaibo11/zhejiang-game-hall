
/* spine::SkeletonTwoColorBatch::batch(spine::TwoColorTrianglesCommand*) */

void __thiscall
spine::SkeletonTwoColorBatch::batch(SkeletonTwoColorBatch *this,TwoColorTrianglesCommand *param_1)

{
  Vec3 *pVVar1;
  short sVar2;
  TwoColorTrianglesCommand *pTVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  short *psVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  uVar4 = *(uint *)(this + 0x70);
  iVar5 = *(int *)(param_1 + 0x80);
  if ((0x7c < iVar5 + uVar4 >> 9) ||
     (0x7c < (uint)(*(int *)(param_1 + 0x84) + *(int *)(this + 0x78)) >> 9)) {
    flush(this,*(TwoColorTrianglesCommand **)(this + 0x98));
    uVar4 = *(uint *)(this + 0x70);
    iVar5 = *(int *)(param_1 + 0x80);
  }
  memcpy((void *)(*(long *)(this + 0x68) + (ulong)uVar4 * 0x1c),*(void **)(param_1 + 0x70),
         (long)iVar5 * 0x1c);
  uVar15 = *(uint *)(this + 0x70);
  uVar4 = *(int *)(param_1 + 0x80) + uVar15;
  if (uVar15 < uVar4) {
    lVar16 = (long)(int)uVar15 * 0x1c;
    uVar14 = uVar15;
    do {
      pVVar1 = (Vec3 *)(*(long *)(this + 0x68) + lVar16);
      cocos2d::Mat4::transformVector
                ((Mat4 *)(param_1 + 0x88),*(float *)pVVar1,*(float *)(pVVar1 + 4),
                 *(float *)(pVVar1 + 8),1.0,pVVar1);
      uVar15 = *(uint *)(this + 0x70);
      uVar14 = uVar14 + 1;
      lVar16 = lVar16 + 0x1c;
      uVar4 = *(int *)(param_1 + 0x80) + uVar15;
    } while (uVar14 < uVar4);
  }
  uVar14 = *(uint *)(param_1 + 0x84);
  uVar6 = (ulong)(int)uVar14;
  iVar5 = *(int *)(this + 0x78);
  lVar16 = (long)iVar5;
  if (0 < (int)uVar14) {
    uVar7 = *(ulong *)(param_1 + 0x78);
    lVar8 = *(long *)(this + 0x80);
    sVar2 = (short)uVar15;
    if ((uVar14 < 0x10) ||
       ((uVar13 = lVar8 + lVar16 * 2, uVar13 < uVar7 + uVar6 * 2 &&
        (uVar7 < lVar8 + (uVar6 + lVar16) * 2)))) {
      uVar10 = 0;
    }
    else {
      uVar10 = uVar6 & 0xfffffffffffffff0;
      puVar11 = (undefined8 *)(uVar13 + 0x10);
      lVar16 = uVar10 + lVar16;
      puVar12 = (undefined8 *)(uVar7 + 0x10);
      uVar13 = uVar10;
      do {
        uVar18 = puVar12[-1];
        uVar17 = puVar12[-2];
        uVar20 = puVar12[1];
        uVar19 = *puVar12;
        uVar13 = uVar13 - 0x10;
        puVar12 = puVar12 + 4;
        puVar11[-1] = CONCAT26((short)((ulong)uVar18 >> 0x30) + sVar2,
                               CONCAT24((short)((ulong)uVar18 >> 0x20) + sVar2,
                                        CONCAT22((short)((ulong)uVar18 >> 0x10) + sVar2,
                                                 (short)uVar18 + sVar2)));
        puVar11[-2] = CONCAT26((short)((ulong)uVar17 >> 0x30) + sVar2,
                               CONCAT24((short)((ulong)uVar17 >> 0x20) + sVar2,
                                        CONCAT22((short)((ulong)uVar17 >> 0x10) + sVar2,
                                                 (short)uVar17 + sVar2)));
        puVar11[1] = CONCAT26((short)((ulong)uVar20 >> 0x30) + sVar2,
                              CONCAT24((short)((ulong)uVar20 >> 0x20) + sVar2,
                                       CONCAT22((short)((ulong)uVar20 >> 0x10) + sVar2,
                                                (short)uVar20 + sVar2)));
        *puVar11 = CONCAT26((short)((ulong)uVar19 >> 0x30) + sVar2,
                            CONCAT24((short)((ulong)uVar19 >> 0x20) + sVar2,
                                     CONCAT22((short)((ulong)uVar19 >> 0x10) + sVar2,
                                              (short)uVar19 + sVar2)));
        puVar11 = puVar11 + 4;
      } while (uVar13 != 0);
      if (uVar10 == uVar6) goto LAB_00d536f0;
    }
    psVar9 = (short *)(lVar8 + lVar16 * 2);
    do {
      lVar16 = uVar10 * 2;
      uVar10 = uVar10 + 1;
      *psVar9 = *(short *)(uVar7 + lVar16) + sVar2;
      psVar9 = psVar9 + 1;
    } while ((long)uVar10 < (long)uVar6);
  }
LAB_00d536f0:
  pTVar3 = *(TwoColorTrianglesCommand **)(this + 0x98);
  *(uint *)(this + 0x70) = uVar4;
  *(uint *)(this + 0x78) = uVar14 + iVar5;
  if (((pTVar3 != (TwoColorTrianglesCommand *)0x0) &&
      (*(int *)(pTVar3 + 0x50) != *(int *)(param_1 + 0x50))) ||
     (param_1[0xcc] != (TwoColorTrianglesCommand)0x0)) {
    flush(this,pTVar3);
  }
  *(TwoColorTrianglesCommand **)(this + 0x98) = param_1;
  return;
}

