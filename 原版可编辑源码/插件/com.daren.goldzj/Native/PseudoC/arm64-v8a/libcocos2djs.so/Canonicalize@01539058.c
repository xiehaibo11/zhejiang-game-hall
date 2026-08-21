
/* v8::internal::CharacterRange::Canonicalize(v8::internal::ZoneList<v8::internal::CharacterRange>*)
    */

void v8::internal::CharacterRange::Canonicalize(ZoneList *param_1)

{
  bool bVar1;
  ulong *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  int iVar19;
  int iVar20;
  long lVar21;
  
  uVar4 = *(uint *)(param_1 + 0xc);
  if (1 < (int)uVar4) {
    lVar10 = *(long *)param_1;
    uVar12 = 1;
    uVar9 = (ulong)*(uint *)(lVar10 + 4);
    do {
      uVar14 = *(ulong *)(lVar10 + uVar12 * 8);
      if ((int)uVar14 <= (int)uVar9 + 1) {
        if (uVar4 == (uint)uVar12) {
          return;
        }
        uVar9 = uVar12 & 0xffffffff;
        goto LAB_015390a0;
      }
      uVar12 = uVar12 + 1;
      uVar9 = uVar14 >> 0x20;
    } while (uVar4 != uVar12);
  }
  return;
LAB_015390a0:
  uVar14 = *(ulong *)(lVar10 + uVar9 * 8);
  uVar11 = (uint)uVar12;
  iVar20 = (int)(uVar14 >> 0x20);
  iVar19 = (int)uVar14;
  if ((int)uVar11 < 1) {
    uVar15 = 0;
    uVar16 = 0;
    uVar17 = uVar11;
    if (uVar11 != 0) goto LAB_01539160;
LAB_015390f8:
    uVar17 = uVar11 - uVar16;
    if ((uVar17 != 0 && (int)uVar16 <= (int)uVar11) && (0 < (int)uVar17)) {
      uVar12 = (ulong)uVar17;
      do {
        lVar8 = uVar12 * 8;
        uVar12 = uVar12 - 1;
        *(undefined8 *)(lVar10 + (ulong)(uVar16 + 1) * 8 + -8 + lVar8) =
             *(undefined8 *)(lVar10 + (ulong)uVar16 * 8 + -8 + lVar8);
        lVar10 = *(long *)param_1;
      } while (0 < (long)uVar12);
    }
    *(ulong *)(lVar10 + (long)(int)uVar16 * 8) = uVar14;
    uVar12 = (ulong)(uVar11 + 1);
  }
  else {
    uVar15 = uVar12 & 0xffffffff;
    uVar18 = uVar12 & 0xffffffff;
    do {
      uVar16 = (uint)uVar18;
      uVar7 = *(undefined8 *)(lVar10 + -8 + uVar15 * 8);
      if (iVar20 + 1 < (int)uVar7) {
        uVar18 = (ulong)((uint)uVar15 - 1);
      }
      else if ((int)((ulong)uVar7 >> 0x20) + 1 < iVar19) {
        uVar17 = uVar16;
        if ((uint)uVar15 == uVar16) goto LAB_015390f8;
        goto LAB_01539160;
      }
      uVar15 = uVar15 - 1;
    } while (0 < (long)uVar15);
    uVar15 = 0;
    uVar16 = 0;
    uVar17 = (uint)uVar18;
    if ((uint)uVar18 == 0) goto LAB_015390f8;
LAB_01539160:
    iVar13 = (int)uVar15;
    uVar16 = iVar13 + 1;
    puVar2 = (ulong *)(lVar10 + (uVar15 & 0xffffffff) * 8);
    if (uVar16 == uVar17) {
      uVar18 = *puVar2;
      uVar15 = uVar18;
      if (iVar19 <= (int)uVar18) {
        uVar15 = uVar14;
      }
      if (iVar20 <= (int)(uVar18 >> 0x20)) {
        uVar14 = uVar18;
      }
      *puVar2 = uVar15 & 0xffffffff | uVar14 & 0xffffffff00000000;
    }
    else {
      iVar5 = *(int *)(lVar10 + (long)(int)uVar17 * 8 + -4);
      iVar3 = (int)*puVar2;
      if (iVar19 <= (int)*puVar2) {
        iVar3 = iVar19;
      }
      if (iVar20 <= iVar5) {
        iVar20 = iVar5;
      }
      uVar6 = uVar11 - uVar17;
      if (uVar6 != 0 && (int)uVar17 <= (int)uVar11) {
        if (iVar13 < (int)uVar17) {
          if (0 < (int)uVar6) {
            *(undefined8 *)(lVar10 + (ulong)uVar16 * 8) =
                 *(undefined8 *)(lVar10 + (long)(int)uVar17 * 8);
            if (uVar6 != 1) {
              lVar8 = (long)(int)uVar17 * 8;
              lVar21 = (ulong)uVar16 * 8;
              lVar10 = (ulong)uVar6 - 1;
              do {
                lVar21 = lVar21 + 8;
                lVar8 = lVar8 + 8;
                lVar10 = lVar10 + -1;
                *(undefined8 *)(*(long *)param_1 + lVar21) =
                     *(undefined8 *)(*(long *)param_1 + lVar8);
              } while (lVar10 != 0);
            }
          }
        }
        else if (0 < (int)uVar6) {
          lVar8 = (ulong)uVar6 - 1;
          *(undefined8 *)(lVar10 + (lVar8 + (ulong)uVar16) * 8) =
               *(undefined8 *)(lVar10 + (lVar8 + (int)uVar17) * 8);
          if (0 < lVar8) {
            lVar10 = (ulong)uVar6 - 2;
            do {
              *(undefined8 *)(*(long *)param_1 + (ulong)uVar16 * 8 + lVar10 * 8) =
                   *(undefined8 *)(*(long *)param_1 + (long)(int)uVar17 * 8 + lVar10 * 8);
              bVar1 = 0 < lVar10;
              lVar10 = lVar10 + -1;
            } while (bVar1);
          }
        }
      }
      *(ulong *)(*(long *)param_1 + (uVar15 & 0xffffffff) * 8) = CONCAT44(iVar20,iVar3);
      uVar12 = (ulong)(uVar6 + iVar13 + 1);
    }
  }
  uVar9 = uVar9 + 1;
  if ((int)uVar4 <= (int)uVar9) {
    *(int *)(param_1 + 0xc) = (int)uVar12;
    return;
  }
  lVar10 = *(long *)param_1;
  goto LAB_015390a0;
}

