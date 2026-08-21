
/* v8::internal::Bignum::Square() */

void __thiscall v8::internal::Bignum::Square(Bignum *this)

{
  ulong *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong *puVar8;
  uint *puVar9;
  uint *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 *puVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  
  uVar3 = *(uint *)(this + 0x210);
  if (0x40 < (int)uVar3) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  lVar13 = (long)(int)uVar3;
  uVar4 = uVar3 * 2;
  uVar12 = (ulong)uVar4;
  uVar14 = 0;
  if ((int)uVar3 < 1) {
    uVar18 = (ulong)uVar3;
  }
  else {
    do {
      lVar17 = uVar14 * 4;
      uVar14 = uVar14 + 1;
      *(undefined4 *)(*(long *)(this + 0x200) + (ulong)uVar3 * 4 + lVar17) =
           *(undefined4 *)(*(long *)(this + 0x200) + lVar17);
      iVar15 = *(int *)(this + 0x210);
      uVar18 = (ulong)iVar15;
    } while ((long)uVar14 < (long)uVar18);
    if (iVar15 < 1) {
      uVar14 = 0;
      goto joined_r0x01524fb4;
    }
    lVar17 = 0;
    uVar14 = 0;
    lVar20 = lVar13 + -1;
    uVar22 = 1;
    do {
      lVar19 = *(long *)(this + 0x200);
      uVar18 = lVar17 + 1;
      if (uVar18 < 4) {
        uVar23 = 0;
        lVar7 = lVar17;
LAB_01524e50:
        lVar11 = lVar19 + lVar13 * 4;
        lVar7 = lVar7 << 2;
        do {
          puVar10 = (uint *)(lVar11 + lVar7);
          lVar25 = uVar23 * 4;
          uVar23 = uVar23 + 1;
          lVar7 = lVar7 + -4;
          uVar14 = uVar14 + (ulong)*(uint *)(lVar11 + lVar25) * (ulong)*puVar10;
        } while (uVar22 != uVar23);
      }
      else {
        uVar23 = uVar18 & 0xfffffffffffffffc;
        lVar26 = 0;
        uVar29 = uVar22 & 0xfffffffffffffffc;
        lVar11 = 0;
        lVar25 = 0;
        puVar8 = (ulong *)(lVar19 + (lVar13 + 2) * 4);
        lVar7 = lVar17 - uVar23;
        puVar24 = (undefined8 *)(lVar19 + lVar20 * 4);
        do {
          puVar1 = puVar8 + -1;
          uVar32 = *puVar8;
          uVar29 = uVar29 - 4;
          puVar8 = puVar8 + 2;
          uVar31 = NEON_rev64(*puVar24,4);
          uVar30 = NEON_rev64(puVar24[-1],4);
          uVar14 = uVar14 + (*puVar1 & 0xffffffff) * (uVar31 & 0xffffffff);
          lVar26 = lVar26 + (*puVar1 >> 0x20) * (uVar31 >> 0x20);
          lVar11 = lVar11 + (uVar32 & 0xffffffff) * (uVar30 & 0xffffffff);
          lVar25 = lVar25 + (uVar32 >> 0x20) * (uVar30 >> 0x20);
          puVar24 = puVar24 + -2;
        } while (uVar29 != 0);
        uVar14 = lVar11 + uVar14 + lVar25 + lVar26;
        if (uVar18 != uVar23) goto LAB_01524e50;
      }
      *(uint *)(lVar19 + lVar17 * 4) = (uint)uVar14 & 0xfffffff;
      uVar18 = (ulong)*(int *)(this + 0x210);
      lVar17 = lVar17 + 1;
      uVar14 = uVar14 >> 0x1c;
      uVar22 = uVar22 + 1;
      lVar20 = lVar20 + 1;
    } while (lVar17 < (long)uVar18);
  }
  iVar15 = (int)uVar18;
joined_r0x01524fb4:
  if ((int)uVar4 <= iVar15) {
LAB_01524fb8:
    *(uint *)(this + 0x210) = uVar4;
    *(int *)(this + 0x214) = *(int *)(this + 0x214) << 1;
    if (0 < (int)uVar3) {
      uVar14 = uVar12;
      do {
        if (*(int *)(*(long *)(this + 0x200) + -4 + uVar14 * 4) != 0) {
          return;
        }
        uVar12 = uVar14 - 1;
        *(int *)(this + 0x210) = (int)uVar14 + -1;
        uVar14 = uVar12;
      } while (0 < (long)uVar12);
    }
    if ((int)uVar12 == 0) {
      *(undefined4 *)(this + 0x214) = 0;
    }
    return;
  }
  iVar21 = (int)uVar18;
  iVar6 = -2 - iVar21;
  iVar15 = 0;
  lVar17 = (long)iVar21;
  iVar5 = iVar6;
  do {
    iVar21 = iVar21 + 1;
    lVar19 = *(long *)(this + 0x200);
    iVar16 = (int)uVar18;
    lVar20 = lVar17 + 1;
    if (((int)lVar17 - iVar16) + 1 < iVar16) {
      uVar18 = (ulong)(uint)((iVar6 - iVar15) + iVar16 * 2) + 1;
      lVar7 = (long)((int)lVar20 - iVar16);
      lVar11 = (long)iVar16;
      if (3 < uVar18) {
        lVar27 = 0;
        uVar22 = uVar18 & 0x1fffffffc;
        uVar23 = (ulong)(uint)(iVar5 + iVar16 * 2) + 1 & 0x1fffffffc;
        puVar24 = (undefined8 *)(lVar19 + (lVar13 + lVar11) * 4 + -8);
        lVar25 = 0;
        lVar26 = 0;
        lVar11 = lVar11 - uVar22;
        lVar7 = uVar22 + lVar7;
        puVar8 = (ulong *)(lVar19 + (lVar13 + (iVar21 - iVar16)) * 4 + 8);
        do {
          puVar2 = puVar24 + -1;
          uVar28 = *puVar24;
          uVar23 = uVar23 - 4;
          puVar24 = puVar24 + -2;
          uVar29 = NEON_rev64(uVar28,4);
          uVar31 = NEON_rev64(*puVar2,4);
          uVar14 = uVar14 + (puVar8[-1] & 0xffffffff) * (uVar29 & 0xffffffff);
          lVar27 = lVar27 + (puVar8[-1] >> 0x20) * (uVar29 >> 0x20);
          lVar25 = lVar25 + (*puVar8 & 0xffffffff) * (uVar31 & 0xffffffff);
          lVar26 = lVar26 + (*puVar8 >> 0x20) * (uVar31 >> 0x20);
          puVar8 = puVar8 + 2;
        } while (uVar23 != 0);
        uVar14 = lVar25 + uVar14 + lVar26 + lVar27;
        if (uVar18 == uVar22) goto LAB_01524f80;
      }
      puVar10 = (uint *)(lVar19 + (lVar13 + lVar11) * 4);
      iVar16 = iVar16 - (int)lVar7;
      puVar9 = (uint *)(lVar19 + (lVar13 + lVar7) * 4);
      do {
        puVar10 = puVar10 + -1;
        iVar16 = iVar16 + -1;
        uVar14 = uVar14 + (ulong)*puVar9 * (ulong)*puVar10;
        puVar9 = puVar9 + 1;
      } while (iVar16 != 0);
    }
LAB_01524f80:
    *(uint *)(lVar19 + lVar17 * 4) = (uint)uVar14 & 0xfffffff;
    if (lVar20 == (int)uVar4) goto LAB_01524fb8;
    uVar18 = (ulong)*(uint *)(this + 0x210);
    uVar14 = uVar14 >> 0x1c;
    iVar15 = iVar15 + 1;
    iVar5 = iVar5 + -1;
    lVar17 = lVar20;
  } while( true );
}

