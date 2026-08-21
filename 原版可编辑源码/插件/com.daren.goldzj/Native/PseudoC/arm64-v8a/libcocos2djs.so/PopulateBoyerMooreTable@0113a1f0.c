
/* v8::internal::StringSearch<unsigned char, unsigned short>::PopulateBoyerMooreTable() */

void __thiscall
v8::internal::StringSearch<unsigned_char,unsigned_short>::PopulateBoyerMooreTable
          (StringSearch<unsigned_char,unsigned_short> *this)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  int *piVar11;
  ulong uVar12;
  undefined8 *puVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  
  iVar5 = *(int *)(this + 0x20);
  lVar19 = *(long *)this;
  lVar3 = *(long *)(this + 8);
  uVar4 = *(ulong *)(this + 0x10);
  lVar22 = lVar19 + (long)iVar5 * -4;
  uVar20 = (uint)uVar4;
  iVar9 = uVar20 - iVar5;
  lVar21 = (long)iVar5;
  lVar2 = lVar22 + 0xbe2c;
  lVar22 = lVar22 + 0xc218;
  lVar18 = (long)(int)uVar20;
  if (iVar9 != 0 && iVar5 <= (int)uVar20) {
    uVar10 = lVar18 - lVar21;
    lVar23 = lVar21;
    if (7 < uVar10) {
      uVar12 = uVar10 & 0xfffffffffffffff8;
      lVar23 = uVar12 + lVar21;
      puVar13 = (undefined8 *)(lVar19 + 0xbe3c);
      uVar17 = uVar12;
      do {
        puVar13[-1] = CONCAT44(iVar9,iVar9);
        puVar13[-2] = CONCAT44(iVar9,iVar9);
        puVar13[1] = CONCAT44(iVar9,iVar9);
        *puVar13 = CONCAT44(iVar9,iVar9);
        uVar17 = uVar17 - 8;
        puVar13 = puVar13 + 4;
      } while (uVar17 != 0);
      if (uVar10 == uVar12) goto LAB_0113a28c;
    }
    lVar24 = (int)uVar20 - lVar23;
    piVar11 = (int *)(lVar23 * 4 + lVar21 * -4 + lVar19 + 0xbe2c);
    do {
      lVar24 = lVar24 + -1;
      *piVar11 = iVar9;
      piVar11 = piVar11 + 1;
    } while (lVar24 != 0);
  }
LAB_0113a28c:
  uVar10 = -(uVar4 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar4 & 0xffffffff) << 2;
  uVar1 = uVar20 + 1;
  *(undefined4 *)(lVar2 + uVar10) = 1;
  *(uint *)(lVar22 + uVar10) = uVar1;
  if (iVar5 < (int)uVar20) {
    cVar6 = *(char *)(lVar3 + ((long)((uVar4 << 0x20) + -0x100000000) >> 0x20));
    lVar23 = lVar19 + (0xfa - lVar21) * 4 + 0xbe2c;
    uVar17 = (ulong)uVar1;
    uVar10 = uVar4;
    do {
      iVar15 = (int)uVar10;
      uVar14 = (uint)uVar17;
      uVar10 = (long)iVar15 - 1;
      if ((int)uVar14 <= (int)uVar20) {
        cVar7 = *(char *)(lVar3 + uVar10);
        do {
          uVar14 = (uint)uVar17;
          lVar24 = (long)(int)uVar14;
          if (cVar7 == *(char *)(lVar24 + lVar3 + -1)) break;
          if (*(int *)(lVar2 + lVar24 * 4) == iVar9) {
            *(uint *)(lVar2 + lVar24 * 4) = uVar14 - iVar15;
          }
          uVar14 = *(uint *)(lVar22 + lVar24 * 4);
          uVar17 = (ulong)uVar14;
        } while ((int)uVar14 <= (int)uVar20);
      }
      uVar8 = uVar14 - 1;
      uVar17 = (ulong)uVar8;
      *(uint *)(lVar22 + uVar10 * 4) = uVar8;
      if ((uVar8 == uVar20) && (iVar5 < (int)uVar10)) {
        iVar15 = uVar1 - iVar15;
        do {
          if (*(char *)(lVar3 + -1 + uVar10) == cVar6) {
            uVar17 = (ulong)(uVar14 - 2);
            *(uint *)(lVar23 + uVar10 * 4) = uVar14 - 2;
            uVar10 = (ulong)((int)uVar10 - 1);
            goto LAB_0113a2f0;
          }
          uVar12 = uVar10 - 1;
          if (*(int *)(lVar2 + lVar18 * 4) == iVar9) {
            *(int *)(lVar2 + lVar18 * 4) = iVar15;
          }
          *(uint *)(lVar23 + uVar10 * 4) = uVar20;
          iVar15 = iVar15 + 1;
          uVar10 = uVar12;
        } while (lVar21 < (long)uVar12);
        uVar17 = uVar4 & 0xffffffff;
        uVar10 = uVar12 & 0xffffffff;
      }
LAB_0113a2f0:
    } while (iVar5 < (int)uVar10);
    if (((int)uVar17 < (int)uVar20) && (iVar5 <= (int)uVar20)) {
      lVar21 = lVar21 + -1;
      piVar11 = (int *)(lVar19 + 0xbe2c);
      iVar15 = iVar5;
      do {
        iVar16 = (int)uVar17;
        if (*piVar11 == iVar9) {
          *piVar11 = iVar16 - iVar5;
        }
        if (iVar15 == iVar16) {
          uVar17 = (ulong)*(uint *)(lVar22 + (long)iVar16 * 4);
        }
        lVar21 = lVar21 + 1;
        iVar15 = iVar15 + 1;
        piVar11 = piVar11 + 1;
      } while (lVar21 < lVar18);
    }
  }
  return;
}

