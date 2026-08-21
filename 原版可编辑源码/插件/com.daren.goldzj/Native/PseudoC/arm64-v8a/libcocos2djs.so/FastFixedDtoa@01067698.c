
/* v8::internal::FastFixedDtoa(double, int, v8::internal::Vector<char>, int*, int*) */

undefined8 __thiscall
v8::internal::FastFixedDtoa
          (ulong param_1,int param_2,byte *param_3,undefined8 param_4,uint *param_5,uint *param_6)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar10;
  
  bVar5 = (param_1 & 0x7ff0000000000000) != 0;
  uVar7 = param_1 & 0xfffffffffffff;
  if (bVar5) {
    uVar7 = param_1 & 0xfffffffffffff | 0x10000000000000;
  }
  uVar11 = 0xfffffbce;
  if (bVar5) {
    uVar11 = ((uint)(param_1 >> 0x34) & 0x7ff) - 0x433;
  }
  if (0x14 < param_2) {
    return 0;
  }
  if (0x14 < (int)uVar11) {
    return 0;
  }
  *param_5 = 0;
  if ((int)uVar11 < 0xc) {
    if ((int)uVar11 < 0) {
      if ((int)uVar11 < -0x34) {
        if ((int)uVar11 < -0x80) {
          *param_3 = 0;
          *param_5 = 0;
          *param_6 = -param_2;
          goto LAB_01067c7c;
        }
        *param_6 = 0;
      }
      else {
        uVar12 = uVar7 >> ((ulong)-uVar11 & 0x3f);
        uVar7 = uVar7 - (uVar12 << ((ulong)-uVar11 & 0x3f));
        if (uVar12 >> 0x20 == 0) {
          if ((uint)uVar12 == 0) {
            uVar6 = 0;
            iVar9 = 0;
          }
          else {
            *param_3 = (char)uVar12 + (char)((uVar12 & 0xffffffff) / 10) * -10 | 0x30;
            iVar9 = 1;
            if (9 < (uint)uVar12) {
              do {
                uVar8 = uVar12 & 0xffffffff;
                uVar6 = (uint)uVar12;
                uVar12 = uVar8 / 10;
                iVar1 = iVar9 + *param_5;
                iVar9 = iVar9 + 1;
                param_3[iVar1] = (char)(uVar8 / 10) + (char)(uVar12 / 10) * -10 | 0x30;
              } while (99 < uVar6);
            }
            uVar6 = *param_5;
          }
          uVar2 = uVar6 + iVar9;
          if ((int)uVar6 < (int)(uVar2 - 1)) {
            lVar13 = (long)(int)(uVar2 - 1);
            lVar14 = (long)(int)uVar6;
            do {
              bVar3 = param_3[lVar14];
              param_3[lVar14] = param_3[lVar13];
              param_3[lVar13] = bVar3;
              lVar14 = lVar14 + 1;
              lVar13 = lVar13 + -1;
            } while (lVar14 < lVar13);
            uVar2 = *param_5 + iVar9;
          }
          *param_5 = uVar2;
        }
        else {
          FUN_01067d84(uVar12,param_3,param_4,param_5);
          uVar2 = *param_5;
        }
        *param_6 = uVar2;
      }
      FUN_010681a8(uVar7,uVar11,param_2,param_3,param_4,param_5,param_6);
    }
    else {
      FUN_01067d84(uVar7 << ((ulong)uVar11 & 0x3f),param_3,param_4,param_5);
      *param_6 = *param_5;
    }
  }
  else {
    if ((int)uVar11 < 0x12) {
      uVar8 = 0xb1a2bc2ec5 << ((ulong)(0x11 - uVar11) & 0x3f);
      uVar12 = 0;
      if (uVar8 != 0) {
        uVar12 = uVar7 / uVar8;
      }
      uVar8 = uVar7 - uVar12 * uVar8 << ((ulong)uVar11 & 0x3f);
      if ((int)uVar12 != 0) goto LAB_01067750;
LAB_01067804:
      uVar11 = 0;
      iVar9 = 0;
    }
    else {
      uVar7 = uVar7 << ((ulong)(uVar11 - 0x11) & 0x3f);
      uVar12 = uVar7 / 0xb1a2bc2ec5;
      uVar8 = (uVar7 % 0xb1a2bc2ec5) * 0x20000;
      if ((int)(uVar7 / 0xb1a2bc2ec5) == 0) goto LAB_01067804;
LAB_01067750:
      *param_3 = (char)uVar12 + (char)((uVar12 & 0xffffffff) / 10) * -10 | 0x30;
      iVar9 = 1;
      if (9 < (uint)uVar12) {
        do {
          uVar7 = uVar12 & 0xffffffff;
          uVar11 = (uint)uVar12;
          uVar12 = uVar7 / 10;
          iVar1 = iVar9 + *param_5;
          iVar9 = iVar9 + 1;
          param_3[iVar1] = (char)(uVar7 / 10) + (char)(uVar12 / 10) * -10 | 0x30;
        } while (99 < uVar11);
      }
      uVar11 = *param_5;
    }
    uVar6 = uVar11 + iVar9;
    if ((int)uVar11 < (int)(uVar6 - 1)) {
      lVar13 = (long)(int)(uVar6 - 1);
      lVar14 = (long)(int)uVar11;
      do {
        bVar3 = param_3[lVar14];
        param_3[lVar14] = param_3[lVar13];
        param_3[lVar13] = bVar3;
        lVar14 = lVar14 + 1;
        lVar13 = lVar13 + -1;
      } while (lVar14 < lVar13);
      uVar6 = *param_5 + iVar9;
    }
    uVar7 = uVar8 / 100000000000000;
    cVar4 = (char)(uVar7 / 10);
    *param_5 = uVar6;
    param_3[(long)(int)uVar6 + 2] = (char)(uVar8 / 100000000000000) + cVar4 * -10 | 0x30;
    param_3[(long)(int)*param_5 + 1] = cVar4 + (char)(uVar7 / 100) * -10 | 0x30;
    param_3[(int)*param_5] = (char)(uVar7 / 100) + (char)(uVar7 / 1000) * -10 | 0x30;
    uVar11 = *param_5;
    uVar7 = (uVar8 / 10000000) % 10000000;
    uVar8 = uVar8 % 10000000;
    *param_5 = uVar11 + 3;
    cVar4 = (char)(uVar7 / 10);
    param_3[(long)(int)uVar11 + 9] = (char)uVar7 + cVar4 * -10 | 0x30;
    param_3[(long)(int)*param_5 + 5] =
         cVar4 + (char)((uVar7 * 0xcccccccd) / 0x5000000000) * -10 | 0x30;
    param_3[(long)(int)*param_5 + 4] =
         (char)(uVar7 / 100) + (char)((uVar7 * 0x51eb851f) / 0x14000000000) * -10 | 0x30;
    param_3[(long)(int)*param_5 + 3] = (char)(uVar7 / 1000) + (char)(uVar7 / 10000) * -10 | 0x30;
    param_3[(long)(int)*param_5 + 2] = (char)(uVar7 / 10000) + (char)(uVar7 / 100000) * -10 | 0x30;
    cVar4 = (char)(uVar8 / 10);
    param_3[(long)(int)*param_5 + 1] =
         (char)((uVar7 >> 5) / 0xc35) + (char)((uVar7 >> 5) / 0x7a12) * -10 | 0x30;
    param_3[(int)*param_5] = (char)(uVar7 / 1000000) + (char)(uVar7 / 10000000) * -10 | 0x30;
    uVar11 = *param_5;
    *param_5 = uVar11 + 7;
    param_3[(long)(int)uVar11 + 0xd] = (char)uVar8 + cVar4 * -10 | 0x30;
    param_3[(long)(int)*param_5 + 5] = cVar4 + (char)(uVar8 / 100) * -10 | 0x30;
    param_3[(long)(int)*param_5 + 4] = (char)(uVar8 / 100) + (char)(uVar8 / 1000) * -10 | 0x30;
    param_3[(long)(int)*param_5 + 3] = (char)(uVar8 / 1000) + (char)(uVar8 / 10000) * -10 | 0x30;
    param_3[(long)(int)*param_5 + 2] = (char)(uVar8 / 10000) + (char)(uVar8 / 100000) * -10 | 0x30;
    param_3[(long)(int)*param_5 + 1] =
         (char)((uVar8 >> 5) / 0xc35) + (char)((uVar8 >> 5) / 0x7a12) * -10 | 0x30;
    param_3[(int)*param_5] = (char)(uVar8 / 1000000) + (char)(uVar8 / 10000000) * -10 | 0x30;
    uVar11 = *param_5;
    *param_5 = uVar11 + 7;
    *param_6 = uVar11 + 7;
  }
