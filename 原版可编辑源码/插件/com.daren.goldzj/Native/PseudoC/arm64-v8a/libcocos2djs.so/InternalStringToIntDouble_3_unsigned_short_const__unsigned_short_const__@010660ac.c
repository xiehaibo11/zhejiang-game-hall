
/* double v8::internal::InternalStringToIntDouble<3, unsigned short const*, unsigned short
   const*>(unsigned short const*, unsigned short const*, bool, bool) */

double v8::internal::InternalStringToIntDouble<3,unsigned_short_const*,unsigned_short_const*>
                 (ushort *param_1,ushort *param_2,bool param_3,bool param_4)

{
  uint uVar1;
  ushort uVar2;
  ushort *puVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  double dVar14;
  
  puVar3 = param_1;
  while( true ) {
    puVar3 = puVar3 + 1;
    uVar2 = *param_1;
    uVar5 = (uint)uVar2;
    if (uVar2 != 0x30) break;
    param_1 = param_1 + 1;
    if (param_2 == param_1) {
      if (!param_3) {
        return 0.0;
      }
      return -0.0;
    }
  }
  if ((uVar2 & 0xfff8) != 0x30) {
    lVar8 = 0;
joined_r0x01066158:
    if ((param_1 != param_2) && (!param_4)) {
      while( true ) {
        param_1 = param_1 + 1;
        if (uVar5 < 0x80) {
          if (((byte)(&DAT_019d520f)[uVar5] >> 3 & 1) == 0) {
            return NAN;
          }
        }
        else {
          uVar7 = unibrow::WhiteSpace::Is(uVar5);
          if (((uVar5 & 0xfffe) != 0x2028) && ((uVar7 & 1) == 0)) {
            return NAN;
          }
        }
        if (param_2 == param_1) break;
        uVar5 = (uint)*param_1;
      }
    }
LAB_010661bc:
    if (param_3) {
      if (lVar8 == 0) {
        return -0.0;
      }
      lVar8 = -lVar8;
    }
    return (double)lVar8;
  }
  lVar8 = 0;
  lVar4 = (long)param_2 - (long)puVar3;
  while( true ) {
    lVar8 = lVar8 * 8 + (ulong)(ushort)uVar5 + -0x30;
    uVar7 = lVar8 >> 0x35;
    iVar6 = (int)(lVar8 >> 0x35);
    if (iVar6 != 0) break;
    param_1 = param_1 + 1;
    if (param_1 == param_2) goto LAB_010661bc;
    uVar5 = (uint)*param_1;
    lVar4 = lVar4 + -2;
    if ((uVar5 & 0xfff8) != 0x30) goto joined_r0x01066158;
  }
  uVar9 = 1;
  if (1 < iVar6) {
    do {
      uVar5 = (uint)uVar7;
      uVar7 = uVar7 >> 1 & 0x7fffffff;
      uVar9 = (ulong)((int)uVar9 + 1);
    } while (3 < uVar5);
  }
  uVar5 = (uint)uVar9;
  if (param_1 + 1 == param_2) {
    uVar11 = 1;
    uVar10 = uVar5;
  }
  else {
    lVar12 = 0;
    uVar11 = 1;
    lVar13 = lVar4;
    uVar7 = uVar9;
    do {
      uVar10 = (uint)uVar7;
      uVar2 = *(ushort *)((long)param_1 + lVar12 + 2);
      if ((0x37 < uVar2) || (9 < uVar2 - 0x30)) {
        if (!param_4) {
          lVar13 = 0;
          lVar4 = lVar4 - lVar12;
          do {
            uVar2 = *(ushort *)((long)param_1 + lVar12 + lVar13 + 2);
            if (uVar2 < 0x80) {
              if (((byte)(&DAT_019d520f)[uVar2] >> 3 & 1) == 0) {
                return NAN;
              }
            }
            else {
              uVar7 = unibrow::WhiteSpace::Is((uint)uVar2);
              if (((uVar2 & 0xfffe) != 0x2028) && ((uVar7 & 1) == 0)) {
                return NAN;
              }
            }
            lVar4 = lVar4 + -2;
            lVar13 = lVar13 + 2;
          } while (lVar4 != 0);
        }
        break;
      }
      uVar10 = uVar10 + 3;
      uVar7 = (ulong)uVar10;
      lVar13 = lVar13 + -2;
      uVar11 = uVar11 & uVar2 == 0x30;
      lVar12 = lVar12 + 2;
    } while (lVar13 != 0);
  }
  uVar1 = (uint)lVar8 & (-1 << (ulong)(uVar5 & 0x1f) ^ 0xffffffffU);
  uVar5 = 1 << (ulong)(uVar5 - 1 & 0x1f);
  uVar7 = lVar8 >> (uVar9 & 0x3f);
  if ((int)uVar5 < (int)uVar1) {
    uVar7 = uVar7 + 1;
  }
  else if (uVar1 == uVar5) {
    uVar7 = uVar7 + ((ulong)((uint)uVar7 | uVar11 ^ 0xffffffff) & 1);
  }
  uVar9 = uVar7 >> 0x35 & 1;
  lVar4 = (long)uVar7 >> uVar9;
  lVar8 = -lVar4;
  if (!param_3) {
    lVar8 = lVar4;
  }
  dVar14 = ldexp((double)lVar8,uVar10 + (int)uVar9);
  return dVar14;
}

