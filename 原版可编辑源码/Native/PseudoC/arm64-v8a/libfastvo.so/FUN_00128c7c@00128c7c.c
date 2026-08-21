
ulong FUN_00128c7c(long param_1,ulong param_2,long param_3,int *param_4,long param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  undefined8 uVar27;
  
  lVar4 = *(long *)(param_1 + 0x40);
  lVar5 = *(long *)(param_1 + 0x48);
  lVar17 = (param_2 & 0xffffffff) * 4;
  iVar6 = *param_4;
  iVar18 = *(int *)(lVar4 + lVar17);
  iVar19 = *(int *)(lVar5 + lVar17);
  if (iVar18 < iVar6) {
    iVar8 = *(int *)(param_1 + 0x18);
    lVar20 = *(long *)(param_1 + 0x60);
    iVar2 = *(int *)(param_1 + 0x24);
    iVar3 = *(int *)(param_1 + 0x28);
    uVar7 = *(uint *)(param_1 + 0xc);
    iVar9 = *(int *)(param_1 + 0x7c);
    iVar10 = *param_6;
    uVar14 = 0;
    do {
      if ((long)iVar10 <= (long)uVar14) {
        uVar13 = uVar14 & 0xffffffff;
        break;
      }
      if (iVar8 < 1) {
        fVar24 = 0.0;
        fVar23 = 0.0;
        fVar22 = 0.0;
        fVar21 = 0.0;
      }
      else {
        lVar12 = 0;
        fVar21 = 0.0;
        fVar22 = 0.0;
        fVar23 = 0.0;
        fVar24 = 0.0;
        puVar15 = (undefined8 *)(param_3 + (long)iVar18 * 2);
        puVar16 = (undefined8 *)(lVar20 + (ulong)(uint)(iVar19 * iVar8) * 2);
        do {
          uVar25 = *puVar16;
          uVar27 = *puVar15;
          lVar12 = lVar12 + 4;
          auVar26._0_4_ = (int)(short)uVar27 * (int)(short)uVar25;
          auVar26._4_4_ = (int)(short)((ulong)uVar27 >> 0x10) * (int)(short)((ulong)uVar25 >> 0x10);
          auVar26._8_4_ = (int)(short)((ulong)uVar27 >> 0x20) * (int)(short)((ulong)uVar25 >> 0x20);
          auVar26._12_4_ = (int)(short)((ulong)uVar27 >> 0x30) * (int)(short)((ulong)uVar25 >> 0x30)
          ;
          auVar26 = NEON_scvtf(auVar26,4);
          fVar21 = fVar21 + auVar26._0_4_;
          fVar22 = fVar22 + auVar26._4_4_;
          fVar23 = fVar23 + auVar26._8_4_;
          fVar24 = fVar24 + auVar26._12_4_;
          puVar15 = puVar15 + 1;
          puVar16 = puVar16 + 1;
        } while (lVar12 < iVar8);
      }
      uVar1 = iVar19 + iVar3;
      uVar13 = uVar14 + 1;
      iVar18 = iVar18 + iVar2;
      *(short *)(param_5 + uVar14 * (long)iVar9 * 2) =
           (short)((int)(fVar24 + fVar23 + fVar22 + fVar21) + 0x4000U >> 0xf);
      uVar11 = 0;
      if (uVar7 <= uVar1) {
        iVar18 = iVar18 + 1;
        uVar11 = uVar7;
      }
      iVar19 = uVar1 - uVar11;
      uVar14 = uVar13;
    } while (iVar18 < iVar6);
  }
  else {
    uVar13 = 0;
  }
  *(int *)(lVar4 + lVar17) = iVar18;
  *(int *)(lVar5 + lVar17) = iVar19;
  return uVar13;
}

