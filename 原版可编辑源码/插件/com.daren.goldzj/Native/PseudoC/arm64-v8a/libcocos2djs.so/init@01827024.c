
/* std::__ndk1::moneypunct_byname<wchar_t, true>::init(char const*) */

void __thiscall
std::__ndk1::moneypunct_byname<wchar_t,true>::init
          (moneypunct_byname<wchar_t,true> *this,char *param_1)

{
  uint uVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar2;
  char cVar3;
  long lVar4;
  mbstate_t *pmVar5;
  __locale_t __dataset;
  __locale_t p_Var6;
  size_t sVar7;
  ulong uVar8;
  mbstate_t *pmVar9;
  undefined8 uVar10;
  ulong uVar11;
  wchar_t wVar12;
  moneypunct_byname<wchar_t,true> *pmVar13;
  ulong uVar14;
  moneypunct_byname<wchar_t,true> *pmVar15;
  _union_27 *p_Var16;
  long lVar17;
  mbstate_t *pmVar18;
  mbstate_t *pmVar19;
  void *__dest;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *this_00;
  ulong uVar20;
  char *pcVar21;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar22;
  mbstate_t mVar23;
  mbstate_t mVar24;
  mbstate_t mVar25;
  char *local_228;
  mbstate_t mStack_220;
  ulong local_218;
  ulong local_210;
  void *local_208;
  mbstate_t local_200 [51];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  __dataset = newlocale(0x1fbf,param_1,(__locale_t)0x0);
  if (__dataset == (__locale_t)0x0) {
    local_218 = 0;
    local_210 = 0;
    local_208 = (void *)0x0;
    uVar8 = strlen(param_1);
    if (0xffffffffffffffef < uVar8) {
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_length_error();
    }
  }
  else {
    p_Var6 = uselocale(__dataset);
    param_1 = (char *)localeconv();
    if (p_Var6 != (__locale_t)0x0) {
      uselocale(p_Var6);
    }
    pcVar21 = ((lconv *)param_1)->mon_decimal_point;
    if (*pcVar21 == '\0') {
LAB_018270dc:
      wVar12 = L'\xffffffff';
    }
    else {
      local_200[0].__count = 0;
      local_200[0].__value = (_union_27)0x0;
      sVar7 = strlen(pcVar21);
      p_Var6 = uselocale(__dataset);
      sVar7 = mbrtowc((wchar_t *)&local_218,pcVar21,sVar7,local_200);
      if (p_Var6 != (__locale_t)0x0) {
        uselocale(p_Var6);
      }
      if (0xfffffffffffffffd < sVar7) goto LAB_018270dc;
      wVar12 = (wchar_t)local_218;
    }
    *(wchar_t *)(this + 0x10) = wVar12;
    pcVar21 = ((lconv *)param_1)->mon_thousands_sep;
    if (*pcVar21 == '\0') {
LAB_01827140:
      wVar12 = L'\xffffffff';
    }
    else {
      local_200[0].__count = 0;
      local_200[0].__value = (_union_27)0x0;
      sVar7 = strlen(pcVar21);
      p_Var6 = uselocale(__dataset);
      sVar7 = mbrtowc((wchar_t *)&local_218,pcVar21,sVar7,local_200);
      if (p_Var6 != (__locale_t)0x0) {
        uselocale(p_Var6);
      }
      if (0xfffffffffffffffd < sVar7) goto LAB_01827140;
      wVar12 = (wchar_t)local_218;
    }
    *(wchar_t *)(this + 0x14) = wVar12;
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x18),((lconv *)param_1)->mon_grouping);
    local_228 = ((lconv *)param_1)->int_curr_symbol;
    mStack_220.__count = 0;
    mStack_220.__value = (_union_27)0x0;
    p_Var6 = uselocale(__dataset);
    sVar7 = mbsrtowcs(&local_200[0].__count,&local_228,100,&mStack_220);
    if (p_Var6 != (__locale_t)0x0) {
      uselocale(p_Var6);
    }
    if (sVar7 == 0xffffffffffffffff) {
      __throw_runtime_error("locale not supported");
      goto LAB_0182770c;
    }
    this_00 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               *)(this + 0x30);
    bVar2 = *this_00;
    uVar8 = (long)(sVar7 << 2) >> 2;
    if (((byte)bVar2 & 1) == 0) {
      uVar11 = 4;
      uVar14 = (ulong)(byte)bVar2;
      uVar20 = uVar8 - 4;
      if (uVar8 < 4 || uVar20 == 0) goto LAB_018271bc;
LAB_018271e0:
      if (((byte)bVar2 & 1) == 0) {
        uVar14 = (ulong)((byte)bVar2 >> 1);
      }
      else {
        uVar14 = *(ulong *)(this + 0x38);
      }
      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
      __grow_by(this_00,uVar11,uVar20,uVar14,0,uVar14,0);
      if (((byte)*this_00 & 1) != 0) goto LAB_0182720c;
LAB_018271c0:
      pmVar13 = this + 0x34;
    }
    else {
      uVar14 = *(ulong *)this_00;
      uVar11 = (uVar14 & 0xfffffffffffffffe) - 1;
      uVar20 = uVar8 - uVar11;
      if (uVar11 <= uVar8 && uVar20 != 0) goto LAB_018271e0;
LAB_018271bc:
      if ((uVar14 & 1) == 0) goto LAB_018271c0;
LAB_0182720c:
      pmVar13 = *(moneypunct_byname<wchar_t,true> **)(this + 0x40);
    }
    if (sVar7 != 0) {
      lVar17 = sVar7 * 4;
      uVar20 = (lVar17 - 4U >> 2) + 1;
      pmVar9 = local_200;
      pmVar15 = pmVar13;
      if ((uVar20 < 8) ||
         ((pmVar13 < (moneypunct_byname<wchar_t,true> *)(&local_200[0].__count + sVar7) &&
          (pmVar9 = local_200, local_200 < (mbstate_t *)(pmVar13 + lVar17))))) {
LAB_018272b0:
        do {
          p_Var16 = &pmVar9->__value;
          *(int *)pmVar15 = pmVar9->__count;
          pmVar15 = pmVar15 + 4;
          pmVar9 = (mbstate_t *)p_Var16;
        } while ((_union_27 *)(&local_200[0].__count + sVar7) != p_Var16);
      }
      else {
        uVar14 = uVar20 & 0x7ffffffffffffff8;
        pmVar18 = local_200 + 2;
        pmVar15 = pmVar13 + uVar14 * 4;
        pmVar9 = (mbstate_t *)(&local_200[0].__count + uVar14);
        pmVar19 = (mbstate_t *)(pmVar13 + 0x10);
        uVar11 = uVar14;
        do {
          pmVar5 = pmVar18 + -1;
          mVar23 = pmVar18[-2];
          mVar25 = pmVar18[1];
          mVar24 = *pmVar18;
          pmVar18 = pmVar18 + 4;
          uVar11 = uVar11 - 8;
          pmVar19[-1] = *pmVar5;
          pmVar19[-2] = mVar23;
          pmVar19[1] = mVar25;
          *pmVar19 = mVar24;
          pmVar19 = pmVar19 + 4;
        } while (uVar11 != 0);
        if (uVar20 != uVar14) goto LAB_018272b0;
      }
      pmVar13 = pmVar13 + (long)local_200 + (lVar17 - (long)local_200);
    }
    *(int *)pmVar13 = 0;
    if (((byte)*this_00 & 1) == 0) {
      *this_00 = SUB41((int)sVar7 << 1,0);
    }
    else {
      *(ulong *)(this + 0x38) = uVar8;
    }
    uVar1 = 0;
    if ((byte)((lconv *)param_1)->int_frac_digits != 0xff) {
      uVar1 = (uint)(byte)((lconv *)param_1)->int_frac_digits;
    }
    *(uint *)(this + 0x78) = uVar1;
    if (((lconv *)param_1)->int_p_sign_posn == '\0') {
      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
      assign((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              *)(this + 0x48),L"()");
      cVar3 = ((lconv *)param_1)->int_n_sign_posn;
joined_r0x01827384:
      if (cVar3 == '\0') {
LAB_01827544:
        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
        assign((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)(this + 0x60),L"()");
      }
      else {
LAB_01827388:
        local_228 = ((lconv *)param_1)->negative_sign;
        mStack_220.__count = 0;
        mStack_220.__value = (_union_27)0x0;
        p_Var6 = uselocale(__dataset);
        sVar7 = mbsrtowcs(&local_200[0].__count,&local_228,100,&mStack_220);
        if (p_Var6 != (__locale_t)0x0) {
          uselocale(p_Var6);
        }
        if (sVar7 == 0xffffffffffffffff) goto LAB_0182771c;
        pbVar22 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                   *)(this + 0x60);
        bVar2 = *pbVar22;
        uVar8 = (long)(sVar7 << 2) >> 2;
        if (((byte)bVar2 & 1) == 0) {
          uVar11 = 4;
          uVar14 = (ulong)(byte)bVar2;
          uVar20 = uVar8 - 4;
          if (uVar8 < 4 || uVar20 == 0) goto LAB_018273e8;
LAB_0182742c:
          if (((byte)bVar2 & 1) == 0) {
            uVar14 = (ulong)((byte)bVar2 >> 1);
          }
          else {
            uVar14 = *(ulong *)(this + 0x68);
          }
          basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
          __grow_by(pbVar22,uVar11,uVar20,uVar14,0,uVar14,0);
          if (((byte)*pbVar22 & 1) != 0) goto LAB_01827578;
LAB_018273ec:
          pmVar13 = this + 100;
        }
        else {
          uVar14 = *(ulong *)pbVar22;
          uVar11 = (uVar14 & 0xfffffffffffffffe) - 1;
          uVar20 = uVar8 - uVar11;
          if (uVar11 <= uVar8 && uVar20 != 0) goto LAB_0182742c;
LAB_018273e8:
          if ((uVar14 & 1) == 0) goto LAB_018273ec;
LAB_01827578:
          pmVar13 = *(moneypunct_byname<wchar_t,true> **)(this + 0x70);
        }
        if (sVar7 != 0) {
          lVar17 = sVar7 * 4;
          uVar20 = (lVar17 - 4U >> 2) + 1;
          pmVar9 = local_200;
          pmVar15 = pmVar13;
          if ((uVar20 < 8) ||
             ((pmVar13 < (moneypunct_byname<wchar_t,true> *)(&local_200[0].__count + sVar7) &&
              (pmVar9 = local_200, local_200 < (mbstate_t *)(pmVar13 + lVar17))))) {
LAB_0182761c:
            do {
              p_Var16 = &pmVar9->__value;
              *(int *)pmVar15 = pmVar9->__count;
              pmVar15 = pmVar15 + 4;
              pmVar9 = (mbstate_t *)p_Var16;
            } while ((_union_27 *)(&local_200[0].__count + sVar7) != p_Var16);
          }
          else {
            uVar14 = uVar20 & 0x7ffffffffffffff8;
            pmVar18 = local_200 + 2;
            pmVar15 = pmVar13 + uVar14 * 4;
            pmVar9 = (mbstate_t *)(&local_200[0].__count + uVar14);
            pmVar19 = (mbstate_t *)(pmVar13 + 0x10);
            uVar11 = uVar14;
            do {
              pmVar5 = pmVar18 + -1;
              mVar23 = pmVar18[-2];
              mVar25 = pmVar18[1];
              mVar24 = *pmVar18;
              pmVar18 = pmVar18 + 4;
              uVar11 = uVar11 - 8;
              pmVar19[-1] = *pmVar5;
              pmVar19[-2] = mVar23;
              pmVar19[1] = mVar25;
              *pmVar19 = mVar24;
              pmVar19 = pmVar19 + 4;
            } while (uVar11 != 0);
            if (uVar20 != uVar14) goto LAB_0182761c;
          }
          pmVar13 = pmVar13 + (long)local_200 + (lVar17 - (long)local_200);
        }
        *(int *)pmVar13 = 0;
        if (((byte)*pbVar22 & 1) == 0) {
          *pbVar22 = SUB41((int)sVar7 << 1,0);
        }
        else {
          *(ulong *)(this + 0x68) = uVar8;
        }
      }
      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
      basic_string((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                    *)&local_218,(basic_string *)this_00);
      FUN_01826a88(this + 0x7c,&local_218,1,((lconv *)param_1)->int_p_cs_precedes,
                   ((lconv *)param_1)->int_p_sep_by_space,((lconv *)param_1)->int_p_sign_posn);
      FUN_01826a88(this + 0x80,this_00,1,((lconv *)param_1)->int_n_cs_precedes,
                   ((lconv *)param_1)->int_n_sep_by_space,((lconv *)param_1)->int_n_sign_posn);
      if (((byte)local_218._0_1_ & 1) != 0) {
        operator_delete(local_208);
      }
      freelocale(__dataset);
      if (*(long *)(lVar4 + 0x28) == local_68) {
        return;
      }
