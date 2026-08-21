
/* v8::internal::StringSearch<unsigned short, unsigned short>::PopulateBoyerMooreTable() */

void __thiscall
v8::internal::StringSearch<unsigned_short,unsigned_short>::PopulateBoyerMooreTable
          (StringSearch<unsigned_short,unsigned_short> *this)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  int *piVar12;
  ulong uVar13;
  undefined8 *puVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  
  iVar5 = *(int *)(this + 0x20);
  lVar20 = *(long *)this;
  lVar3 = *(long *)(this + 8);
  uVar4 = *(ulong *)(this + 0x10);
  lVar23 = lVar20 + (long)iVar5 * -4;
  uVar21 = (uint)uVar4;
  iVar10 = uVar21 - iVar5;
  lVar22 = (long)iVar5;
  lVar2 = lVar23 + 0xbe2c;
  lVar23 = lVar23 + 0xc218;
  lVar19 = (long)(int)uVar21;
  if (iVar10 != 0 && iVar5 <= (int)uVar21) {
    uVar11 = lVar19 - lVar22;
    lVar24 = lVar22;
    if (7 < uVar11) {
      uVar13 = uVar11 & 0xfffffffffffffff8;
      lVar24 = uVar13 + lVar22;
      puVar14 = (undefined8 *)(lVar20 + 0xbe3c);
      uVar18 = uVar13;
      do {
        puVar14[-1] = CONCAT44(iVar10,iVar10);
        puVar14[-2] = CONCAT44(iVar10,iVar10);
        puVar14[1] = CONCAT44(iVar10,iVar10);
        *puVar14 = CONCAT44(iVar10,iVar10);
        uVar18 = uVar18 - 8;
        puVar14 = puVar14 + 4;
      } while (uVar18 != 0);
      if (uVar11 == uVar13) goto LAB_0113b330;
    }
    lVar25 = (int)uVar21 - lVar24;
    piVar12 = (int *)(lVar24 * 4 + lVar22 * -4 + lVar20 + 0xbe2c);
    do {
      lVar25 = lVar25 + -1;
      *piVar12 = iVar10;
      piVar12 = piVar12 + 1;
    } while (lVar25 != 0);
  }
LAB_0113b330:
  uVar11 = -(uVar4 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar4 & 0xffffffff) << 2;
  uVar1 = uVar21 + 1;
  *(undefined4 *)(lVar2 + uVar11) = 1;
  *(uint *)(lVar23 + uVar11) = uVar1;
  if (iVar5 < (int)uVar21) {
    sVar6 = *(short *)(lVar3 + ((long)((uVar4 << 0x20) + -0x100000000) >> 0x1f));
    lVar24 = lVar20 + (0xfa - lVar22) * 4 + 0xbe2c;
    uVar18 = (ulong)uVar1;
    uVar11 = uVar4;
    do {
      iVar16 = (int)uVar11;
      uVar8 = iVar16 - 1;
      uVar11 = (ulong)uVar8;
      uVar15 = (uint)uVar18;
      if ((int)uVar15 <= (int)uVar21) {
        sVar7 = *(short *)(lVar3 + (long)(int)uVar8 * 2);
        do {
          uVar15 = (uint)uVar18;
          if (sVar7 == *(short *)(lVar3 + (long)(int)uVar15 * 2 + -2)) break;
          lVar25 = (long)(int)uVar15;
          if (*(int *)(lVar2 + lVar25 * 4) == iVar10) {
            *(uint *)(lVar2 + lVar25 * 4) = uVar15 - iVar16;
          }
          uVar15 = *(uint *)(lVar23 + lVar25 * 4);
          uVar18 = (ulong)uVar15;
        } while ((int)uVar15 <= (int)uVar21);
      }
      uVar9 = uVar15 - 1;
      uVar18 = (ulong)uVar9;
      *(uint *)(lVar23 + (long)(int)uVar8 * 4) = uVar9;
      if ((uVar9 == uVar21) && (iVar5 < (int)uVar8)) {
        iVar16 = uVar1 - iVar16;
        uVar13 = (long)(int)uVar8;
        do {
          if (*(short *)(lVar3 + -2 + uVar13 * 2) == sVar6) {
            uVar11 = (ulong)((int)uVar13 - 1);
            uVar18 = (ulong)(uVar15 - 2);
            *(uint *)(lVar24 + uVar13 * 4) = uVar15 - 2;
            goto LAB_0113b390;
          }
          uVar11 = uVar13 - 1;
          if (*(int *)(lVar2 + lVar19 * 4) == iVar10) {
            *(int *)(lVar2 + lVar19 * 4) = iVar16;
          }
          *(uint *)(lVar24 + uVar13 * 4) = uVar21;
          iVar16 = iVar16 + 1;
          uVar13 = uVar11;
        } while (lVar22 < (long)uVar11);
        uVar18 = uVar4 & 0xffffffff;
      }
LAB_0113b390:
    } while (iVar5 < (int)uVar11);
    if (((int)uVar18 < (int)uVar21) && (iVar5 <= (int)uVar21)) {
      lVar22 = lVar22 + -1;
      piVar12 = (int *)(lVar20 + 0xbe2c);
      iVar16 = iVar5;
      do {
        iVar17 = (int)uVar18;
        if (*piVar12 == iVar10) {
          *piVar12 = iVar17 - iVar5;
        }
        if (iVar16 == iVar17) {
          uVar18 = (ulong)*(uint *)(lVar23 + (long)iVar17 * 4);
        }
        lVar22 = lVar22 + 1;
        iVar16 = iVar16 + 1;
        piVar12 = piVar12 + 1;
      } while (lVar22 < lVar19);
    }
  }
  return;
}

