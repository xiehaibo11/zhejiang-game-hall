
/* WARNING: Type propagation algorithm not settling */
/* double v8::internal::InternalStringToIntDouble<3, char*, char*>(char*, char*, bool, bool) */

double v8::internal::InternalStringToIntDouble<3,char*,char*>
                 (char *param_1,char *param_2,bool param_3,bool param_4)

{
  byte bVar1;
  char *pcVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  double dVar16;
  
  pcVar2 = param_1;
  while( true ) {
    pcVar2 = pcVar2 + 1;
    bVar1 = *param_1;
    uVar6 = (ulong)bVar1;
    if (bVar1 != 0x30) break;
    param_1 = param_1 + 1;
    if (param_2 == param_1) {
      if (!param_3) {
        return 0.0;
      }
      return -0.0;
    }
  }
  if ((bVar1 & 0xf8) != 0x30) {
    lVar11 = 0;
joined_r0x01066a2c:
    if ((param_1 != param_2) && (uVar5 = (uint)uVar6, !param_4)) {
      pbVar8 = (byte *)(param_1 + 1);
      if ((char)uVar6 < '\0') goto LAB_01066a68;
      do {
        pbVar7 = pbVar8;
        if (((byte)(&DAT_019d520f)[uVar6] >> 3 & 1) == 0) {
          return NAN;
        }
        while( true ) {
          if ((byte *)param_2 == pbVar7) goto LAB_01066a8c;
          pbVar8 = pbVar7 + 1;
          bVar1 = *pbVar7;
          uVar6 = (ulong)bVar1;
          uVar5 = (uint)bVar1;
          if (-1 < (char)bVar1) break;
LAB_01066a68:
          uVar6 = unibrow::WhiteSpace::Is(uVar5);
          pbVar7 = pbVar8;
          if ((uVar6 & 1) == 0) {
            return NAN;
          }
        }
      } while( true );
    }
LAB_01066a8c:
    if (param_3) {
      if (lVar11 == 0) {
        return -0.0;
      }
      lVar11 = -lVar11;
    }
    return (double)lVar11;
  }
  lVar11 = 0;
  lVar3 = (long)param_2 - (long)pcVar2;
  while( true ) {
    lVar11 = lVar11 * 8 + uVar6 + -0x30;
    uVar6 = lVar11 >> 0x35;
    iVar4 = (int)(lVar11 >> 0x35);
    if (iVar4 != 0) break;
    param_1 = param_1 + 1;
    if (param_1 == param_2) goto LAB_01066a8c;
    uVar6 = (ulong)(byte)*param_1;
    lVar3 = lVar3 + -1;
    if ((*param_1 & 0xf8U) != 0x30) goto joined_r0x01066a2c;
  }
  uVar12 = 1;
  if (1 < iVar4) {
    do {
      uVar5 = (uint)uVar6;
      uVar6 = uVar6 >> 1 & 0x7fffffff;
      uVar12 = (ulong)((int)uVar12 + 1);
    } while (3 < uVar5);
  }
  uVar5 = (uint)uVar12;
  if (param_1 + 1 == param_2) {
    uVar13 = 1;
    uVar10 = uVar5;
  }
  else {
    lVar14 = 0;
    uVar10 = (uVar5 + (int)param_2 * 3 + (int)param_1 * -3) - 3;
    uVar13 = 1;
    lVar15 = lVar3;
    uVar6 = uVar12;
    do {
      uVar9 = (uint)uVar6;
      bVar1 = param_1[lVar14 + 1];
      if ((0x37 < bVar1) || (9 < bVar1 - 0x30)) {
        uVar10 = uVar9;
        if (!param_4) {
          lVar15 = 0;
          lVar3 = lVar3 - lVar14;
          do {
            bVar1 = param_1[lVar14 + lVar15 + 1];
            if ((char)bVar1 < '\0') {
              uVar6 = unibrow::WhiteSpace::Is((uint)bVar1);
              if ((uVar6 & 1) == 0) {
                return NAN;
              }
            }
            else if (((byte)(&DAT_019d520f)[(uint)bVar1] >> 3 & 1) == 0) {
              return NAN;
            }
            lVar3 = lVar3 + -1;
            lVar15 = lVar15 + 1;
          } while (lVar3 != 0);
        }
        break;
      }
      uVar6 = (ulong)(uVar9 + 3);
      lVar15 = lVar15 + -1;
      uVar13 = uVar13 & bVar1 == 0x30;
      lVar14 = lVar14 + 1;
    } while (lVar15 != 0);
  }
  uVar9 = (uint)lVar11 & (-1 << (ulong)(uVar5 & 0x1f) ^ 0xffffffffU);
  uVar5 = 1 << (ulong)(uVar5 - 1 & 0x1f);
  uVar6 = lVar11 >> (uVar12 & 0x3f);
  if ((int)uVar5 < (int)uVar9) {
    uVar6 = uVar6 + 1;
  }
  else if (uVar9 == uVar5) {
    uVar6 = uVar6 + ((ulong)((uint)uVar6 | uVar13 ^ 0xffffffff) & 1);
  }
  uVar12 = uVar6 >> 0x35 & 1;
  lVar3 = (long)uVar6 >> uVar12;
  lVar11 = -lVar3;
  if (!param_3) {
    lVar11 = lVar3;
  }
  dVar16 = ldexp((double)lVar11,uVar10 + (int)uVar12);
  return dVar16;
}