LAB_0182770c:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    local_228 = ((lconv *)param_1)->positive_sign;
    mStack_220.__count = 0;
    mStack_220.__value = (_union_27)0x0;
    p_Var6 = uselocale(__dataset);
    sVar7 = mbsrtowcs(&local_200[0].__count,&local_228,100,&mStack_220);
    if (p_Var6 != (__locale_t)0x0) {
      uselocale(p_Var6);
    }
    if (sVar7 != 0xffffffffffffffff) {
      pbVar22 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 *)(this + 0x48);
      bVar2 = *pbVar22;
      uVar8 = (long)(sVar7 << 2) >> 2;
      if (((byte)bVar2 & 1) == 0) {
        uVar11 = 4;
        uVar14 = (ulong)(byte)bVar2;
        uVar20 = uVar8 - 4;
        if (uVar8 < 4 || uVar20 == 0) goto LAB_01827360;
LAB_0182740c:
        if (((byte)bVar2 & 1) == 0) {
          uVar14 = (ulong)((byte)bVar2 >> 1);
        }
        else {
          uVar14 = *(ulong *)(this + 0x50);
        }
        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
        __grow_by(pbVar22,uVar11,uVar20,uVar14,0,uVar14,0);
        if (((byte)*pbVar22 & 1) != 0) goto LAB_01827458;
LAB_01827364:
        pmVar13 = this + 0x4c;
      }
      else {
        uVar14 = *(ulong *)pbVar22;
        uVar11 = (uVar14 & 0xfffffffffffffffe) - 1;
        uVar20 = uVar8 - uVar11;
        if (uVar11 <= uVar8 && uVar20 != 0) goto LAB_0182740c;
LAB_01827360:
        if ((uVar14 & 1) == 0) goto LAB_01827364;
LAB_01827458:
        pmVar13 = *(moneypunct_byname<wchar_t,true> **)(this + 0x58);
      }
      if (sVar7 != 0) {
        lVar17 = sVar7 * 4;
        uVar20 = (lVar17 - 4U >> 2) + 1;
        pmVar9 = local_200;
        pmVar15 = pmVar13;
        if ((uVar20 < 8) ||
           ((pmVar13 < (moneypunct_byname<wchar_t,true> *)(&local_200[0].__count + sVar7) &&
            (pmVar9 = local_200, local_200 < (mbstate_t *)(pmVar13 + lVar17))))) {
LAB_018274fc:
          do {
            p_Var16 = &pmVar9->__value;
            *(int *)pmVar15 = pmVar9->__count;
            pmVar15 = pmVar15 + 4;
            pmVar9 = (mbstate_t *)p_Var16;
          } while ((_union_27 *)(&local_200[0].__count + sVar7) != p_Var16);
        }
        else {
          uVar14 = uVar20 & 0x7ffffffffffffff8;
          pmVar18 = local_200 + 2;
          pmVar15 = pmVar13 + uVar14 * 4;
          pmVar9 = (mbstate_t *)(&local_200[0].__count + uVar14);
          pmVar19 = (mbstate_t *)(pmVar13 + 0x10);
          uVar11 = uVar14;
          do {
            pmVar5 = pmVar18 + -1;
            mVar23 = pmVar18[-2];
            mVar25 = pmVar18[1];
            mVar24 = *pmVar18;
            pmVar18 = pmVar18 + 4;
            uVar11 = uVar11 - 8;
            pmVar19[-1] = *pmVar5;
            pmVar19[-2] = mVar23;
            pmVar19[1] = mVar25;
            *pmVar19 = mVar24;
            pmVar19 = pmVar19 + 4;
          } while (uVar11 != 0);
          if (uVar20 != uVar14) goto LAB_018274fc;
        }
        pmVar13 = pmVar13 + (long)local_200 + (lVar17 - (long)local_200);
      }
      *(int *)pmVar13 = 0;
      if (((byte)*pbVar22 & 1) != 0) {
        *(ulong *)(this + 0x50) = uVar8;
        cVar3 = ((lconv *)param_1)->int_n_sign_posn;
        goto joined_r0x01827384;
      }
      *pbVar22 = SUB41((int)sVar7 << 1,0);
      if (((lconv *)param_1)->int_n_sign_posn == '\0') goto LAB_01827544;
      goto LAB_01827388;
    }
    __throw_runtime_error("locale not supported");
