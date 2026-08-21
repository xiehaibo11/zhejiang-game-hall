
/* WARNING: Type propagation algorithm not settling */

ulong FUN_00e775a0(ulong *param_1,byte *param_2,long param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  byte *pbVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  long lVar15;
  byte *pbVar16;
  byte *pbVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  
  pbVar13 = (byte *)*param_1;
  if (param_2 <= pbVar13) {
    return 0;
  }
  bVar1 = *pbVar13;
  if ((bVar1 == 0x2d) || (bVar1 == 0x2b)) {
    pbVar13 = pbVar13 + 1;
    if (pbVar13 == param_2) {
      return 0;
    }
    bVar7 = bVar1 == 0x2d;
    bVar1 = *pbVar13;
    if (bVar1 == 0x2b) {
      return 0;
    }
    if (bVar1 == 0x2d) {
      return 0;
    }
  }
  else {
    bVar7 = false;
  }
  if (bVar1 == 0x2e) {
    uVar22 = 0;
    pbVar17 = pbVar13;
  }
  else {
    if (param_2 <= pbVar13) {
      return 0;
    }
    if (bVar1 == 0x2d) {
      if (pbVar13 + 1 == param_2) {
        return 0;
      }
      bVar1 = pbVar13[1];
      if (bVar1 == 0x2b) {
        return 0;
      }
      if (bVar1 == 0x2d) {
        return 0;
      }
      bVar8 = true;
      pbVar16 = pbVar13 + 1;
    }
    else {
      bVar8 = false;
      pbVar16 = pbVar13;
    }
    pbVar17 = pbVar16;
    if (pbVar16 < param_2) {
      uVar21 = 0;
      bVar9 = false;
      while( true ) {
        pbVar5 = pbVar17 + 1;
        if (((bVar1 < 0x21) && ((1L << ((ulong)bVar1 & 0x3f) & 0x100003601U) != 0)) ||
           (pbVar17 = pbVar16, (char)bVar1 < '\0')) break;
        cVar2 = (&DAT_0197bb0c)[(ulong)bVar1 & 0x7f];
        if (((long)cVar2 < 0) || ('\t' < cVar2)) break;
        if ((long)uVar21 < 0xccccccd) {
          if ((uVar21 == 0xccccccc) && ('\a' < cVar2)) {
            bVar9 = true;
            uVar21 = 0xccccccc;
          }
          else {
            uVar21 = (long)cVar2 + uVar21 * 10;
          }
        }
        else {
          bVar9 = true;
        }
        pbVar17 = pbVar16 + 1;
        if (param_2 <= pbVar5) break;
        pbVar16 = pbVar16 + 1;
        bVar1 = *pbVar5;
        pbVar17 = pbVar5;
      }
      if (bVar9) {
        uVar21 = 0x7fffffff;
      }
      uVar22 = -uVar21;
      if (!bVar8) {
        uVar22 = uVar21;
      }
    }
    else {
      uVar22 = 0;
    }
    if (pbVar17 == pbVar13) {
      return 0;
    }
    if ((pbVar17 < param_2) && (*pbVar17 == 0x23)) {
      pbVar16 = pbVar17 + 1;
      if (param_2 <= pbVar16) {
        return 0;
      }
      if (0x22 < uVar22 - 2) {
        return 0;
      }
      bVar1 = *pbVar16;
      if ((bVar1 == 0x2d) || (bVar1 == 0x2b)) {
        pbVar16 = pbVar17 + 2;
        if (pbVar16 == param_2) {
          return 0;
        }
        bVar8 = bVar1 == 0x2d;
        bVar1 = *pbVar16;
        if (bVar1 == 0x2b) {
          return 0;
        }
        if (bVar1 == 0x2d) {
          return 0;
        }
        lVar14 = 2;
      }
      else {
        bVar8 = false;
        lVar14 = 1;
      }
      lVar15 = lVar14;
      if (pbVar16 < param_2) {
        uVar3 = 0;
        if ((uint)uVar22 != 0) {
          uVar3 = 0x7fffffff / (uint)uVar22;
        }
        uVar11 = (ulong)uVar3;
        uVar21 = 0;
        bVar9 = false;
        while( true ) {
          lVar18 = lVar15 + 1;
          if (((bVar1 < 0x21) && ((1L << ((ulong)bVar1 & 0x3f) & 0x100003601U) != 0)) ||
             (lVar15 = lVar14, (char)bVar1 < '\0')) break;
          cVar2 = (&DAT_0197bb0c)[(ulong)bVar1 & 0x7f];
          iVar10 = (int)cVar2;
          if ((iVar10 < 0) || ((long)uVar22 <= (long)iVar10)) break;
          if ((long)uVar11 < (long)uVar21) {
            bVar9 = true;
          }
          else if ((uVar21 == uVar11) && ((char)(-1 - (char)uVar3 * (char)uVar22) < cVar2)) {
            bVar9 = true;
            uVar21 = uVar11;
          }
          else {
            uVar21 = (long)iVar10 + uVar21 * uVar22;
          }
          lVar15 = lVar14 + 1;
          if (param_2 <= pbVar17 + lVar18) break;
          lVar14 = lVar14 + 1;
          bVar1 = pbVar17[lVar18];
          lVar15 = lVar18;
        }
        if (bVar9) {
          uVar21 = 0x7fffffff;
        }
        uVar22 = -uVar21;
        if (!bVar8) {
          uVar22 = uVar21;
        }
      }
      else {
        uVar22 = 0;
      }
      if (lVar15 == 1) {
        return 0;
      }
      pbVar17 = pbVar17 + lVar15;
    }
    if (pbVar13 == pbVar17) {
      return 0;
    }
    if (0x7fff < (long)uVar22) {
      bVar8 = true;
      goto joined_r0x00e77a98;
    }
    uVar22 = (uVar22 & 0xffff) << 0x10;
  }
  bVar8 = false;
joined_r0x00e77a98:
  if (((pbVar17 < param_2) && (*pbVar17 == 0x2e)) && (pbVar17 = pbVar17 + 1, pbVar17 < param_2)) {
    lVar14 = 0;
    lVar15 = 1;
    if (uVar22 == 0) {
      do {
        while( true ) {
          bVar1 = *pbVar17;
          if (((bVar1 < 0x21) && ((1L << ((ulong)bVar1 & 0x3f) & 0x100003601U) != 0)) ||
             (((char)bVar1 < '\0' || (uVar21 = (ulong)bVar1 & 0x7f, 9 < uVar21 - 0x30))))
          goto LAB_00e77abc;
          if ((lVar14 < 0xccccccc) && (lVar15 < 0xccccccc)) break;
LAB_00e7777c:
          pbVar17 = pbVar17 + 1;
          if (param_2 <= pbVar17) goto LAB_00e77abc;
        }
        lVar14 = (long)(char)(&DAT_0197bb0c)[uVar21] + lVar14 * 10;
        if (0 < param_3) {
          param_3 = param_3 + -1;
          goto LAB_00e7777c;
        }
        lVar15 = lVar15 * 10;
        pbVar17 = pbVar17 + 1;
      } while (pbVar17 < param_2);
    }
    else {
      do {
        bVar1 = *pbVar17;
        if ((((bVar1 < 0x21) && ((1L << ((ulong)bVar1 & 0x3f) & 0x100003601U) != 0)) ||
            ((char)bVar1 < '\0')) || (uVar21 = (ulong)bVar1 & 0x7f, 9 < uVar21 - 0x30)) break;
        if ((lVar14 < 0xccccccc) && (lVar15 < 0xccccccc)) {
          lVar15 = lVar15 * 10;
          lVar14 = (long)(char)(&DAT_0197bb0c)[uVar21] + lVar14 * 10;
        }
        pbVar17 = pbVar17 + 1;
      } while (pbVar17 < param_2);
    }
  }
  else {
    lVar14 = 0;
    lVar15 = 1;
  }
LAB_00e77abc:
  pbVar13 = pbVar17 + 1;
  if ((pbVar13 < param_2) && ((*pbVar17 | 0x20) == 0x65)) {
    bVar1 = *pbVar13;
    if ((bVar1 == 0x2d) || (bVar1 == 0x2b)) {
      pbVar13 = pbVar17 + 2;
      if (pbVar13 == param_2) {
        return 0;
      }
      bVar9 = bVar1 == 0x2d;
      bVar1 = *pbVar13;
      if (bVar1 == 0x2b) {
        return 0;
      }
      if (bVar1 == 0x2d) {
        return 0;
      }
      lVar18 = 2;
    }
    else {
      bVar9 = false;
      lVar18 = 1;
    }
    lVar20 = lVar18;
    if (pbVar13 < param_2) {
      uVar21 = 0;
      bVar4 = false;
      while( true ) {
        lVar19 = lVar20 + 1;
        if (((bVar1 < 0x21) && ((1L << ((ulong)bVar1 & 0x3f) & 0x100003601U) != 0)) ||
           (lVar20 = lVar18, (char)bVar1 < '\0')) break;
        cVar2 = (&DAT_0197bb0c)[(ulong)bVar1 & 0x7f];
        if (((long)cVar2 < 0) || ('\t' < cVar2)) break;
        if ((long)uVar21 < 0xccccccd) {
          if ((uVar21 == 0xccccccc) && ('\a' < cVar2)) {
            bVar4 = true;
            uVar21 = 0xccccccc;
          }
          else {
            uVar21 = (long)cVar2 + uVar21 * 10;
          }
        }
        else {
          bVar4 = true;
        }
        lVar20 = lVar18 + 1;
        if (param_2 <= pbVar17 + lVar19) break;
        lVar18 = lVar18 + 1;
        bVar1 = pbVar17[lVar19];
        lVar20 = lVar19;
      }
      if (bVar4) {
        uVar21 = 0x7fffffff;
      }
      uVar11 = -uVar21;
      if (!bVar9) {
        uVar11 = uVar21;
      }
    }
    else {
      uVar11 = 0;
    }
    if (lVar20 == 1) {
      return 0;
    }
    if ((pbVar17 + lVar20 < param_2) && (pbVar17[lVar20] == 0x23)) {
      lVar18 = lVar20 + 1;
      pbVar13 = pbVar17 + lVar18;
      if (param_2 <= pbVar13) {
        return 0;
      }
      if (0x22 < uVar11 - 2) {
        return 0;
      }
      bVar1 = *pbVar13;
      if ((bVar1 == 0x2d) || (bVar1 == 0x2b)) {
        lVar19 = lVar20 + 2;
        pbVar13 = pbVar17 + lVar19;
        if (pbVar13 == param_2) {
          return 0;
        }
        bVar9 = bVar1 == 0x2d;
        bVar1 = *pbVar13;
        if (bVar1 == 0x2b) {
          return 0;
        }
        if (bVar1 == 0x2d) {
          return 0;
        }
      }
      else {
        bVar9 = false;
        lVar19 = lVar18;
      }
      lVar20 = lVar19;
      if (pbVar13 < param_2) {
        uVar3 = 0;
        if ((uint)uVar11 != 0) {
          uVar3 = 0x7fffffff / (uint)uVar11;
        }
        uVar12 = (ulong)uVar3;
        uVar21 = 0;
        bVar4 = false;
        while( true ) {
          lVar6 = lVar20 + 1;
          if (((bVar1 < 0x21) && ((1L << ((ulong)bVar1 & 0x3f) & 0x100003601U) != 0)) ||
             (lVar20 = lVar19, (char)bVar1 < '\0')) break;
          cVar2 = (&DAT_0197bb0c)[(ulong)bVar1 & 0x7f];
          iVar10 = (int)cVar2;
          if ((iVar10 < 0) || ((long)uVar11 <= (long)iVar10)) break;
          if ((long)uVar12 < (long)uVar21) {
            bVar4 = true;
          }
          else if ((uVar21 == uVar12) && ((char)(-1 - (char)uVar3 * (char)uVar11) < cVar2)) {
            bVar4 = true;
            uVar21 = uVar12;
          }
          else {
            uVar21 = (long)iVar10 + uVar21 * uVar11;
          }
          lVar20 = lVar19 + 1;
          if (param_2 <= pbVar17 + lVar6) break;
          lVar19 = lVar19 + 1;
          bVar1 = pbVar17[lVar6];
          lVar20 = lVar6;
        }
        if (bVar4) {
          uVar21 = 0x7fffffff;
        }
      }
      else {
        uVar21 = 0;
      }
      if (lVar20 == lVar18) {
        return 0;
      }
      uVar11 = -uVar21;
      if (!bVar9) {
        uVar11 = uVar21;
      }
      if (lVar20 == 1) {
        return 0;
      }
    }
    if ((long)uVar11 < 0x3e9) {
      uVar21 = 0;
      if (-0x3e9 < (long)uVar11) {
        uVar21 = uVar11;
      }
      bVar9 = (long)uVar11 < -1000;
      param_3 = uVar21 + param_3;
      *param_1 = (ulong)(pbVar17 + lVar20);
      if (lVar14 == 0 && uVar22 == 0) {
        return 0;
      }
    }
    else {
      bVar9 = false;
      bVar8 = true;
      *param_1 = (ulong)(pbVar17 + lVar20);
      if (lVar14 == 0 && uVar22 == 0) {
        return 0;
      }
    }
  }
  else {
    bVar9 = false;
    *param_1 = (ulong)pbVar17;
    if (lVar14 == 0 && uVar22 == 0) {
      return 0;
    }
  }
  if (bVar8) {
LAB_00e77b50:
    uVar22 = 0x7fffffff;
  }
  else {
    if (bVar9) {
      return 0;
    }
    if (param_3 < 1) {
      for (; param_3 < 0; param_3 = param_3 + 1) {
        if (0xccccccb < lVar15) {
          lVar14 = lVar14 / 10;
        }
        if ((uVar22 + 9 < 0x13) && (lVar14 == 0)) {
          return 0;
        }
        uVar22 = (long)uVar22 / 10;
        lVar18 = lVar15 * 10;
        if (0xccccccb < lVar15) {
          lVar18 = lVar15;
        }
        lVar15 = lVar18;
      }
    }
    else {
      do {
        if (0xccccccb < (long)uVar22) goto LAB_00e77b50;
        if (lVar14 < 0xccccccc) {
          lVar14 = lVar14 * 10;
        }
        else {
          if (lVar15 == 1) goto LAB_00e77b50;
          lVar15 = lVar15 / 10;
        }
        param_3 = param_3 + -1;
        uVar22 = uVar22 * 10;
      } while (0 < param_3);
    }
    if (lVar14 != 0) {
      lVar14 = FT_DivFix(lVar14,lVar15);
      uVar22 = lVar14 + uVar22;
    }
  }
  if (!bVar7) {
    return uVar22;
  }
  return -uVar22;
}

