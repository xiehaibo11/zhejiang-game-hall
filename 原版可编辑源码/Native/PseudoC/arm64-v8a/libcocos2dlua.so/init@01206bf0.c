
/* WARNING: Type propagation algorithm not settling */
/* std::__ndk1::moneypunct_byname<wchar_t, true>::init(char const*) */

void __thiscall
std::__ndk1::moneypunct_byname<wchar_t,true>::init
          (moneypunct_byname<wchar_t,true> *this,char *param_1)

{
  uint uVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  mbstate_t *pmVar6;
  __locale_t __dataset;
  __locale_t p_Var7;
  lconv *plVar8;
  size_t sVar9;
  mbstate_t *pmVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  wchar_t wVar14;
  ulong uVar15;
  moneypunct_byname<wchar_t,true> *pmVar16;
  _union_27 *p_Var17;
  moneypunct_byname<wchar_t,true> *pmVar18;
  mbstate_t *pmVar19;
  mbstate_t *pmVar20;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *this_00;
  char *pcVar21;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar22;
  mbstate_t mVar23;
  mbstate_t mVar24;
  mbstate_t mVar25;
  char *local_228;
  mbstate_t mStack_220;
  wchar_t local_218 [4];
  void *local_208;
  mbstate_t local_200 [51];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  __dataset = newlocale(0x1fbf,param_1,(__locale_t)0x0);
  if (__dataset == (__locale_t)0x0) {
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               local_218,param_1);
    pmVar10 = (mbstate_t *)
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)local_218,0,"moneypunct_byname failed to construct for ");
    local_200[2] = pmVar10[2];
    local_200[1] = pmVar10[1];
    local_200[0] = *pmVar10;
    pmVar10[1].__count = 0;
    pmVar10[1].__value = (_union_27)0x0;
    pmVar10[2].__count = 0;
    pmVar10[2].__value = (_union_27)0x0;
    pmVar10->__count = 0;
    pmVar10->__value = (_union_27)0x0;
    FUN_011f98b4(local_200);
  }
  else {
    p_Var7 = uselocale(__dataset);
    plVar8 = localeconv();
    if (p_Var7 != (__locale_t)0x0) {
      uselocale(p_Var7);
    }
    pcVar21 = plVar8->mon_decimal_point;
    if (*pcVar21 == '\0') {
LAB_01206ca8:
      wVar14 = L'\xffffffff';
    }
    else {
      local_200[0].__count = 0;
      local_200[0].__value = (_union_27)0x0;
      sVar9 = strlen(pcVar21);
      p_Var7 = uselocale(__dataset);
      sVar9 = mbrtowc(local_218,pcVar21,sVar9,local_200);
      if (p_Var7 != (__locale_t)0x0) {
        uselocale(p_Var7);
      }
      wVar14 = local_218[0];
      if (0xfffffffffffffffd < sVar9) goto LAB_01206ca8;
    }
    *(wchar_t *)(this + 0x10) = wVar14;
    pcVar21 = plVar8->mon_thousands_sep;
    if (*pcVar21 == '\0') {
LAB_01206d0c:
      wVar14 = L'\xffffffff';
    }
    else {
      local_200[0].__count = 0;
      local_200[0].__value = (_union_27)0x0;
      sVar9 = strlen(pcVar21);
      p_Var7 = uselocale(__dataset);
      sVar9 = mbrtowc(local_218,pcVar21,sVar9,local_200);
      if (p_Var7 != (__locale_t)0x0) {
        uselocale(p_Var7);
      }
      wVar14 = local_218[0];
      if (0xfffffffffffffffd < sVar9) goto LAB_01206d0c;
    }
    *(wchar_t *)(this + 0x14) = wVar14;
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x18),plVar8->mon_grouping);
    local_228 = plVar8->int_curr_symbol;
    mStack_220.__count = 0;
    mStack_220.__value = (_union_27)0x0;
    p_Var7 = uselocale(__dataset);
    sVar9 = mbsrtowcs(&local_200[0].__count,&local_228,100,&mStack_220);
    if (p_Var7 != (__locale_t)0x0) {
      uselocale(p_Var7);
    }
    if (sVar9 != 0xffffffffffffffff) {
      this_00 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 *)(this + 0x30);
      bVar2 = *this_00;
      uVar4 = (long)(sVar9 << 2) >> 2;
      if (((byte)bVar2 & 1) == 0) {
        uVar12 = 4;
        uVar15 = (ulong)(byte)bVar2;
        uVar13 = uVar4 - 4;
        if (3 < uVar4 && uVar13 != 0) goto LAB_01206e00;
LAB_01206d88:
        if ((uVar15 & 1) != 0) goto LAB_01206e2c;
LAB_01206d8c:
        pmVar18 = this + 0x34;
      }
      else {
        uVar15 = *(ulong *)this_00;
        uVar12 = (uVar15 & 0xfffffffffffffffe) - 1;
        uVar13 = uVar4 - uVar12;
        if (uVar4 < uVar12 || uVar13 == 0) goto LAB_01206d88;
LAB_01206e00:
        if (((byte)bVar2 & 1) == 0) {
          uVar15 = (ulong)((byte)bVar2 >> 1);
        }
        else {
          uVar15 = *(ulong *)(this + 0x38);
        }
        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
        __grow_by(this_00,uVar12,uVar13,uVar15,0,uVar15,0);
        if (((byte)*this_00 & 1) == 0) goto LAB_01206d8c;
LAB_01206e2c:
        pmVar18 = *(moneypunct_byname<wchar_t,true> **)(this + 0x40);
      }
      pmVar16 = pmVar18;
      if (sVar9 != 0) {
        uVar13 = (sVar9 * 4 - 4 >> 2) + 1;
        if ((uVar13 < 8) ||
           ((pmVar18 < (moneypunct_byname<wchar_t,true> *)(&local_200[0].__count + sVar9) &&
            (local_200 < (mbstate_t *)(pmVar18 + sVar9 * 4))))) {
          pmVar10 = local_200;
        }
        else {
          uVar15 = uVar13 & 0x7ffffffffffffff8;
          pmVar20 = local_200 + 2;
          pmVar16 = pmVar18 + uVar15 * 4;
          pmVar10 = (mbstate_t *)(&local_200[0].__count + uVar15);
          pmVar19 = (mbstate_t *)(pmVar18 + 0x10);
          uVar12 = uVar15;
          do {
            pmVar6 = pmVar20 + -1;
            mVar23 = pmVar20[-2];
            mVar25 = pmVar20[1];
            mVar24 = *pmVar20;
            pmVar20 = pmVar20 + 4;
            uVar12 = uVar12 - 8;
            pmVar19[-1] = *pmVar6;
            pmVar19[-2] = mVar23;
            pmVar19[1] = mVar25;
            *pmVar19 = mVar24;
            pmVar19 = pmVar19 + 4;
          } while (uVar12 != 0);
          if (uVar13 == uVar15) goto LAB_01206e38;
        }
        pmVar18 = pmVar16;
        do {
          p_Var17 = &pmVar10->__value;
          pmVar16 = pmVar18 + 4;
          *(int *)pmVar18 = pmVar10->__count;
          pmVar18 = pmVar16;
          pmVar10 = (mbstate_t *)p_Var17;
        } while ((_union_27 *)(&local_200[0].__count + sVar9) != p_Var17);
      }
