
/* WARNING: Type propagation algorithm not settling */
/* double v8::internal::InternalStringToIntDouble<1, unsigned char const*, unsigned char
   const*>(unsigned char const*, unsigned char const*, bool, bool) */

double v8::internal::InternalStringToIntDouble<1,unsigned_char_const*,unsigned_char_const*>
                 (uchar *param_1,uchar *param_2,bool param_3,bool param_4)

{
  uint uVar1;
  byte bVar2;
  uchar *puVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  double dVar16;
  
  puVar3 = param_1;
  while( true ) {
    puVar3 = puVar3 + 1;
    bVar2 = *param_1;
    uVar7 = (ulong)bVar2;
    if (bVar2 != 0x30) break;
    param_1 = param_1 + 1;
    if (param_2 == param_1) {
      if (!param_3) {
        return 0.0;
      }
      return -0.0;
    }
  }
  if ((bVar2 & 0xfe) != 0x30) {
    lVar11 = 0;
joined_r0x01064ea4:
    if ((param_1 != param_2) && (uVar6 = (uint)uVar7, !param_4)) {
      pbVar9 = param_1 + 1;
      if ((char)uVar7 < '\0') goto LAB_01064ee0;
      do {
        pbVar8 = pbVar9;
        if (((byte)(&DAT_019d520f)[uVar7] >> 3 & 1) == 0) {
          return NAN;
        }
        while( true ) {
          if (param_2 == pbVar8) goto LAB_01064f04;
          pbVar9 = pbVar8 + 1;
          bVar2 = *pbVar8;
          uVar7 = (ulong)bVar2;
          uVar6 = (uint)bVar2;
          if (-1 < (char)bVar2) break;
LAB_01064ee0:
          uVar7 = unibrow::WhiteSpace::Is(uVar6);
          pbVar8 = pbVar9;
          if ((uVar7 & 1) == 0) {
            return NAN;
          }
        }
      } while( true );
    }
LAB_01064f04:
    if (param_3) {
      if (lVar11 == 0) {
        return -0.0;
      }
      lVar11 = -lVar11;
    }
    return (double)lVar11;
  }
  lVar11 = 0;
  lVar4 = (long)param_2 - (long)puVar3;
  while( true ) {
    lVar11 = lVar11 * 2 + uVar7 + -0x30;
    uVar7 = lVar11 >> 0x35;
    iVar5 = (int)(lVar11 >> 0x35);
    if (iVar5 != 0) break;
    param_1 = param_1 + 1;
    if (param_1 == param_2) goto LAB_01064f04;
    uVar7 = (ulong)*param_1;
    lVar4 = lVar4 + -1;
    if ((*param_1 & 0xfe) != 0x30) goto joined_r0x01064ea4;
  }
  uVar12 = 1;
  if (1 < iVar5) {
    do {
      uVar6 = (uint)uVar7;
      uVar7 = uVar7 >> 1 & 0x7fffffff;
      uVar12 = (ulong)((int)uVar12 + 1);
    } while (3 < uVar6);
  }
  uVar6 = (uint)uVar12;
  if (param_1 + 1 == param_2) {
    uVar13 = 1;
    uVar10 = uVar6;
  }
  else {
    lVar14 = 0;
    uVar10 = uVar6 + (int)param_2 + ~(uint)param_1;
    uVar13 = 1;
    lVar15 = lVar4;
    do {
      bVar2 = param_1[lVar14 + 1];
      if ((0x31 < bVar2) || (9 < bVar2 - 0x30)) {
        uVar10 = (int)lVar14 + uVar6;
        if (!param_4) {
          lVar15 = 0;
          lVar4 = lVar4 - lVar14;
          do {
            bVar2 = param_1[lVar14 + lVar15 + 1];
            if ((char)bVar2 < '\0') {
              uVar7 = unibrow::WhiteSpace::Is((uint)bVar2);
              if ((uVar7 & 1) == 0) {
                return NAN;
              }
            }
            else if (((byte)(&DAT_019d520f)[(uint)bVar2] >> 3 & 1) == 0) {
              return NAN;
            }
            lVar4 = lVar4 + -1;
            lVar15 = lVar15 + 1;
          } while (lVar4 != 0);
        }
        break;
      }
      lVar15 = lVar15 + -1;
      uVar13 = uVar13 & bVar2 == 0x30;
      lVar14 = lVar14 + 1;
    } while (lVar15 != 0);
  }
  uVar1 = (uint)lVar11 & (-1 << (ulong)(uVar6 & 0x1f) ^ 0xffffffffU);
  uVar6 = 1 << (ulong)(uVar6 - 1 & 0x1f);
  uVar7 = lVar11 >> (uVar12 & 0x3f);
  if ((int)uVar6 < (int)uVar1) {
    uVar7 = uVar7 + 1;
  }
  else if (uVar1 == uVar6) {
    uVar7 = uVar7 + ((ulong)((uint)uVar7 | uVar13 ^ 0xffffffff) & 1);
  }
  uVar12 = uVar7 >> 0x35 & 1;
  lVar4 = (long)uVar7 >> uVar12;
  lVar11 = -lVar4;
  if (!param_3) {
    lVar11 = lVar4;
  }
  dVar16 = ldexp((double)lVar11,uVar10 + (int)uVar12);
  return dVar16;
}

