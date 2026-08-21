
void FUN_0114f014(long param_1,uint param_2)

{
  undefined1 (*pauVar1) [12];
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auVar10 [16];
  int iVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  uint *puVar16;
  undefined1 (*pauVar17) [12];
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  ulong uVar32;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar33;
  
  if (0 < (int)param_2) {
    if (param_2 < 8) {
      lVar15 = 0;
    }
    else {
      lVar15 = (ulong)param_2 - (ulong)(param_2 & 7);
      if (lVar15 != 0) {
        pauVar17 = (undefined1 (*) [12])(param_1 + 0x10);
        lVar14 = lVar15;
        do {
          pauVar1 = (undefined1 (*) [12])(pauVar17[-2] + 8);
          uVar34 = *(ulong *)(pauVar17[-1] + 4);
          uVar18 = (undefined4)(uVar34 >> 0x20);
          uVar33 = *(ulong *)*pauVar1;
          uVar36 = *(ulong *)(*pauVar17 + 8);
          uVar19 = (undefined4)(uVar36 >> 0x20);
          uVar35 = *(ulong *)*pauVar17;
          auVar20._8_8_ = 0xff00ff00ff00ff;
          auVar20._0_8_ = 0xff00ff00ff00ff;
          auVar22._8_8_ = 0xff00ff00ff00ff;
          auVar22._0_8_ = 0xff00ff00ff00ff;
          lVar14 = lVar14 + -8;
          bVar24 = (byte)(uVar33 >> 8);
          bVar25 = (byte)(uVar33 >> 0x28);
          bVar26 = (byte)(uVar34 >> 8);
          bVar27 = (byte)(uVar34 >> 0x28);
          bVar28 = (byte)(uVar35 >> 8);
          bVar29 = (byte)(uVar35 >> 0x28);
          bVar30 = (byte)(uVar36 >> 8);
          bVar31 = (byte)(uVar36 >> 0x28);
          uVar32 = uVar33 & 0xffffffffffff00ff;
          uVar33 = CONCAT44((int)(uVar32 >> 0x20),CONCAT22((short)(uVar33 >> 0x10),(short)uVar32)) &
                   0xffffffff00ffffff;
          uVar33 = CONCAT26((short)(uVar33 >> 0x30),CONCAT24((short)(uVar32 >> 0x20),(int)uVar33)) &
                   0xff00ffffffffff;
          uVar32 = uVar34 & 0xffffffffffff00ff;
          uVar34 = CONCAT44((int)(uVar32 >> 0x20),CONCAT22((short)(uVar34 >> 0x10),(short)uVar32)) &
                   0xffffffff00ffffff;
          uVar34 = CONCAT26((short)(uVar34 >> 0x30),CONCAT24((short)(uVar32 >> 0x20),(int)uVar34)) &
                   0xff00ffffffffff;
          uVar32 = uVar35 & 0xffffffffffff00ff;
          uVar35 = CONCAT44((int)(uVar32 >> 0x20),CONCAT22((short)(uVar35 >> 0x10),(short)uVar32)) &
                   0xffffffff00ffffff;
          uVar35 = CONCAT26((short)(uVar35 >> 0x30),CONCAT24((short)(uVar32 >> 0x20),(int)uVar35)) &
                   0xff00ffffffffff;
          uVar32 = uVar36 & 0xffffffffffff00ff;
          uVar36 = CONCAT44((int)(uVar32 >> 0x20),CONCAT22((short)(uVar36 >> 0x10),(short)uVar32)) &
                   0xffffffff00ffffff;
          uVar36 = CONCAT26((short)(uVar36 >> 0x30),CONCAT24((short)(uVar32 >> 0x20),(int)uVar36)) &
                   0xff00ffffffffff;
          iVar7 = (uint)CONCAT12(bVar25,(ushort)bVar25) + (int)(uVar33 >> 0x20);
          iVar8 = (uint)CONCAT12(bVar26,(ushort)bVar26) + (int)uVar34;
          iVar9 = (uint)CONCAT12(bVar27,(ushort)bVar27) + (int)(uVar34 >> 0x20);
          iVar11 = (uint)CONCAT12(bVar29,(ushort)bVar29) + (int)(uVar35 >> 0x20);
          iVar12 = (uint)CONCAT12(bVar30,(ushort)bVar30) + (int)uVar36;
          iVar13 = (uint)CONCAT12(bVar31,(ushort)bVar31) + (int)(uVar36 >> 0x20);
          auVar4._12_4_ = uVar18;
          auVar4._0_12_ = *pauVar1;
          auVar6[4] = (char)iVar7;
          auVar6._0_4_ = (uint)CONCAT12(bVar24,(ushort)bVar24) + (int)uVar33;
          auVar6[5] = (char)((uint)iVar7 >> 8);
          auVar6[6] = (char)((uint)iVar7 >> 0x10);
          auVar6[7] = (char)((uint)iVar7 >> 0x18);
          auVar6[8] = (char)iVar8;
          auVar6[9] = (char)((uint)iVar8 >> 8);
          auVar6[10] = (char)((uint)iVar8 >> 0x10);
          auVar6[0xb] = (char)((uint)iVar8 >> 0x18);
          auVar6[0xc] = (char)iVar9;
          auVar6[0xd] = (char)((uint)iVar9 >> 8);
          auVar6[0xe] = (char)((uint)iVar9 >> 0x10);
          auVar6[0xf] = (char)((uint)iVar9 >> 0x18);
          auVar21._12_4_ = uVar18;
          auVar21._0_12_ = *pauVar1;
          auVar21 = auVar21 ^ (auVar4 ^ auVar6) & auVar20;
          auVar5._12_4_ = uVar19;
          auVar5._0_12_ = *pauVar17;
          auVar10[4] = (char)iVar11;
          auVar10._0_4_ = (uint)CONCAT12(bVar28,(ushort)bVar28) + (int)uVar35;
          auVar10[5] = (char)((uint)iVar11 >> 8);
          auVar10[6] = (char)((uint)iVar11 >> 0x10);
          auVar10[7] = (char)((uint)iVar11 >> 0x18);
          auVar10[8] = (char)iVar12;
          auVar10[9] = (char)((uint)iVar12 >> 8);
          auVar10[10] = (char)((uint)iVar12 >> 0x10);
          auVar10[0xb] = (char)((uint)iVar12 >> 0x18);
          auVar10[0xc] = (char)iVar13;
          auVar10[0xd] = (char)((uint)iVar13 >> 8);
          auVar10[0xe] = (char)((uint)iVar13 >> 0x10);
          auVar10[0xf] = (char)((uint)iVar13 >> 0x18);
          auVar23._12_4_ = uVar19;
          auVar23._0_12_ = *pauVar17;
          auVar23 = auVar23 ^ (auVar5 ^ auVar10) & auVar22;
          *(long *)(pauVar17[-1] + 4) = auVar21._8_8_;
          *(long *)(pauVar17[-2] + 8) = auVar21._0_8_;
          *(long *)(*pauVar17 + 8) = auVar23._8_8_;
          *(long *)*pauVar17 = auVar23._0_8_;
          pauVar17 = (undefined1 (*) [12])(pauVar17[2] + 8);
        } while (lVar14 != 0);
        if ((param_2 & 7) == 0) {
          return;
        }
      }
    }
    lVar14 = (ulong)param_2 - lVar15;
    puVar16 = (uint *)(param_1 + lVar15 * 4);
    do {
      uVar2 = *puVar16;
      lVar14 = lVar14 + -1;
      uVar3 = uVar2 >> 8 & 0xff;
      *puVar16 = (uVar3 | uVar3 << 0x10) + (uVar2 & 0xff00ff) & 0xff00ff | uVar2 & 0xff00ff00;
      puVar16 = puVar16 + 1;
    } while (lVar14 != 0);
  }
  return;
}