LAB_01067c7c:
  uVar11 = *param_5;
  uVar7 = (ulong)uVar11;
  if (0 < (int)uVar11) {
    uVar12 = uVar7;
    if (param_3[uVar7 - 1] == 0x30) {
      do {
        uVar12 = uVar7 - 1;
        uVar11 = (uint)uVar12;
        *param_5 = uVar11;
        if ((long)uVar12 < 1) {
          uVar11 = (int)uVar7 - 1;
          goto LAB_01067d50;
        }
        lVar14 = uVar7 - 2;
        uVar7 = uVar12;
      } while (param_3[lVar14] == 0x30);
      if ((int)uVar11 < 1) goto LAB_01067d50;
      uVar7 = uVar12 & 0xffffffff;
    }
    uVar11 = (uint)uVar7;
    uVar8 = 0;
    do {
      uVar10 = uVar8;
      if (param_3[uVar8] != 0x30) break;
      uVar8 = uVar8 + 1;
      uVar10 = uVar7;
    } while ((uVar12 & 0xffffffff) != uVar8);
    iVar9 = (int)uVar10;
    if (iVar9 != 0) {
      if (iVar9 < (int)uVar11) {
        lVar14 = 0;
        do {
          param_3[lVar14] = param_3[lVar14 + (uVar10 & 0xffffffff)];
          uVar11 = *param_5;
          lVar14 = lVar14 + 1;
        } while (iVar9 + (int)lVar14 < (int)uVar11);
      }
      *param_5 = uVar11 - iVar9;
      *param_6 = *param_6 - iVar9;
      uVar11 = *param_5;
    }
  }
LAB_01067d50:
  param_3[(int)uVar11] = 0;
  if (*param_5 == 0) {
    *param_6 = -param_2;
  }
  return 1;
}

