
/* double v8::internal::InternalStringToIntDouble<5, unsigned char const*, unsigned char
   const*>(unsigned char const*, unsigned char const*, bool, bool) */

double v8::internal::InternalStringToIntDouble<5,unsigned_char_const*,unsigned_char_const*>
                 (uchar *param_1,uchar *param_2,bool param_3,bool param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  uchar *puVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  double dVar14;
  
  puVar5 = param_1;
  while( true ) {
    puVar5 = puVar5 + 1;
    bVar1 = *param_1;
    if (bVar1 != 0x30) break;
    param_1 = param_1 + 1;
    if (param_2 == param_1) {
      if (!param_3) {
        return 0.0;
      }
      return -0.0;
    }
  }
  lVar8 = 0;
  lVar9 = (long)param_2 - (long)puVar5;
LAB_010658f0:
  uVar4 = (ulong)bVar1;
  if ((byte)(bVar1 - 0x30) < 10) {
    lVar6 = -0x30;
  }
  else if ((byte)(bVar1 + 0x9f) < 0x16) {
    lVar6 = -0x57;
  }
  else {
    if (0x15 < (byte)(bVar1 + 0xbf)) {
      if ((param_1 != param_2) && (!param_4)) {
        lVar6 = 1;
        if ((char)bVar1 < '\0') goto LAB_01065aac;
        do {
          if (((byte)(&DAT_019d520f)[uVar4] >> 3 & 1) == 0) {
            return NAN;
          }
          while( true ) {
            if (lVar9 == 0) goto LAB_01065ac4;
            bVar1 = param_1[lVar6];
            uVar4 = (ulong)bVar1;
            lVar6 = lVar6 + 1;
            lVar9 = lVar9 + -1;
            if (-1 < (char)bVar1) break;
LAB_01065aac:
            uVar4 = unibrow::WhiteSpace::Is((uint)bVar1);
            if ((uVar4 & 1) == 0) {
              return NAN;
            }
          }
        } while( true );
      }
LAB_01065ac4:
      if (param_3) {
        if (lVar8 == 0) {
          return -0.0;
        }
        lVar8 = -lVar8;
      }
      return (double)lVar8;
    }
    lVar6 = -0x37;
  }
  lVar8 = lVar6 + uVar4 + lVar8 * 0x20;
  uVar4 = lVar8 >> 0x35;
  iVar2 = (int)(lVar8 >> 0x35);
  if (iVar2 == 0) {
    param_1 = param_1 + 1;
    if (param_1 == param_2) goto LAB_01065ac4;
    bVar1 = *param_1;
    lVar9 = lVar9 + -1;
    goto LAB_010658f0;
  }
  uVar10 = 1;
  if (1 < iVar2) {
    do {
      uVar3 = (uint)uVar4;
      uVar4 = uVar4 >> 1 & 0x7fffffff;
      uVar10 = (ulong)((int)uVar10 + 1);
    } while (3 < uVar3);
  }
  uVar3 = (uint)uVar10;
  if (param_1 + 1 == param_2) {
    uVar12 = 1;
    uVar11 = uVar3;
  }
  else {
    lVar6 = 0;
    uVar12 = 1;
    lVar13 = lVar9;
    uVar4 = uVar10;
    do {
      uVar11 = (uint)uVar4;
      uVar7 = (uint)param_1[lVar6 + 1];
      if ((0x15 < ((uVar7 & 0xffffffdf) - 0x41 & 0xff)) && (0x4f < uVar7 || 9 < uVar7 - 0x30)) {
        if (!param_4) {
          lVar13 = 0;
          lVar9 = lVar9 - lVar6;
          do {
            bVar1 = param_1[lVar6 + lVar13 + 1];
            if ((char)bVar1 < '\0') {
              uVar4 = unibrow::WhiteSpace::Is((uint)bVar1);
              if ((uVar4 & 1) == 0) {
                return NAN;
              }
            }
            else if (((byte)(&DAT_019d520f)[(uint)bVar1] >> 3 & 1) == 0) {
              return NAN;
            }
            lVar9 = lVar9 + -1;
            lVar13 = lVar13 + 1;
          } while (lVar9 != 0);
        }
        break;
      }
      uVar4 = (ulong)(uVar11 + 5);
      lVar13 = lVar13 + -1;
      uVar12 = uVar12 & uVar7 == 0x30;
      lVar6 = lVar6 + 1;
      uVar11 = (uVar3 + (int)param_2 * 5 + (int)param_1 * -5) - 5;
    } while (lVar13 != 0);
  }
  uVar7 = (uint)lVar8 & (-1 << (ulong)(uVar3 & 0x1f) ^ 0xffffffffU);
  uVar3 = 1 << (ulong)(uVar3 - 1 & 0x1f);
  uVar4 = lVar8 >> (uVar10 & 0x3f);
  if ((int)uVar3 < (int)uVar7) {
    uVar4 = uVar4 + 1;
  }
  else if (uVar7 == uVar3) {
    uVar4 = uVar4 + ((ulong)((uint)uVar4 | uVar12 ^ 0xffffffff) & 1);
  }
  uVar10 = uVar4 >> 0x35 & 1;
  lVar9 = (long)uVar4 >> uVar10;
  lVar8 = -lVar9;
  if (!param_3) {
    lVar8 = lVar9;
  }
  dVar14 = ldexp((double)lVar8,uVar11 + (int)uVar10);
  return dVar14;
}

