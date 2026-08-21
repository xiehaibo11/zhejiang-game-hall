
/* cocos2d::Renderer::fillVerticesAndIndices(cocos2d::TrianglesCommand const*) */

void __thiscall cocos2d::Renderer::fillVerticesAndIndices(Renderer *this,TrianglesCommand *param_1)

{
  Renderer *pRVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  int iVar6;
  ulong uVar7;
  Renderer *pRVar8;
  ulong uVar9;
  long lVar10;
  Renderer *pRVar11;
  Renderer *pRVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  pRVar1 = this + 0x1b0090;
  memcpy(this + (long)*(int *)pRVar1 * 0x18 + 0x78,*(void **)(param_1 + 0x30),
         (long)*(int *)(param_1 + 0x40) * 0x18);
  iVar6 = *(int *)(param_1 + 0x40);
  if (0 < iVar6) {
    lVar14 = 0;
    do {
      lVar10 = lVar14 + *(int *)pRVar1;
      Mat4::transformVector
                ((Mat4 *)(param_1 + 0x48),*(float *)(this + lVar10 * 0x18 + 0x78),
                 *(float *)(this + lVar10 * 0x18 + 0x7c),*(float *)(this + lVar10 * 0x18 + 0x80),1.0
                 ,(Vec3 *)(this + lVar10 * 0x18 + 0x78));
      iVar6 = *(int *)(param_1 + 0x40);
      lVar14 = lVar14 + 1;
    } while (lVar14 < iVar6);
  }
  uVar4 = *(uint *)(param_1 + 0x44);
  uVar7 = (ulong)(int)uVar4;
  iVar2 = *(int *)pRVar1;
  iVar3 = *(int *)(this + 0x1b0094);
  lVar14 = (long)iVar3;
  if ((int)uVar4 < 1) goto LAB_00fe5964;
  pRVar8 = *(Renderer **)(param_1 + 0x38);
  sVar5 = (short)iVar2;
  if (uVar4 < 0x10) {
LAB_00fe593c:
    uVar9 = 0;
  }
  else {
    if ((this + lVar14 * 2 + 0x180078 < pRVar8 + uVar7 * 2) &&
       (pRVar8 < this + uVar7 * 2 + lVar14 * 2 + 0x180078)) goto LAB_00fe593c;
    uVar9 = uVar7 & 0xfffffffffffffff0;
    pRVar11 = pRVar8 + 0x10;
    pRVar12 = this + lVar14 * 2 + 0x180088;
    uVar13 = uVar9;
    do {
      uVar16 = *(undefined8 *)(pRVar11 + -8);
      uVar15 = *(undefined8 *)(pRVar11 + -0x10);
      uVar18 = *(undefined8 *)(pRVar11 + 8);
      uVar17 = *(undefined8 *)pRVar11;
      pRVar11 = pRVar11 + 0x20;
      uVar13 = uVar13 - 0x10;
      *(ulong *)(pRVar12 + -8) =
           CONCAT26((short)((ulong)uVar16 >> 0x30) + sVar5,
                    CONCAT24((short)((ulong)uVar16 >> 0x20) + sVar5,
                             CONCAT22((short)((ulong)uVar16 >> 0x10) + sVar5,(short)uVar16 + sVar5))
                   );
      *(ulong *)(pRVar12 + -0x10) =
           CONCAT26((short)((ulong)uVar15 >> 0x30) + sVar5,
                    CONCAT24((short)((ulong)uVar15 >> 0x20) + sVar5,
                             CONCAT22((short)((ulong)uVar15 >> 0x10) + sVar5,(short)uVar15 + sVar5))
                   );
      *(ulong *)(pRVar12 + 8) =
           CONCAT26((short)((ulong)uVar18 >> 0x30) + sVar5,
                    CONCAT24((short)((ulong)uVar18 >> 0x20) + sVar5,
                             CONCAT22((short)((ulong)uVar18 >> 0x10) + sVar5,(short)uVar18 + sVar5))
                   );
      *(ulong *)pRVar12 =
           CONCAT26((short)((ulong)uVar17 >> 0x30) + sVar5,
                    CONCAT24((short)((ulong)uVar17 >> 0x20) + sVar5,
                             CONCAT22((short)((ulong)uVar17 >> 0x10) + sVar5,(short)uVar17 + sVar5))
                   );
      pRVar12 = pRVar12 + 0x20;
    } while (uVar13 != 0);
    if (uVar9 == uVar7) goto LAB_00fe5964;
  }
  do {
    lVar10 = uVar9 * 2;
    uVar9 = uVar9 + 1;
    *(short *)(this + lVar10 + lVar14 * 2 + 0x180078) = *(short *)(pRVar8 + lVar10) + sVar5;
  } while ((long)uVar9 < (long)uVar7);
LAB_00fe5964:
  *(int *)pRVar1 = iVar2 + iVar6;
  *(uint *)(this + 0x1b0094) = iVar3 + uVar4;
  return;
}

