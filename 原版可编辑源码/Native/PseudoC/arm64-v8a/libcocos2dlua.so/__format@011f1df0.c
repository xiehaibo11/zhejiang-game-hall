
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
  basic_string *pbVar1;
  basic_string bVar2;
  basic_string *pbVar3;
  bool bVar4;
  wchar_t wVar5;
  ulong uVar6;
  uint uVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  uint uVar10;
  wchar_t *pwVar11;
  ulong uVar12;
  wchar_t *pwVar13;
  ulong uVar14;
  long lVar15;
  wchar_t *pwVar16;
  int iVar17;
  
  *param_3 = param_1;
  lVar15 = 0;
  do {
    switch(param_9[lVar15]) {
    case (pattern)0x0:
      *param_2 = *param_3;
      break;
    case (pattern)0x1:
      *param_2 = *param_3;
      wVar5 = (**(code **)(*(long *)param_7 + 0x58))(param_7,0x20);
      pwVar16 = *param_3;
      *param_3 = pwVar16 + 1;
      *pwVar16 = wVar5;
      break;
    case (pattern)0x2:
      bVar2 = *param_13;
      uVar6 = (ulong)((byte)bVar2 >> 1);
      if (((byte)bVar2 & 1) != 0) {
        uVar6 = *(ulong *)(param_13 + 8);
      }
      if (((param_4 >> 9 & 1) != 0) && (uVar6 != 0)) {
        pwVar16 = *param_3;
        pbVar1 = param_13 + 4;
        if (((byte)bVar2 & 1) != 0) {
          pbVar1 = *(basic_string **)(param_13 + 0x10);
        }
        if (uVar6 << 2 != 0) {
          memmove(pwVar16,pbVar1,uVar6 << 2);
        }
        *param_3 = pwVar16 + ((long)(uVar6 << 2) >> 2);
      }
      break;
    case (pattern)0x3:
      bVar4 = ((byte)*param_14 & 1) != 0;
      uVar6 = (ulong)((byte)*param_14 >> 1);
      if (bVar4) {
        uVar6 = *(ulong *)(param_14 + 8);
      }
      if (uVar6 != 0) {
        pwVar16 = *param_3;
        pbVar1 = param_14 + 4;
        if (bVar4) {
          pbVar1 = *(basic_string **)(param_14 + 0x10);
        }
        wVar5 = *(wchar_t *)pbVar1;
        *param_3 = pwVar16 + 1;
        *pwVar16 = wVar5;
      }
      break;
    case (pattern)0x4:
      pwVar8 = *param_3;
      pwVar16 = param_5 + 1;
      pwVar13 = param_5 + 1;
      if (!param_8) {
        pwVar16 = param_5;
        pwVar13 = param_5;
      }
      while ((param_5 = pwVar13, pwVar16 < param_6 &&
             (uVar6 = (**(code **)(*(long *)param_7 + 0x18))(param_7,0x40,*pwVar16),
             (uVar6 & 1) != 0))) {
        pwVar16 = pwVar16 + 1;
        pwVar13 = param_5;
      }
      if (0 < param_15) {
        iVar17 = param_15;
        if (param_5 < pwVar16) {
          pwVar13 = *param_3;
          do {
            pwVar16 = pwVar16 + -1;
            iVar17 = iVar17 + -1;
            pwVar9 = pwVar13 + 1;
            *pwVar13 = *pwVar16;
            if (iVar17 < 1) break;
            pwVar13 = pwVar9;
          } while (param_5 < pwVar16);
          *param_3 = pwVar9;
          if (0 < iVar17) goto LAB_011f205c;
          pwVar9 = *param_3;
          pwVar13 = pwVar9 + 1;
        }
        else {
LAB_011f205c:
          wVar5 = (**(code **)(*(long *)param_7 + 0x58))(param_7,0x30);
          pwVar9 = *param_3;
          uVar7 = iVar17 - 1;
          uVar6 = (ulong)(uVar7 - (uVar7 & (int)uVar7 >> 0x1f)) + 1;
          pwVar13 = pwVar9 + 1;
          *param_3 = pwVar13;
          pwVar11 = pwVar9;
          if (7 < uVar6) {
            uVar12 = uVar6 & 0x1fffffff8;
            iVar17 = iVar17 - (int)uVar12;
            pwVar13 = pwVar13 + uVar12;
            pwVar11 = pwVar9 + 4;
            uVar14 = uVar12;
            do {
              *(ulong *)(pwVar11 + -2) = CONCAT44(wVar5,wVar5);
              *(ulong *)(pwVar11 + -4) = CONCAT44(wVar5,wVar5);
              *(ulong *)(pwVar11 + 2) = CONCAT44(wVar5,wVar5);
              *(ulong *)pwVar11 = CONCAT44(wVar5,wVar5);
              uVar14 = uVar14 - 8;
              pwVar11 = pwVar11 + 8;
            } while (uVar14 != 0);
            pwVar11 = pwVar9 + uVar12;
            if (uVar6 == uVar12) {
              pwVar9 = pwVar9 + uVar12;
              goto LAB_011f20f8;
            }
          }
          do {
            pwVar9 = pwVar13;
            iVar17 = iVar17 + -1;
            *pwVar11 = wVar5;
            pwVar13 = pwVar9 + 1;
            pwVar11 = pwVar9;
          } while (0 < iVar17);
        }
LAB_011f20f8:
        *param_3 = pwVar13;
        *pwVar9 = param_10;
      }
      if (pwVar16 == param_5) {
        wVar5 = (**(code **)(*(long *)param_7 + 0x58))(param_7,0x30);
        pwVar16 = *param_3;
        pwVar13 = pwVar16 + 1;
        *param_3 = pwVar13;
        *pwVar16 = wVar5;
      }
      else {
        bVar2 = *param_12;
        uVar6 = (ulong)((byte)bVar2 >> 1);
        if (((byte)bVar2 & 1) != 0) {
          uVar6 = *(ulong *)(param_12 + 8);
        }
        if (uVar6 == 0) {
          uVar7 = 0xffffffff;
        }
        else {
          pbVar1 = param_12 + 1;
          if (((byte)bVar2 & 1) != 0) {
            pbVar1 = *(basic_string **)(param_12 + 0x10);
          }
          uVar7 = (uint)(byte)*pbVar1;
        }
        uVar6 = 0;
        uVar10 = 0;
        do {
          pwVar13 = *param_3;
          pwVar9 = pwVar13;
          if (uVar10 == uVar7) {
            pwVar9 = pwVar13 + 1;
            *param_3 = pwVar9;
            *pwVar13 = param_11;
            bVar2 = *param_12;
            uVar6 = (ulong)((int)uVar6 + 1);
            uVar14 = (ulong)((byte)bVar2 >> 1);
            if (((byte)bVar2 & 1) != 0) {
              uVar14 = *(ulong *)(param_12 + 8);
            }
            if (uVar6 < uVar14) {
              uVar10 = 0;
              pbVar1 = param_12 + 1;
              if (((byte)bVar2 & 1) != 0) {
                pbVar1 = *(basic_string **)(param_12 + 0x10);
              }
              uVar7 = (uint)(byte)pbVar1[uVar6];
              if (uVar7 == 0xff) {
                uVar7 = 0xffffffff;
              }
            }
            else {
              uVar10 = 0;
            }
          }
          pwVar16 = pwVar16 + -1;
          wVar5 = *pwVar16;
          pwVar13 = pwVar9 + 1;
          uVar10 = uVar10 + 1;
          *param_3 = pwVar13;
          *pwVar9 = wVar5;
        } while (param_5 != pwVar16);
      }
      if ((pwVar8 != pwVar13) && (pwVar13 = pwVar13 + -1, pwVar8 < pwVar13)) {
        do {
          pwVar9 = pwVar8 + 1;
          wVar5 = *pwVar8;
          *pwVar8 = *pwVar13;
          pwVar16 = pwVar13 + -1;
          *pwVar13 = wVar5;
          pwVar13 = pwVar16;
          pwVar8 = pwVar9;
        } while (pwVar9 < pwVar16);
      }
    }
    lVar15 = lVar15 + 1;
    if (lVar15 == 4) {
      bVar2 = *param_14;
      uVar6 = (ulong)((byte)bVar2 >> 1);
      if (((byte)bVar2 & 1) != 0) {
        uVar6 = *(ulong *)(param_14 + 8);
      }
      if (1 < uVar6) {
        pwVar16 = *param_3;
        pbVar1 = param_14 + 8;
        pbVar3 = param_14 + 4;
        if (((byte)bVar2 & 1) != 0) {
          pbVar1 = *(basic_string **)(param_14 + 0x10) + 4;
          pbVar3 = *(basic_string **)(param_14 + 0x10);
        }
        pbVar3 = pbVar3 + (uVar6 * 4 - (long)pbVar1);
        if (pbVar3 != (basic_string *)0x0) {
          memmove(pwVar16,pbVar1,(size_t)pbVar3);
        }
        *param_3 = pwVar16 + ((long)pbVar3 >> 2);
      }
      if ((param_4 & 0xb0) != 0x10) {
        if ((param_4 & 0xb0) == 0x20) {
          param_1 = *param_3;
        }
        *param_2 = param_1;
      }
      return;
    }
  } while( true );
}

