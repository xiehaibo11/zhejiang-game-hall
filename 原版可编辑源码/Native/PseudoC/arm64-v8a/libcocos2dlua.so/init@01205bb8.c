
/* std::__ndk1::moneypunct_byname<char, true>::init(char const*) */

void __thiscall
std::__ndk1::moneypunct_byname<char,true>::init(moneypunct_byname<char,true> *this,char *param_1)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  long lVar1;
  wchar_t __c;
  int iVar2;
  uint uVar3;
  __locale_t __dataset;
  __locale_t p_Var4;
  lconv *plVar5;
  size_t sVar6;
  mbstate_t *pmVar7;
  moneypunct_byname<char,true> mVar8;
  moneypunct_byname<char,true> *__s;
  byte *__s_00;
  wchar_t local_88 [6];
  mbstate_t local_70;
  mbstate_t mStack_68;
  mbstate_t local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __dataset = newlocale(0x1fbf,param_1,(__locale_t)0x0);
  if (__dataset == (__locale_t)0x0) {
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               local_88,param_1);
    pmVar7 = (mbstate_t *)
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
                       ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         *)local_88,0,"moneypunct_byname failed to construct for ");
    local_60 = pmVar7[2];
    mStack_68 = pmVar7[1];
    local_70 = *pmVar7;
    pmVar7[1].__count = 0;
    pmVar7[1].__value = (_union_27)0x0;
    pmVar7[2].__count = 0;
    pmVar7[2].__value = (_union_27)0x0;
    pmVar7->__count = 0;
    pmVar7->__value = (_union_27)0x0;
    FUN_011f98b4(&local_70);
    goto LAB_01205ec4;
  }
  p_Var4 = uselocale(__dataset);
  plVar5 = localeconv();
  if (p_Var4 != (__locale_t)0x0) {
    uselocale(p_Var4);
  }
  __s = (moneypunct_byname<char,true> *)plVar5->mon_decimal_point;
  mVar8 = *__s;
  if (mVar8 == (moneypunct_byname<char,true>)0x0) goto LAB_01205c74;
  if (__s[1] == (moneypunct_byname<char,true>)0x0) {
LAB_01205c78:
    this[0x10] = mVar8;
  }
  else {
    local_70.__count = 0;
    local_70.__value = (_union_27)0x0;
    sVar6 = strlen((char *)__s);
    p_Var4 = uselocale(__dataset);
    sVar6 = mbrtowc(local_88,(char *)__s,sVar6,&local_70);
    if (p_Var4 != (__locale_t)0x0) {
      uselocale(p_Var4);
    }
    __c = local_88[0];
    if (0xfffffffffffffffd < sVar6) {
LAB_01205c74:
      mVar8 = (moneypunct_byname<char,true>)0xff;
      goto LAB_01205c78;
    }
    p_Var4 = uselocale(__dataset);
    iVar2 = wctob(__c);
    if (p_Var4 != (__locale_t)0x0) {
      uselocale(p_Var4);
    }
    if (iVar2 == -1) {
      if ((__c == L'\x202f') || (__c == L'\xa0')) {
        mVar8 = (moneypunct_byname<char,true>)0x20;
        goto LAB_01205c78;
      }
      goto LAB_01205c74;
    }
    this[0x10] = SUB41(iVar2,0);
  }
  __s_00 = (byte *)plVar5->mon_thousands_sep;
  uVar3 = (uint)*__s_00;
  if (*__s_00 == 0) {
LAB_01205cd8:
    uVar3 = 0xff;
  }
  else if (__s_00[1] != 0) {
    local_70.__count = 0;
    local_70.__value = (_union_27)0x0;
    sVar6 = strlen((char *)__s_00);
    p_Var4 = uselocale(__dataset);
    sVar6 = mbrtowc(local_88,(char *)__s_00,sVar6,&local_70);
    if (p_Var4 != (__locale_t)0x0) {
      uselocale(p_Var4);
    }
    if (sVar6 < 0xfffffffffffffffe) {
      p_Var4 = uselocale(__dataset);
      uVar3 = wctob(local_88[0]);
      if (p_Var4 != (__locale_t)0x0) {
        uselocale(p_Var4);
      }
      if (((uVar3 != 0xffffffff) || (uVar3 = 0x20, local_88[0] == L'\xa0')) ||
         (local_88[0] == L'\x202f')) goto LAB_01205cdc;
    }
    goto LAB_01205cd8;
  }
LAB_01205cdc:
  this[0x11] = SUB41(uVar3,0);
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x18),plVar5->mon_grouping);
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x30);
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
            (this_00,plVar5->int_curr_symbol);
  uVar3 = 0;
  if ((byte)plVar5->int_frac_digits != 0xff) {
    uVar3 = (uint)(byte)plVar5->int_frac_digits;
  }
  *(uint *)(this + 0x78) = uVar3;
  if (plVar5->int_p_sign_posn == '\0') {
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x48),"()");
  }
  else {
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x48),plVar5->positive_sign);
  }
  if (plVar5->int_n_sign_posn == '\0') {
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x60),"()");
  }
  else {
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x60),plVar5->negative_sign);
  }
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_70,(basic_string *)this_00);
  FUN_012057a4(this + 0x7c,&local_70,1,plVar5->int_p_cs_precedes,plVar5->int_p_sep_by_space,
               plVar5->int_p_sign_posn);
  FUN_012057a4(this + 0x80,this_00,1,plVar5->int_n_cs_precedes,plVar5->int_n_sep_by_space,
               plVar5->int_n_sign_posn);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete((void *)local_60);
  }
  freelocale(__dataset);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_01205ec4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

