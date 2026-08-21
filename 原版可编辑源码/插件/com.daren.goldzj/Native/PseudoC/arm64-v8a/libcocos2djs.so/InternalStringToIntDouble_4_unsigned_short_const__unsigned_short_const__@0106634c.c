
/* double v8::internal::InternalStringToIntDouble<4, unsigned short const*, unsigned short
   const*>(unsigned short const*, unsigned short const*, bool, bool) */

double v8::internal::InternalStringToIntDouble<4,unsigned_short_const*,unsigned_short_const*>
                 (ushort *param_1,ushort *param_2,bool param_3,bool param_4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ushort *puVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  double dVar14;
  
  puVar5 = param_1;
  while( true ) {
    puVar5 = puVar5 + 1;
    uVar1 = *param_1;
    if (uVar1 != 0x30) break;
    param_1 = param_1 + 1;
    if (param_2 == param_1) {
      dVar14 = -0.0;
      if (!param_3) {
        dVar14 = 0.0;
      }
      return dVar14;
    }
  }
  lVar8 = 0;
  lVar9 = (long)param_2 - (long)puVar5;
LAB_010663b0:
  uVar2 = (uint)uVar1;
  if ((uVar2 - 0x30 & 0xffff) < 10) {
    lVar6 = -0x30;
  }
  else if ((uVar2 - 0x61 & 0xffff) < 6) {
    lVar6 = -0x57;
  }
  else {
    if (5 < (uVar2 - 0x41 & 0xffff)) {
      if ((param_1 != param_2) && (!param_4)) {
        lVar6 = 2;
        while( true ) {
          if (uVar2 < 0x80) {
            if (((byte)(&DAT_019d520f)[uVar2] >> 3 & 1) == 0) {
              return NAN;
            }
          }
          else {
            uVar4 = unibrow::WhiteSpace::Is(uVar2);
            if (((uVar2 & 0xfffe) != 0x2028) && ((uVar4 & 1) == 0)) {
              return NAN;
            }
          }
          if (lVar9 == 0) break;
          uVar2 = (uint)*(ushort *)((long)param_1 + lVar6);
          lVar6 = lVar6 + 2;
          lVar9 = lVar9 + -2;
        }
      }
LAB_010665e4:
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
  lVar8 = lVar6 + (ulong)uVar1 + lVar8 * 0x10;
  uVar4 = lVar8 >> 0x35;
  iVar3 = (int)(lVar8 >> 0x35);
  if (iVar3 == 0) {
    param_1 = param_1 + 1;
    if (param_1 == param_2) goto LAB_010665e4;
    uVar1 = *param_1;
    lVar9 = lVar9 + -2;
    goto LAB_010663b0;
  }
  uVar10 = 1;
  if (1 < iVar3) {
    do {
      uVar2 = (uint)uVar4;
      uVar4 = uVar4 >> 1 & 0x7fffffff;
      uVar10 = (ulong)((int)uVar10 + 1);
    } while (3 < uVar2);
  }
  uVar2 = (uint)uVar10;
  if (param_1 + 1 == param_2) {
    uVar13 = 1;
    uVar11 = uVar2;
  }
  else {
    lVar6 = 0;
    uVar13 = 1;
    lVar12 = lVar9;
    uVar4 = uVar10;
    do {
      uVar11 = (uint)uVar4;
      uVar1 = *(ushort *)((long)param_1 + lVar6 + 2);
      uVar7 = (uint)uVar1;
      if (((0x3f < uVar7) || (9 < uVar7 - 0x30)) &&
         ((0x25 < uVar7 - 0x41 || ((1L << ((ulong)(uVar7 - 0x41) & 0x3f) & 0x3f0000003fU) == 0)))) {
        if (!param_4) {
          lVar12 = 0;
          lVar9 = lVar9 - lVar6;
          do {
            uVar1 = *(ushort *)((long)param_1 + lVar6 + lVar12 + 2);
            if (uVar1 < 0x80) {
              if (((byte)(&DAT_019d520f)[uVar1] >> 3 & 1) == 0) {
                return NAN;
              }
            }
            else {
              uVar4 = unibrow::WhiteSpace::Is((uint)uVar1);
              if (((uVar1 & 0xfffe) != 0x2028) && ((uVar4 & 1) == 0)) {
                return NAN;
              }
            }
            lVar9 = lVar9 + -2;
            lVar12 = lVar12 + 2;
          } while (lVar9 != 0);
        }
        break;
      }
      uVar4 = (ulong)(uVar11 + 4);
      lVar12 = lVar12 + -2;
      uVar13 = uVar13 & uVar1 == 0x30;
      lVar6 = lVar6 + 2;
      uVar11 = uVar11 + 4;
    } while (lVar12 != 0);
  }
  uVar7 = (uint)lVar8 & (-1 << (ulong)(uVar2 & 0x1f) ^ 0xffffffffU);
  uVar2 = 1 << (ulong)(uVar2 - 1 & 0x1f);
  uVar4 = lVar8 >> (uVar10 & 0x3f);
  if ((int)uVar2 < (int)uVar7) {
    uVar4 = uVar4 + 1;
  }
  else if (uVar7 == uVar2) {
    uVar4 = uVar4 + ((ulong)((uint)uVar4 | uVar13 ^ 0xffffffff) & 1);
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