LAB_01206e38:
      *(int *)pmVar16 = 0;
      if (((byte)*this_00 & 1) == 0) {
        *this_00 = SUB41((int)sVar9 << 1,0);
      }
      else {
        *(ulong *)(this + 0x38) = uVar4;
      }
      uVar1 = 0;
      if ((byte)plVar8->int_frac_digits != 0xff) {
        uVar1 = (uint)(byte)plVar8->int_frac_digits;
      }
      *(uint *)(this + 0x78) = uVar1;
      if (plVar8->int_p_sign_posn != '\0') {
        local_228 = plVar8->positive_sign;
        mStack_220.__count = 0;
        mStack_220.__value = (_union_27)0x0;
        p_Var7 = uselocale(__dataset);
        sVar9 = mbsrtowcs(&local_200[0].__count,&local_228,100,&mStack_220);
        if (p_Var7 != (__locale_t)0x0) {
          uselocale(p_Var7);
        }
        if (sVar9 != 0xffffffffffffffff) {
          pbVar22 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                     *)(this + 0x48);
          bVar2 = *pbVar22;
          uVar4 = (long)(sVar9 << 2) >> 2;
          if (((byte)bVar2 & 1) == 0) {
            uVar12 = 4;
            uVar15 = (ulong)(byte)bVar2;
            uVar13 = uVar4 - 4;
            if (3 < uVar4 && uVar13 != 0) goto LAB_01207020;
LAB_01206ecc:
            if ((uVar15 & 1) != 0) goto LAB_012070b0;
LAB_01206ed0:
            pmVar18 = this + 0x4c;
          }
          else {
            uVar15 = *(ulong *)pbVar22;
            uVar12 = (uVar15 & 0xfffffffffffffffe) - 1;
            uVar13 = uVar4 - uVar12;
            if (uVar4 < uVar12 || uVar13 == 0) goto LAB_01206ecc;
LAB_01207020:
            if (((byte)bVar2 & 1) == 0) {
              uVar15 = (ulong)((byte)bVar2 >> 1);
            }
            else {
              uVar15 = *(ulong *)(this + 0x50);
            }
            basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            ::__grow_by(pbVar22,uVar12,uVar13,uVar15,0,uVar15,0);
            if (((byte)*pbVar22 & 1) == 0) goto LAB_01206ed0;
LAB_012070b0:
            pmVar18 = *(moneypunct_byname<wchar_t,true> **)(this + 0x58);
          }
          pmVar16 = pmVar18;
          if (sVar9 != 0) {
            uVar13 = (sVar9 * 4 - 4 >> 2) + 1;
            if ((uVar13 < 8) ||
               ((pmVar18 < (moneypunct_byname<wchar_t,true> *)(&local_200[0].__count + sVar9) &&
                (local_200 < (mbstate_t *)(pmVar18 + sVar9 * 4))))) {
              pmVar10 = local_200;
            }
            else {
              uVar15 = uVar13 & 0x7ffffffffffffff8;
              pmVar20 = local_200 + 2;
              pmVar16 = pmVar18 + uVar15 * 4;
              pmVar10 = (mbstate_t *)(&local_200[0].__count + uVar15);
              pmVar19 = (mbstate_t *)(pmVar18 + 0x10);
              uVar12 = uVar15;
              do {
                pmVar6 = pmVar20 + -1;
                mVar23 = pmVar20[-2];
                mVar25 = pmVar20[1];
                mVar24 = *pmVar20;
                pmVar20 = pmVar20 + 4;
                uVar12 = uVar12 - 8;
                pmVar19[-1] = *pmVar6;
                pmVar19[-2] = mVar23;
                pmVar19[1] = mVar25;
                *pmVar19 = mVar24;
                pmVar19 = pmVar19 + 4;
              } while (uVar12 != 0);
              if (uVar13 == uVar15) goto LAB_012070bc;
            }
            pmVar18 = pmVar16;
            do {
              p_Var17 = &pmVar10->__value;
              pmVar16 = pmVar18 + 4;
              *(int *)pmVar18 = pmVar10->__count;
              pmVar18 = pmVar16;
              pmVar10 = (mbstate_t *)p_Var17;
            } while ((_union_27 *)(&local_200[0].__count + sVar9) != p_Var17);
          }
LAB_012070bc:
          *(int *)pmVar16 = 0;
          if (((byte)*pbVar22 & 1) == 0) {
            *pbVar22 = SUB41((int)sVar9 << 1,0);
            cVar3 = plVar8->int_n_sign_posn;
          }
          else {
            *(ulong *)(this + 0x50) = uVar4;
            cVar3 = plVar8->int_n_sign_posn;
          }
          goto joined_r0x012070d4;
        }
        __throw_runtime_error("locale not supported");
