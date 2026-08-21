
void FUN_00e64f40(long param_1,int param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  ushort *puVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  bool bVar9;
  ushort *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  ushort *puVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ushort *puVar20;
  ushort *puVar21;
  ushort *puVar22;
  ushort *puVar23;
  ushort *puVar24;
  ushort uVar25;
  ushort *puVar26;
  
  puVar23 = *(ushort **)(param_1 + 0x30);
  iVar6 = *(int *)(param_1 + 0x2c);
  puVar12 = *(undefined8 **)(param_1 + 0x40);
  iVar7 = *(int *)(param_1 + 0x3c);
  puVar10 = puVar23 + (long)iVar6 * 0x28;
  if (param_2 == 0) {
    if (0 < iVar6) {
      puVar15 = puVar10;
      if (puVar10 <= puVar23 + 0x28) {
        puVar15 = puVar23 + 0x28;
      }
      uVar1 = ((long)puVar15 + ~(ulong)puVar23) / 0x50 + 1;
      puVar15 = puVar23;
      if (1 < uVar1) {
        uVar17 = uVar1 & 0x7fffffffffffffe;
        puVar15 = puVar23 + uVar17 * 0x28;
        puVar22 = puVar23 + 0x2c;
        uVar19 = uVar17;
        do {
          uVar19 = uVar19 - 2;
          *(undefined8 *)(puVar22 + -0x14) = *(undefined8 *)(puVar22 + -0x1c);
          *(undefined8 *)(puVar22 + -0x10) = *(undefined8 *)(puVar22 + -0x28);
          *(undefined8 *)(puVar22 + 0x14) = *(undefined8 *)(puVar22 + 0xc);
          *(undefined8 *)(puVar22 + 0x18) = *(undefined8 *)puVar22;
          puVar22 = puVar22 + 0x50;
        } while (uVar19 != 0);
        if (uVar1 == uVar17) goto LAB_00e650c0;
      }
      do {
        *(undefined8 *)(puVar15 + 0x18) = *(undefined8 *)(puVar15 + 0x10);
        *(undefined8 *)(puVar15 + 0x1c) = *(undefined8 *)(puVar15 + 4);
        puVar15 = puVar15 + 0x28;
      } while (puVar15 < puVar10);
    }
LAB_00e650c0:
    uVar25 = 4;
    goto joined_r0x00e650c8;
  }
  if (0 < iVar6) {
    puVar15 = puVar10;
    if (puVar10 <= puVar23 + 0x28) {
      puVar15 = puVar23 + 0x28;
    }
    uVar1 = ((long)puVar15 + ~(ulong)puVar23) / 0x50 + 1;
    puVar15 = puVar23;
    if (1 < uVar1) {
      uVar17 = uVar1 & 0x7fffffffffffffe;
      puVar15 = puVar23 + uVar17 * 0x28;
      puVar22 = puVar23 + 0x44;
      uVar19 = uVar17;
      do {
        uVar19 = uVar19 - 2;
        *(undefined8 *)(puVar22 + -0x2c) = *(undefined8 *)(puVar22 + -0x30);
        *(undefined8 *)(puVar22 + -0x28) = *(undefined8 *)(puVar22 + -0x3c);
        *(undefined8 *)(puVar22 + -4) = *(undefined8 *)(puVar22 + -8);
        *(undefined8 *)puVar22 = *(undefined8 *)(puVar22 + -0x14);
        puVar22 = puVar22 + 0x50;
      } while (uVar19 != 0);
      if (uVar1 == uVar17) goto LAB_00e65020;
    }
    do {
      *(undefined8 *)(puVar15 + 0x18) = *(undefined8 *)(puVar15 + 0x14);
      *(undefined8 *)(puVar15 + 0x1c) = *(undefined8 *)(puVar15 + 8);
      puVar15 = puVar15 + 0x28;
    } while (puVar15 < puVar10);
  }
LAB_00e65020:
  uVar25 = 8;
joined_r0x00e650c8:
  if (0 < iVar7) {
    puVar2 = puVar12 + iVar7;
    do {
      puVar22 = (ushort *)*puVar12;
      puVar20 = *(ushort **)(puVar22 + 0x24);
      for (puVar15 = puVar22; puVar15 <= puVar20; puVar15 = puVar15 + 0x28) {
        if ((uVar25 & *puVar15) != 0) {
          puVar21 = puVar15;
          if (puVar15 < puVar20) goto LAB_00e6512c;
LAB_00e65140:
          bVar9 = false;
LAB_00e65144:
          lVar16 = 0;
LAB_00e6514c:
          if ((ushort *)((long)puVar21 + lVar16 + 0x50) <= puVar20) goto code_r0x00e6515c;
          if (puVar21 == puVar15) {
            lVar16 = *(long *)(puVar15 + 0x18) - *(long *)(puVar15 + 0x1c);
            if (lVar16 == 0) break;
            if (puVar15 <= puVar22) goto joined_r0x00e654fc;
            uVar1 = (ulong)((long)puVar15 + (-1 - (long)puVar22)) / 0x50 + 1;
            puVar21 = puVar22;
            if (uVar1 < 2) goto LAB_00e654dc;
            uVar17 = uVar1 & 0x7fffffffffffffe;
            puVar21 = puVar22 + uVar17 * 0x28;
            puVar22 = puVar22 + 0x44;
            uVar19 = uVar17;
            do {
              uVar19 = uVar19 - 2;
              *(long *)(puVar22 + -0x2c) = *(long *)(puVar22 + -0x28) + lVar16;
              *(long *)(puVar22 + -4) = *(long *)puVar22 + lVar16;
              puVar22 = puVar22 + 0x50;
            } while (uVar19 != 0);
            if (uVar1 != uVar17) {
LAB_00e654dc:
              do {
                *(long *)(puVar21 + 0x18) = *(long *)(puVar21 + 0x1c) + lVar16;
                puVar21 = puVar21 + 0x28;
              } while (puVar21 < puVar15);
            }
joined_r0x00e654fc:
            while (puVar15 + 0x28 <= puVar20) {
              *(long *)(puVar15 + 0x40) = *(long *)(puVar15 + 0x44) + lVar16;
              puVar15 = puVar15 + 0x28;
            }
          }
          else {
            if ((bVar9) && (puVar26 = puVar21 + 0x28, puVar26 <= puVar20)) {
              puVar3 = puVar15;
              puVar8 = puVar21;
              if (*(long *)(puVar21 + 0x1c) <= *(long *)(puVar15 + 0x1c)) {
                puVar3 = puVar21;
                puVar8 = puVar15;
              }
              lVar16 = *(long *)(puVar3 + 0x18);
              lVar4 = *(long *)(puVar3 + 0x1c);
              lVar5 = *(long *)(puVar8 + 0x1c);
              lVar18 = *(long *)(puVar8 + 0x18) - lVar5;
              if ((lVar5 - lVar4 == 0) || (lVar13 = *(long *)(puVar8 + 0x18) - lVar16, lVar13 == 0))
              {
                do {
                  lVar13 = *(long *)(puVar26 + 0x1c);
                  if (lVar4 < lVar13) {
                    lVar14 = lVar16;
                    if (lVar5 <= lVar13) {
                      lVar14 = lVar13 + lVar18;
                    }
                  }
                  else {
                    lVar14 = lVar13 + (lVar16 - lVar4);
                  }
                  *(long *)(puVar26 + 0x18) = lVar14;
                  puVar26 = puVar26 + 0x28;
                } while (puVar26 <= puVar20);
              }
              else {
                uVar11 = FT_DivFix(lVar13,lVar5 - lVar4);
                do {
                  lVar13 = *(long *)(puVar26 + 0x1c);
                  if (lVar13 - lVar4 == 0 || lVar13 < lVar4) {
                    *(long *)(puVar26 + 0x18) = lVar13 + (lVar16 - lVar4);
                  }
                  else if (lVar13 < lVar5) {
                    lVar13 = FT_MulFix(lVar13 - lVar4,uVar11);
                    *(long *)(puVar26 + 0x18) = lVar13 + lVar16;
                  }
                  else {
                    *(long *)(puVar26 + 0x18) = lVar13 + lVar18;
                  }
                  puVar26 = puVar26 + 0x28;
                } while (puVar26 <= puVar20);
              }
            }
            if ((puVar23 < puVar15) && (puVar20 = puVar15 + -0x28, puVar22 <= puVar20)) {
              puVar26 = puVar15;
              if (*(long *)(puVar21 + 0x1c) <= *(long *)(puVar15 + 0x1c)) {
                puVar26 = puVar21;
                puVar21 = puVar15;
              }
              lVar16 = *(long *)(puVar26 + 0x18);
              lVar4 = *(long *)(puVar26 + 0x1c);
              lVar5 = *(long *)(puVar21 + 0x1c);
              lVar18 = *(long *)(puVar21 + 0x18) - lVar5;
              if ((lVar5 - lVar4 == 0) || (lVar13 = *(long *)(puVar21 + 0x18) - lVar16, lVar13 == 0)
                 ) {
                do {
                  lVar13 = *(long *)(puVar22 + 0x1c);
                  if (lVar4 < lVar13) {
                    lVar14 = lVar16;
                    if (lVar5 <= lVar13) {
                      lVar14 = lVar13 + lVar18;
                    }
                  }
                  else {
                    lVar14 = lVar13 + (lVar16 - lVar4);
                  }
                  *(long *)(puVar22 + 0x18) = lVar14;
                  puVar22 = puVar22 + 0x28;
                } while (puVar22 <= puVar20);
              }
              else {
                uVar11 = FT_DivFix(lVar13,lVar5 - lVar4);
                do {
                  while( true ) {
                    lVar13 = *(long *)(puVar22 + 0x1c);
                    if (lVar13 - lVar4 == 0 || lVar13 < lVar4) break;
                    if (lVar13 < lVar5) {
                      lVar13 = FT_MulFix(lVar13 - lVar4,uVar11);
                      *(long *)(puVar22 + 0x18) = lVar13 + lVar16;
                    }
                    else {
                      *(long *)(puVar22 + 0x18) = lVar13 + lVar18;
                    }
                    puVar22 = puVar22 + 0x28;
                    if (puVar20 < puVar22) goto LAB_00e65518;
                  }
                  *(long *)(puVar22 + 0x18) = lVar13 + (lVar16 - lVar4);
                  puVar22 = puVar22 + 0x28;
                } while (puVar22 <= puVar20);
              }
            }
          }
          break;
        }
      }
LAB_00e65518:
      puVar12 = puVar12 + 1;
    } while (puVar12 < puVar2);
  }
  if (param_2 == 0) {
    if (0 < iVar6) {
      puVar15 = puVar10;
      if (puVar10 <= puVar23 + 0x28) {
        puVar15 = puVar23 + 0x28;
      }
      uVar1 = ((long)puVar15 + ~(ulong)puVar23) / 0x50 + 1;
      puVar15 = puVar23;
      if (1 < uVar1) {
        uVar17 = uVar1 & 0x7fffffffffffffe;
        puVar15 = puVar23 + uVar17 * 0x28;
        puVar23 = puVar23 + 0x40;
        uVar19 = uVar17;
        do {
          uVar19 = uVar19 - 2;
          *(undefined8 *)(puVar23 + -0x30) = *(undefined8 *)(puVar23 + -0x28);
          *(undefined8 *)(puVar23 + -8) = *(undefined8 *)puVar23;
          puVar23 = puVar23 + 0x50;
        } while (uVar19 != 0);
        if (uVar1 == uVar17) {
          return;
        }
      }
      do {
        *(undefined8 *)(puVar15 + 0x10) = *(undefined8 *)(puVar15 + 0x18);
        puVar15 = puVar15 + 0x28;
      } while (puVar15 < puVar10);
    }
  }
  else if (0 < iVar6) {
    puVar15 = puVar10;
    if (puVar10 <= puVar23 + 0x28) {
      puVar15 = puVar23 + 0x28;
    }
    uVar1 = ((long)puVar15 + ~(ulong)puVar23) / 0x50 + 1;
    puVar15 = puVar23;
    if (1 < uVar1) {
      uVar17 = uVar1 & 0x7fffffffffffffe;
      puVar15 = puVar23 + uVar17 * 0x28;
      puVar23 = puVar23 + 0x40;
      uVar19 = uVar17;
      do {
        uVar19 = uVar19 - 2;
        *(undefined8 *)(puVar23 + -0x2c) = *(undefined8 *)(puVar23 + -0x28);
        *(undefined8 *)(puVar23 + -4) = *(undefined8 *)puVar23;
        puVar23 = puVar23 + 0x50;
      } while (uVar19 != 0);
      if (uVar1 == uVar17) {
        return;
      }
    }
    do {
      *(undefined8 *)(puVar15 + 0x14) = *(undefined8 *)(puVar15 + 0x18);
      puVar15 = puVar15 + 0x28;
    } while (puVar15 < puVar10);
  }
  return;
code_r0x00e6515c:
  lVar4 = lVar16 + 0x50;
  lVar16 = lVar16 + 0x50;
  if ((uVar25 & *(ushort *)((long)puVar21 + lVar4)) != 0) goto code_r0x00e6516c;
  goto LAB_00e6514c;
code_r0x00e6516c:
  puVar26 = (ushort *)((long)puVar21 + lVar16);
  if (lVar16 != 0x50) {
    puVar24 = puVar26 + -0x28;
    puVar3 = puVar26;
    puVar8 = puVar21;
    if (*(long *)(puVar21 + 0x1c) <= *(long *)(puVar26 + 0x1c)) {
      puVar3 = puVar21;
      puVar8 = puVar26;
    }
    lVar16 = *(long *)(puVar3 + 0x18);
    lVar4 = *(long *)(puVar3 + 0x1c);
    lVar5 = *(long *)(puVar8 + 0x1c);
    puVar21 = puVar21 + 0x28;
    lVar18 = *(long *)(puVar8 + 0x18) - lVar5;
    if ((lVar5 - lVar4 == 0) || (lVar13 = *(long *)(puVar8 + 0x18) - lVar16, lVar13 == 0)) {
      do {
        while (lVar13 = *(long *)(puVar21 + 0x1c), lVar13 <= lVar4) {
          *(long *)(puVar21 + 0x18) = lVar13 + (lVar16 - lVar4);
          puVar21 = puVar21 + 0x28;
          if (puVar24 < puVar21) goto joined_r0x00e65260;
        }
        lVar14 = lVar16;
        if (lVar5 <= lVar13) {
          lVar14 = lVar13 + lVar18;
        }
        *(long *)(puVar21 + 0x18) = lVar14;
        puVar21 = puVar21 + 0x28;
      } while (puVar21 <= puVar24);
    }
    else {
      uVar11 = FT_DivFix(lVar13,lVar5 - lVar4);
      do {
        lVar13 = *(long *)(puVar21 + 0x1c);
        if (lVar13 - lVar4 == 0 || lVar13 < lVar4) {
          lVar13 = lVar13 + (lVar16 - lVar4);
        }
        else if (lVar13 < lVar5) {
          lVar13 = FT_MulFix(lVar13 - lVar4,uVar11);
          lVar13 = lVar13 + lVar16;
        }
        else {
          lVar13 = lVar13 + lVar18;
        }
        *(long *)(puVar21 + 0x18) = lVar13;
        puVar21 = puVar21 + 0x28;
      } while (puVar21 <= puVar24);
    }
  }
joined_r0x00e65260:
  do {
    puVar21 = puVar26;
    if (puVar20 <= puVar21) goto LAB_00e65140;
LAB_00e6512c:
    if ((uVar25 & puVar21[0x28]) == 0) break;
    puVar26 = puVar21 + 0x28;
  } while( true );
  bVar9 = true;
  goto LAB_00e65144;
}

