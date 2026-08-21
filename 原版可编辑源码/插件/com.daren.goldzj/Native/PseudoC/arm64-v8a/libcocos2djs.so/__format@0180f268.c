
/* std::__ndk1::__money_put<wchar_t>::__format(wchar_t*, wchar_t*&, wchar_t*&, unsigned int, wchar_t
   const*, wchar_t const*, std::__ndk1::ctype<wchar_t> const&, bool,
   std::__ndk1::money_base::pattern const&, wchar_t, wchar_t, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> > const&, std::__ndk1::basic_string<wchar_t,
   std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&, int) */

void std::__ndk1::__money_put<wchar_t>::__format
               (wchar_t *param_1,wchar_t **param_2,wchar_t **param_3,uint param_4,wchar_t *param_5,
               wchar_t *param_6,ctype *param_7,bool param_8,pattern *param_9,wchar_t param_10,
               wchar_t param_11,basic_string *param_12,basic_string *param_13,basic_string *param_14
               ,int param_15)

{
  basic_string bVar1;
  basic_string *pbVar2;
  long lVar3;
  wchar_t *pwVar4;
  bool bVar5;
  wchar_t wVar6;
  ulong uVar7;
  uint uVar8;
  basic_string *pbVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  basic_string *pbVar13;
  int iVar14;
  uint uVar15;
  basic_string *pbVar16;
  basic_string *pbVar17;
  wchar_t *pwVar18;
  wchar_t *pwVar19;
  wchar_t *pwVar20;
  basic_string *pbVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  int iVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  
  *param_3 = param_1;
  lVar26 = 0;
  do {
    switch(param_9[lVar26]) {
    case (pattern)0x0:
      *param_2 = *param_3;
      break;
    case (pattern)0x1:
      *param_2 = *param_3;
      wVar6 = (**(code **)(*(long *)param_7 + 0x58))(param_7,0x20);
      pwVar12 = *param_3;
      *param_3 = pwVar12 + 1;
      *pwVar12 = wVar6;
      break;
    case (pattern)0x2:
      bVar1 = *param_13;
      uVar7 = (ulong)((byte)bVar1 >> 1);
      if (((byte)bVar1 & 1) != 0) {
        uVar7 = *(ulong *)(param_13 + 8);
      }
      if (((param_4 >> 9 & 1) != 0) && (uVar7 != 0)) {
        lVar23 = uVar7 * 4;
        pbVar9 = (basic_string *)*param_3;
        pbVar13 = param_13 + 4;
        if (((byte)bVar1 & 1) != 0) {
          pbVar13 = *(basic_string **)(param_13 + 0x10);
        }
        pbVar17 = pbVar13 + lVar23;
        uVar7 = (lVar23 - 4U >> 2) + 1;
        lVar3 = -4 - (long)pbVar13;
        pbVar16 = pbVar9;
        if ((uVar7 < 8) || ((pbVar9 < pbVar13 + lVar23 && (pbVar13 < pbVar9 + lVar23)))) {
LAB_0180f650:
          do {
            pbVar21 = pbVar13 + 4;
            *(wchar_t *)pbVar16 = *(wchar_t *)pbVar13;
            pbVar16 = pbVar16 + 4;
            pbVar13 = pbVar21;
          } while (pbVar17 != pbVar21);
        }
        else {
          uVar22 = uVar7 & 0x7ffffffffffffff8;
          pbVar16 = pbVar13 + 0x10;
          pbVar13 = pbVar13 + uVar22 * 4;
          pbVar21 = pbVar9 + 0x10;
          uVar24 = uVar22;
          do {
            pbVar2 = pbVar16 + -8;
            uVar27 = *(undefined8 *)(pbVar16 + -0x10);
            uVar29 = *(undefined8 *)(pbVar16 + 8);
            uVar28 = *(undefined8 *)pbVar16;
            pbVar16 = pbVar16 + 0x20;
            uVar24 = uVar24 - 8;
            *(undefined8 *)(pbVar21 + -8) = *(undefined8 *)pbVar2;
            *(undefined8 *)(pbVar21 + -0x10) = uVar27;
            *(undefined8 *)(pbVar21 + 8) = uVar29;
            *(undefined8 *)pbVar21 = uVar28;
            pbVar21 = pbVar21 + 0x20;
          } while (uVar24 != 0);
          pbVar16 = pbVar9 + uVar22 * 4;
          if (uVar7 != uVar22) goto LAB_0180f650;
        }
        *param_3 = (wchar_t *)(pbVar9 + ((ulong)(pbVar17 + lVar3) & 0xfffffffffffffffc) + 4);
      }
      break;
    case (pattern)0x3:
      bVar5 = ((byte)*param_14 & 1) != 0;
      uVar7 = (ulong)((byte)*param_14 >> 1);
      if (bVar5) {
        uVar7 = *(ulong *)(param_14 + 8);
      }
      if (uVar7 != 0) {
        pwVar12 = *param_3;
        pbVar13 = param_14 + 4;
        if (bVar5) {
          pbVar13 = *(basic_string **)(param_14 + 0x10);
        }
        wVar6 = *(wchar_t *)pbVar13;
        *param_3 = pwVar12 + 1;
        *pwVar12 = wVar6;
      }
      break;
    case (pattern)0x4:
      pwVar10 = *param_3;
      pwVar12 = param_5 + 1;
      pwVar19 = param_5 + 1;
      if (!param_8) {
        pwVar12 = param_5;
        pwVar19 = param_5;
      }
      while ((param_5 = pwVar19, pwVar12 < param_6 &&
             (uVar7 = (**(code **)(*(long *)param_7 + 0x18))(param_7,0x40,*pwVar12),
             (uVar7 & 1) != 0))) {
        pwVar12 = pwVar12 + 1;
        pwVar19 = param_5;
      }
      if (param_15 < 1) {
        if (pwVar12 == param_5) goto LAB_0180f4bc;
LAB_0180f5c4:
        bVar1 = *param_12;
        uVar7 = (ulong)((byte)bVar1 >> 1);
        if (((byte)bVar1 & 1) != 0) {
          uVar7 = *(ulong *)(param_12 + 8);
        }
        if (uVar7 == 0) {
          uVar8 = 0xffffffff;
        }
        else {
          pbVar13 = param_12 + 1;
          if (((byte)bVar1 & 1) != 0) {
            pbVar13 = *(basic_string **)(param_12 + 0x10);
          }
          uVar8 = (uint)(byte)*pbVar13;
        }
        uVar7 = 0;
        uVar15 = 0;
        do {
          pwVar19 = *param_3;
          pwVar11 = pwVar19;
          if (uVar15 == uVar8) {
            pwVar11 = pwVar19 + 1;
            *param_3 = pwVar11;
            *pwVar19 = param_11;
            bVar1 = *param_12;
            uVar7 = (ulong)((int)uVar7 + 1);
            uVar24 = (ulong)((byte)bVar1 >> 1);
            if (((byte)bVar1 & 1) != 0) {
              uVar24 = *(ulong *)(param_12 + 8);
            }
            if (uVar7 < uVar24) {
              uVar15 = 0;
              pbVar13 = param_12 + 1;
              if (((byte)bVar1 & 1) != 0) {
                pbVar13 = *(basic_string **)(param_12 + 0x10);
              }
              uVar8 = (uint)(byte)pbVar13[uVar7];
              if (uVar8 == 0xff) {
                uVar8 = 0xffffffff;
              }
            }
            else {
              uVar15 = 0;
            }
          }
          pwVar12 = pwVar12 + -1;
          wVar6 = *pwVar12;
          pwVar19 = pwVar11 + 1;
          uVar15 = uVar15 + 1;
          *param_3 = pwVar19;
          *pwVar11 = wVar6;
        } while (param_5 != pwVar12);
      }
      else {
        iVar25 = param_15;
        if (param_5 < pwVar12) {
          pwVar19 = *param_3;
          do {
            pwVar12 = pwVar12 + -1;
            iVar25 = iVar25 + -1;
            pwVar11 = pwVar19 + 1;
            *pwVar19 = *pwVar12;
            if (iVar25 < 1) break;
            pwVar19 = pwVar11;
          } while (param_5 < pwVar12);
          *param_3 = pwVar11;
          if (0 < iVar25) goto LAB_0180f4f4;
          pwVar11 = *param_3;
          pwVar19 = pwVar11 + 1;
        }
        else {
LAB_0180f4f4:
          wVar6 = (**(code **)(*(long *)param_7 + 0x58))(param_7,0x30);
          pwVar19 = *param_3;
          iVar14 = -1;
          if (-1 < -iVar25) {
            iVar14 = -iVar25;
          }
          uVar7 = (ulong)(uint)(iVar25 + iVar14) + 1;
          uVar8 = iVar25 - 1;
          pwVar11 = pwVar19 + 1;
          *param_3 = pwVar11;
          pwVar4 = pwVar11;
          pwVar18 = pwVar19;
          if (uVar7 < 8) {
LAB_0180f588:
            do {
              pwVar20 = pwVar4;
              iVar25 = iVar25 + -1;
              *pwVar18 = wVar6;
              pwVar4 = pwVar20 + 1;
              pwVar18 = pwVar20;
            } while (0 < iVar25);
          }
          else {
            uVar15 = iVar25 + iVar14 + 1U & 7;
            lVar23 = uVar7 - uVar15;
            iVar25 = iVar25 - (int)lVar23;
            pwVar4 = pwVar11 + lVar23;
            pwVar18 = pwVar19 + lVar23;
            pwVar20 = pwVar19 + 4;
            do {
              *(ulong *)(pwVar20 + -2) = CONCAT44(wVar6,wVar6);
              *(ulong *)(pwVar20 + -4) = CONCAT44(wVar6,wVar6);
              *(ulong *)(pwVar20 + 2) = CONCAT44(wVar6,wVar6);
              *(ulong *)pwVar20 = CONCAT44(wVar6,wVar6);
              lVar23 = lVar23 + -8;
              pwVar20 = pwVar20 + 8;
            } while (lVar23 != 0);
            if (uVar15 != 0) goto LAB_0180f588;
          }
          pwVar11 = pwVar11 + uVar8;
          pwVar19 = pwVar19 + (ulong)uVar8 + 2;
        }
        *param_3 = pwVar19;
        *pwVar11 = param_10;
        if (pwVar12 != param_5) goto LAB_0180f5c4;
LAB_0180f4bc:
        wVar6 = (**(code **)(*(long *)param_7 + 0x58))(param_7,0x30);
        pwVar12 = *param_3;
        pwVar19 = pwVar12 + 1;
        *param_3 = pwVar19;
        *pwVar12 = wVar6;
      }
      if ((pwVar10 != pwVar19) && (pwVar19 = pwVar19 + -1, pwVar10 < pwVar19)) {
        do {
          pwVar11 = pwVar10 + 1;
          wVar6 = *pwVar10;
          *pwVar10 = *pwVar19;
          pwVar12 = pwVar19 + -1;
          *pwVar19 = wVar6;
          pwVar19 = pwVar12;
          pwVar10 = pwVar11;
        } while (pwVar11 < pwVar12);
      }
    }
    lVar26 = lVar26 + 1;
  } while (lVar26 != 4);
  bVar1 = *param_14;
  uVar7 = (ulong)((byte)bVar1 >> 1);
  if (((byte)bVar1 & 1) != 0) {
    uVar7 = *(ulong *)(param_14 + 8);
  }
  if (uVar7 < 2) goto LAB_0180f844;
  pbVar13 = (basic_string *)*param_3;
  pbVar9 = param_14 + 8;
  pbVar17 = param_14 + 4;
  if (((byte)bVar1 & 1) != 0) {
    pbVar9 = *(basic_string **)(param_14 + 0x10) + 4;
    pbVar17 = *(basic_string **)(param_14 + 0x10);
  }
  pbVar16 = pbVar17 + uVar7 * 4;
  if (pbVar9 != pbVar16) {
    lVar26 = -4 - (long)pbVar9;
    uVar24 = ((ulong)(pbVar16 + lVar26) >> 2) + 1;
    pbVar21 = pbVar13;
    if ((uVar24 < 8) ||
       ((lVar23 = ((ulong)(pbVar17 + ((uVar7 * 4 + -4) - (long)pbVar9)) & 0xfffffffffffffffc) + 4,
        pbVar13 < pbVar9 + lVar23 && (pbVar9 < pbVar13 + lVar23)))) {
LAB_0180f824:
      do {
        pbVar17 = pbVar9 + 4;
        *(wchar_t *)pbVar21 = *(wchar_t *)pbVar9;
        pbVar9 = pbVar17;
        pbVar21 = pbVar21 + 4;
      } while (pbVar16 != pbVar17);
    }
    else {
      uVar22 = uVar24 & 0x7ffffffffffffff8;
      pbVar17 = pbVar9 + 0x10;
      pbVar9 = pbVar9 + uVar22 * 4;
      pbVar21 = pbVar13 + 0x10;
      uVar7 = uVar22;
      do {
        pbVar2 = pbVar17 + -8;
        uVar27 = *(undefined8 *)(pbVar17 + -0x10);
        uVar29 = *(undefined8 *)(pbVar17 + 8);
        uVar28 = *(undefined8 *)pbVar17;
        pbVar17 = pbVar17 + 0x20;
        uVar7 = uVar7 - 8;
        *(undefined8 *)(pbVar21 + -8) = *(undefined8 *)pbVar2;
        *(undefined8 *)(pbVar21 + -0x10) = uVar27;
        *(undefined8 *)(pbVar21 + 8) = uVar29;
        *(undefined8 *)pbVar21 = uVar28;
        pbVar21 = pbVar21 + 0x20;
      } while (uVar7 != 0);
      pbVar21 = pbVar13 + uVar22 * 4;
      if (uVar24 != uVar22) goto LAB_0180f824;
    }
    pbVar13 = pbVar13 + ((ulong)(pbVar16 + lVar26) & 0xfffffffffffffffc) + 4;
  }
  *param_3 = (wchar_t *)pbVar13;
LAB_0180f844:
  if ((param_4 & 0xb0) != 0x10) {
    if ((param_4 & 0xb0) == 0x20) {
      param_1 = *param_3;
    }
    *param_2 = param_1;
  }
  return;
}

