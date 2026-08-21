
/* double v8::internal::InternalStringToIntDouble<5, unsigned short const*, unsigned short
   const*>(unsigned short const*, unsigned short const*, bool, bool) */

double v8::internal::InternalStringToIntDouble<5,unsigned_short_const*,unsigned_short_const*>
                 (ushort *param_1,ushort *param_2,bool param_3,bool param_4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  ushort *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  double dVar14;
  
  puVar6 = param_1;
  while( true ) {
    puVar6 = puVar6 + 1;
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
  lVar9 = (long)param_2 - (long)puVar6;
LAB_01066694:
  uVar2 = (uint)uVar1;
  if ((uVar2 - 0x30 & 0xffff) < 10) {
    lVar7 = -0x30;
  }
  else if ((uVar2 - 0x61 & 0xffff) < 0x16) {
    lVar7 = -0x57;
  }
  else {
    if (0x15 < (uVar2 - 0x41 & 0xffff)) {
      if ((param_1 != param_2) && (!param_4)) {
        lVar7 = 2;
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
          uVar2 = (uint)*(ushort *)((long)param_1 + lVar7);
          lVar7 = lVar7 + 2;
          lVar9 = lVar9 + -2;
        }
      }
LAB_010668c8:
      if (param_3) {
        if (lVar8 == 0) {
          return -0.0;
        }
        lVar8 = -lVar8;
      }
      return (double)lVar8;
    }
    lVar7 = -0x37;
  }
  lVar8 = lVar7 + (ulong)uVar1 + lVar8 * 0x20;
  uVar4 = lVar8 >> 0x35;
  iVar3 = (int)(lVar8 >> 0x35);
  if (iVar3 == 0) {
    param_1 = param_1 + 1;
    if (param_1 == param_2) goto LAB_010668c8;
    uVar1 = *param_1;
    lVar9 = lVar9 + -2;
    goto LAB_01066694;
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
    uVar12 = 1;
    uVar11 = uVar2;
  }
  else {
    lVar7 = 0;
    uVar12 = 1;
    lVar13 = lVar9;
    uVar4 = uVar10;
    do {
      uVar11 = (uint)uVar4;
      uVar5 = (uint)*(ushort *)((long)param_1 + lVar7 + 2);
      if ((0x15 < ((uVar5 & 0xffffffdf) - 0x41 & 0xffff)) && (0x4f < uVar5 || 9 < uVar5 - 0x30)) {
        if (!param_4) {
          lVar13 = 0;
          lVar9 = lVar9 - lVar7;
          do {
            uVar1 = *(ushort *)((long)param_1 + lVar7 + lVar13 + 2);
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
            lVar13 = lVar13 + 2;
          } while (lVar9 != 0);
        }
        break;
      }
      uVar4 = (ulong)(uVar11 + 5);
      lVar13 = lVar13 + -2;
      uVar12 = uVar12 & uVar5 == 0x30;
      lVar7 = lVar7 + 2;
      uVar11 = uVar11 + 5;
    } while (lVar13 != 0);
  }
  uVar5 = (uint)lVar8 & (-1 << (ulong)(uVar2 & 0x1f) ^ 0xffffffffU);
  uVar2 = 1 << (ulong)(uVar2 - 1 & 0x1f);
  uVar4 = lVar8 >> (uVar10 & 0x3f);
  if ((int)uVar2 < (int)uVar5) {
    uVar4 = uVar4 + 1;
  }
  else if (uVar5 == uVar2) {
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

