
/* dtNavMesh::init(dtNavMeshParams const*) */

undefined4 __thiscall dtNavMesh::init(dtNavMesh *this,dtNavMeshParams *param_1)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  byte bVar7;
  byte bVar11;
  byte bVar12;
  uint uVar8;
  byte bVar13;
  byte bVar14;
  int iVar9;
  byte bVar15;
  byte bVar17;
  byte bVar18;
  uint uVar16;
  byte bVar19;
  byte bVar20;
  undefined8 uVar10;
  uint uVar21;
  undefined8 uVar22;
  uint uVar24;
  ulong uVar23;
  undefined8 uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  
  uVar10 = *(undefined8 *)(param_1 + 0xc);
  uVar25 = *(undefined8 *)(param_1 + 8);
  uVar22 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x14) = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)(this + 0xc) = uVar10;
  *(undefined8 *)(this + 8) = uVar25;
  *(undefined8 *)this = uVar22;
  uVar6 = 0x80000004;
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0xc);
  iVar1 = *(int *)(param_1 + 0x14);
  iVar9 = iVar1 + 3;
  if (-1 < iVar1) {
    iVar9 = iVar1;
  }
  uVar8 = (iVar9 >> 2) - 1;
  uVar8 = uVar8 | uVar8 >> 1;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  iVar9 = uVar8 + 1;
  if (uVar8 == 0xffffffff) {
    iVar9 = 1;
  }
  *(int *)(this + 0x30) = iVar1;
  *(int *)(this + 0x34) = iVar9;
  *(int *)(this + 0x38) = iVar9 + -1;
  lVar2 = dtAlloc(iVar1 * 0x68,0);
  *(long *)(this + 0x50) = lVar2;
  if (lVar2 != 0) {
    lVar2 = dtAlloc(*(int *)(this + 0x34) << 3,0);
    *(long *)(this + 0x40) = lVar2;
    if (lVar2 != 0) {
      memset(*(void **)(this + 0x50),0,(long)*(int *)(this + 0x30) * 0x68);
      memset(*(void **)(this + 0x40),0,(long)*(int *)(this + 0x34) << 3);
      lVar2 = (long)*(int *)(this + 0x30);
      *(undefined8 *)(this + 0x48) = 0;
      if (0 < *(int *)(this + 0x30)) {
        puVar3 = (undefined4 *)0x0;
        puVar5 = (undefined4 *)(*(long *)(this + 0x50) + lVar2 * 0x68);
        do {
          puVar4 = puVar5 + -0x1a;
          lVar2 = lVar2 + -1;
          *puVar4 = 1;
          *(undefined4 **)(puVar5 + -2) = puVar3;
          puVar3 = puVar4;
          puVar5 = puVar4;
        } while (0 < lVar2);
        *(undefined4 **)(this + 0x48) = puVar4;
      }
      uVar8 = (int)*(undefined8 *)(param_1 + 0x14) - 1;
      uVar16 = (int)((ulong)*(undefined8 *)(param_1 + 0x14) >> 0x20) - 1;
      uVar21 = uVar8 >> 1;
      uVar24 = uVar16 >> 1;
      bVar7 = (byte)uVar21 | (byte)uVar8;
      bVar11 = (byte)(uVar21 >> 8) | (byte)(uVar8 >> 8);
      bVar12 = (byte)(uVar21 >> 0x10) | (byte)(uVar8 >> 0x10);
      bVar14 = (byte)(uVar8 >> 0x18);
      bVar14 = bVar14 >> 1 | bVar14;
      uVar8 = CONCAT13(bVar14,CONCAT12(bVar12,CONCAT11(bVar11,bVar7)));
      bVar15 = (byte)uVar24 | (byte)uVar16;
      bVar17 = (byte)(uVar24 >> 8) | (byte)(uVar16 >> 8);
      bVar20 = (byte)(uVar16 >> 0x18);
      bVar18 = (byte)(uVar24 >> 0x10) | (byte)(uVar16 >> 0x10);
      bVar20 = bVar20 >> 1 | bVar20;
      uVar16 = uVar8 >> 2;
      uVar21 = (uint)(CONCAT17(bVar20,CONCAT16(bVar18,CONCAT15(bVar17,CONCAT14(bVar15,uVar8)))) >>
                     0x22);
      bVar7 = (byte)uVar16 | bVar7;
      bVar11 = (byte)(uVar16 >> 8) | bVar11;
      bVar12 = (byte)(uVar16 >> 0x10) | bVar12;
      bVar14 = bVar14 >> 2 | bVar14;
      uVar8 = CONCAT13(bVar14,CONCAT12(bVar12,CONCAT11(bVar11,bVar7)));
      bVar15 = (byte)uVar21 | bVar15;
      bVar17 = (byte)(uVar21 >> 8) | bVar17;
      bVar18 = (byte)(uVar21 >> 0x10) | bVar18;
      bVar20 = bVar20 >> 2 | bVar20;
      uVar16 = uVar8 >> 4;
      uVar21 = (uint)(CONCAT17(bVar20,CONCAT16(bVar18,CONCAT15(bVar17,CONCAT14(bVar15,uVar8)))) >>
                     0x24);
      bVar11 = (byte)(uVar16 >> 8) | bVar11;
      bVar12 = (byte)(uVar16 >> 0x10) | bVar12;
      bVar14 = bVar14 >> 4 | bVar14;
      bVar17 = (byte)(uVar21 >> 8) | bVar17;
      bVar18 = (byte)(uVar21 >> 0x10) | bVar18;
      bVar20 = bVar20 >> 4 | bVar20;
      bVar13 = bVar14 | bVar12;
      bVar19 = bVar20 | bVar18;
      iVar9 = CONCAT13(bVar14,CONCAT12(bVar13,CONCAT11(bVar14 | bVar12 | bVar11,
                                                       bVar13 | bVar11 | (byte)uVar16 | bVar7)));
      uVar8 = iVar9 + 1;
      uVar16 = (int)(CONCAT17(bVar20,CONCAT16(bVar19,CONCAT15(bVar20 | bVar18 | bVar17,
                                                              CONCAT14(bVar19 | bVar17 | (byte)
                                                  uVar21 | bVar15,iVar9)))) >> 0x20) + 1;
      uVar23 = CONCAT44(-(uint)(0xffff < uVar16),-(uint)(0xffff < uVar8)) & 0x1000000010;
      uVar10 = NEON_ushl(CONCAT44(uVar16,uVar8),CONCAT44(-(int)(uVar23 >> 0x20),-(int)uVar23),4);
      uVar26 = CONCAT44(-(uint)(0xff < (uint)((ulong)uVar10 >> 0x20)),-(uint)(0xff < (uint)uVar10))
               & 0x800000008;
      uVar10 = NEON_ushl(uVar10,CONCAT44(-(int)(uVar26 >> 0x20),-(int)uVar26),4);
      uVar27 = CONCAT44(-(uint)(0xf < (uint)((ulong)uVar10 >> 0x20)),-(uint)(0xf < (uint)uVar10)) &
               0x400000004;
      uVar10 = NEON_ushl(uVar10,CONCAT44(-(int)(uVar27 >> 0x20),-(int)uVar27),4);
      uVar28 = CONCAT44(-(uint)(3 < (uint)((ulong)uVar10 >> 0x20)),-(uint)(3 < (uint)uVar10)) &
               0x200000002;
      uVar10 = NEON_ushl(uVar10,CONCAT44(-(int)(uVar28 >> 0x20),-(int)uVar28),4);
      uVar8 = (uint)uVar10 >> 1;
      uVar16 = (uint)((ulong)uVar10 >> 0x21);
      iVar9 = CONCAT13((byte)((ulong)uVar10 >> 0x18) >> 1,
                       CONCAT12((char)(uVar8 >> 0x10),
                                CONCAT11((char)(uVar8 >> 8),
                                         (byte)uVar26 | (byte)uVar23 | (byte)uVar27 | (byte)uVar28 |
                                         (byte)uVar8)));
      uVar10 = CONCAT17((byte)((ulong)uVar10 >> 0x39),
                        CONCAT16((char)((uint3)((ulong)uVar10 >> 0x29) >> 8),
                                 CONCAT15((char)(uVar16 >> 8),
                                          CONCAT14((byte)(uVar26 >> 0x20) | (byte)(uVar23 >> 0x20) |
                                                   (byte)(uVar27 >> 0x20) | (byte)(uVar28 >> 0x20) |
                                                   (byte)uVar16,iVar9))));
      uVar8 = 0x20 - (iVar9 + (int)((ulong)uVar10 >> 0x20));
      if (0x1e < uVar8) {
        uVar8 = 0x1f;
      }
      uVar6 = 0x80000008;
      *(uint *)(this + 0x58) = uVar8;
      if (9 < uVar8) {
        uVar6 = 0x40000000;
      }
      *(undefined8 *)(this + 0x5c) = uVar10;
    }
  }
  return uVar6;
}