LAB_012072b4:
        uVar11 = __throw_runtime_error("locale not supported");
        if (((ulong)local_200[0] & 1) == 0) {
          if ((local_218[0] & 1U) != 0) goto LAB_012072ec;
        }
        else {
          operator_delete((void *)local_200[2]);
          if (((byte)local_218[0]._0_1_ & 1) != 0) {
LAB_012072ec:
            operator_delete(local_208);
                    /* WARNING: Subroutine does not return */
            _Unwind_Resume(uVar11);
          }
        }
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume(uVar11);
      }
      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
      assign((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              *)(this + 0x48),L"()");
      cVar3 = plVar8->int_n_sign_posn;
joined_r0x012070d4:
      if (cVar3 == '\0') {
        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
        assign((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)(this + 0x60),L"()");
      }
      else {
        local_228 = plVar8->negative_sign;
        mStack_220.__count = 0;
        mStack_220.__value = (_union_27)0x0;
        p_Var7 = uselocale(__dataset);
        sVar9 = mbsrtowcs(&local_200[0].__count,&local_228,100,&mStack_220);
        if (p_Var7 != (__locale_t)0x0) {
          uselocale(p_Var7);
        }
        if (sVar9 == 0xffffffffffffffff) goto LAB_012072b4;
        pbVar22 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                   *)(this + 0x60);
        bVar2 = *pbVar22;
        uVar4 = (long)(sVar9 << 2) >> 2;
        if (((byte)bVar2 & 1) == 0) {
          uVar12 = 4;
          uVar15 = (ulong)(byte)bVar2;
          uVar13 = uVar4 - 4;
          if (3 < uVar4 && uVar13 != 0) goto LAB_01207040;
LAB_01206fa8:
          if ((uVar15 & 1) != 0) goto LAB_0120711c;
LAB_01206fac:
          pmVar18 = this + 100;
        }
        else {
          uVar15 = *(ulong *)pbVar22;
          uVar12 = (uVar15 & 0xfffffffffffffffe) - 1;
          uVar13 = uVar4 - uVar12;
          if (uVar4 < uVar12 || uVar13 == 0) goto LAB_01206fa8;
LAB_01207040:
          if (((byte)bVar2 & 1) == 0) {
            uVar15 = (ulong)((byte)bVar2 >> 1);
          }
          else {
            uVar15 = *(ulong *)(this + 0x68);
          }
          basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
          __grow_by(pbVar22,uVar12,uVar13,uVar15,0,uVar15,0);
          if (((byte)*pbVar22 & 1) == 0) goto LAB_01206fac;
LAB_0120711c:
          pmVar18 = *(moneypunct_byname<wchar_t,true> **)(this + 0x70);
        }
        pmVar16 = pmVar18;
        if (sVar9 != 0) {
          uVar13 = (sVar9 * 4 - 4 >> 2) + 1;
          if ((uVar13 < 8) ||
             ((pmVar18 < (moneypunct_byname<wchar_t,true> *)(&local_200[0].__count + sVar9) &&
              (local_200 < (mbstate_t *)(pmVar18 + sVar9 * 4))))) {
            pmVar10 = local_200;
          }
          else {
            uVar15 = uVar13 & 0x7ffffffffffffff8;
            pmVar20 = local_200 + 2;
            pmVar16 = pmVar18 + uVar15 * 4;
            pmVar10 = (mbstate_t *)(&local_200[0].__count + uVar15);
            pmVar19 = (mbstate_t *)(pmVar18 + 0x10);
            uVar12 = uVar15;
            do {
              pmVar6 = pmVar20 + -1;
              mVar23 = pmVar20[-2];
              mVar25 = pmVar20[1];
              mVar24 = *pmVar20;
              pmVar20 = pmVar20 + 4;
              uVar12 = uVar12 - 8;
              pmVar19[-1] = *pmVar6;
              pmVar19[-2] = mVar23;
              pmVar19[1] = mVar25;
              *pmVar19 = mVar24;
              pmVar19 = pmVar19 + 4;
            } while (uVar12 != 0);
            if (uVar13 == uVar15) goto LAB_01207128;
          }
          pmVar18 = pmVar16;
          do {
            p_Var17 = &pmVar10->__value;
            pmVar16 = pmVar18 + 4;
            *(int *)pmVar18 = pmVar10->__count;
            pmVar18 = pmVar16;
            pmVar10 = (mbstate_t *)p_Var17;
          } while ((_union_27 *)(&local_200[0].__count + sVar9) != p_Var17);
        }
LAB_01207128:
        *(int *)pmVar16 = 0;
        if (((byte)*pbVar22 & 1) == 0) {
          *pbVar22 = SUB41((int)sVar9 << 1,0);
        }
        else {
          *(ulong *)(this + 0x68) = uVar4;
        }
      }
      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
      basic_string((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                    *)local_218,(basic_string *)this_00);
      FUN_012067cc(this + 0x7c,local_218,1,plVar8->int_p_cs_precedes,plVar8->int_p_sep_by_space,
                   plVar8->int_p_sign_posn);
      FUN_012067cc(this + 0x80,this_00,1,plVar8->int_n_cs_precedes,plVar8->int_n_sep_by_space,
                   plVar8->int_n_sign_posn);
      if (((byte)local_218[0]._0_1_ & 1) != 0) {
        operator_delete(local_208);
      }
      freelocale(__dataset);
      if (*(long *)(lVar5 + 0x28) == local_68) {
        return;
      }
      goto LAB_012072a4;
    }
  }
  __throw_runtime_error("locale not supported");
LAB_012072a4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

