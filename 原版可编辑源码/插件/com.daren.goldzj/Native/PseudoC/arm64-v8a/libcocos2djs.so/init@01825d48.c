
/* std::__ndk1::moneypunct_byname<char, true>::init(char const*) */

void __thiscall
std::__ndk1::moneypunct_byname<char,true>::init(moneypunct_byname<char,true> *this,char *param_1)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  long lVar1;
  wchar_t __c;
  int iVar2;
  __locale_t __dataset;
  __locale_t p_Var3;
  lconv *plVar4;
  size_t sVar5;
  mbstate_t *pmVar6;
  undefined8 uVar7;
  moneypunct_byname<char,true> mVar8;
  void *__dest;
  uint uVar9;
  moneypunct_byname<char,true> *__s;
  ulong uVar10;
  byte *__s_00;
  ulong local_88;
  size_t local_80;
  void *local_78;
  mbstate_t local_70;
  mbstate_t mStack_68;
  mbstate_t local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __dataset = newlocale(0x1fbf,param_1,(__locale_t)0x0);
  if (__dataset == (__locale_t)0x0) {
    local_88 = 0;
    local_80 = 0;
    local_78 = (void *)0x0;
    sVar5 = strlen(param_1);
    if (0xffffffffffffffef < sVar5) {
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_length_error();
    }
    if (sVar5 < 0x17) {
      __dest = (void *)((ulong)&local_88 | 1);
      local_88 = CONCAT71(local_88._1_7_,(char)((int)sVar5 << 1));
      if (sVar5 == 0) goto LAB_0182608c;
    }
    else {
      uVar10 = sVar5 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar10);
      local_88 = uVar10 | 1;
      local_80 = sVar5;
      local_78 = __dest;
    }
    memcpy(__dest,param_1,sVar5);
LAB_0182608c:
    *(undefined1 *)((long)__dest + sVar5) = 0;
    pmVar6 = (mbstate_t *)
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
                       ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         *)&local_88,0,"moneypunct_byname failed to construct for ");
    local_60 = pmVar6[2];
    mStack_68 = pmVar6[1];
    local_70 = *pmVar6;
    pmVar6[1].__count = 0;
    pmVar6[1].__value = (_union_27)0x0;
    pmVar6[2].__count = 0;
    pmVar6[2].__value = (_union_27)0x0;
    pmVar6->__count = 0;
    pmVar6->__value = (_union_27)0x0;
    uVar7 = FUN_01819190(&local_70);
    if (((ulong)local_70 & 1) != 0) {
      operator_delete((void *)local_60);
    }
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar7);
    }
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(uVar7);
  }
  p_Var3 = uselocale(__dataset);
  plVar4 = localeconv();
  if (p_Var3 != (__locale_t)0x0) {
    uselocale(p_Var3);
  }
  __s = (moneypunct_byname<char,true> *)plVar4->mon_decimal_point;
  mVar8 = *__s;
  if (mVar8 == (moneypunct_byname<char,true>)0x0) goto LAB_01825e04;
  if (__s[1] == (moneypunct_byname<char,true>)0x0) {
LAB_01825e08:
    this[0x10] = mVar8;
  }
  else {
    local_70.__count = 0;
    local_70.__value = (_union_27)0x0;
    sVar5 = strlen((char *)__s);
    p_Var3 = uselocale(__dataset);
    sVar5 = mbrtowc((wchar_t *)&local_88,(char *)__s,sVar5,&local_70);
    if (p_Var3 != (__locale_t)0x0) {
      uselocale(p_Var3);
    }
    __c = (wchar_t)local_88;
    if (0xfffffffffffffffd < sVar5) {
LAB_01825e04:
      mVar8 = (moneypunct_byname<char,true>)0xff;
      goto LAB_01825e08;
    }
    p_Var3 = uselocale(__dataset);
    iVar2 = wctob(__c);
    if (p_Var3 != (__locale_t)0x0) {
      uselocale(p_Var3);
    }
    if (iVar2 == -1) {
      if ((__c == L'\x202f') || (__c == L'\xa0')) {
        mVar8 = (moneypunct_byname<char,true>)0x20;
        goto LAB_01825e08;
      }
      goto LAB_01825e04;
    }
    this[0x10] = SUB41(iVar2,0);
  }
  __s_00 = (byte *)plVar4->mon_thousands_sep;
  uVar9 = (uint)*__s_00;
  if (*__s_00 != 0) {
    if (__s_00[1] == 0) goto LAB_01825e6c;
    local_70.__count = 0;
    local_70.__value = (_union_27)0x0;
    sVar5 = strlen((char *)__s_00);
    p_Var3 = uselocale(__dataset);
    sVar5 = mbrtowc((wchar_t *)&local_88,(char *)__s_00,sVar5,&local_70);
    if (p_Var3 != (__locale_t)0x0) {
      uselocale(p_Var3);
    }
    if (sVar5 < 0xfffffffffffffffe) {
      p_Var3 = uselocale(__dataset);
      uVar9 = wctob((wchar_t)local_88);
      if (p_Var3 != (__locale_t)0x0) {
        uselocale(p_Var3);
      }
      if (((uVar9 != 0xffffffff) || (uVar9 = 0x20, (wchar_t)local_88 == L'\xa0')) ||
         ((wchar_t)local_88 == L'\x202f')) goto LAB_01825e6c;
    }
  }
  uVar9 = 0xff;
LAB_01825e6c:
  this[0x11] = SUB41(uVar9,0);
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x18),plVar4->mon_grouping);
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x30);
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
            (this_00,plVar4->int_curr_symbol);
  uVar9 = 0;
  if ((byte)plVar4->int_frac_digits != 0xff) {
    uVar9 = (uint)(byte)plVar4->int_frac_digits;
  }
  *(uint *)(this + 0x78) = uVar9;
  if (plVar4->int_p_sign_posn == '\0') {
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x48),"()");
  }
  else {
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x48),plVar4->positive_sign);
  }
  if (plVar4->int_n_sign_posn == '\0') {
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x60),"()");
  }
  else {
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x60),plVar4->negative_sign);
  }
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_70,(basic_string *)this_00);
  FUN_018257f0(this + 0x7c,&local_70,1,plVar4->int_p_cs_precedes,plVar4->int_p_sep_by_space,
               plVar4->int_p_sign_posn);
  FUN_018257f0(this + 0x80,this_00,1,plVar4->int_n_cs_precedes,plVar4->int_n_sep_by_space,
               plVar4->int_n_sign_posn);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete((void *)local_60);
  }
  freelocale(__dataset);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