LAB_0182771c:
    uVar8 = __throw_runtime_error("locale not supported");
  }
  if (uVar8 < 0x17) {
    __dest = (void *)((ulong)&local_218 | 1);
    local_218 = CONCAT71(local_218._1_7_,(char)((int)uVar8 << 1));
    if (uVar8 == 0) goto LAB_0182777c;
  }
  else {
    uVar20 = uVar8 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar20);
    local_218 = uVar20 | 1;
    local_210 = uVar8;
    local_208 = __dest;
  }
  memcpy(__dest,param_1,uVar8);
LAB_0182777c:
  *(undefined1 *)((long)__dest + uVar8) = 0;
  pmVar9 = (mbstate_t *)
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
                     ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&local_218,0,"moneypunct_byname failed to construct for ");
  local_200[2] = pmVar9[2];
  local_200[1] = pmVar9[1];
  local_200[0] = *pmVar9;
  pmVar9[1].__count = 0;
  pmVar9[1].__value = (_union_27)0x0;
  pmVar9[2].__count = 0;
  pmVar9[2].__value = (_union_27)0x0;
  pmVar9->__count = 0;
  pmVar9->__value = (_union_27)0x0;
  uVar10 = FUN_01819190(local_200);
  if (((ulong)local_200[0] & 1) != 0) {
    operator_delete((void *)local_200[2]);
  }
  if ((local_218 & 1) != 0) {
    operator_delete(local_208);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(uVar10);
  }
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume(uVar10);
}

