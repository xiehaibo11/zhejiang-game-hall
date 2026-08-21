
/* std::__ndk1::numpunct_byname<char>::__init(char const*) */

void __thiscall
std::__ndk1::numpunct_byname<char>::__init(numpunct_byname<char> *this,char *param_1)

{
  long lVar1;
  wchar_t __c;
  int iVar2;
  __locale_t __dataset;
  __locale_t p_Var3;
  lconv *plVar4;
  size_t sVar5;
  mbstate_t *pmVar6;
  undefined8 uVar7;
  numpunct_byname<char> nVar8;
  void *__dest;
  numpunct_byname<char> *pnVar9;
  ulong uVar10;
  ulong local_88;
  size_t local_80;
  void *local_78;
  mbstate_t local_70;
  mbstate_t mStack_68;
  mbstate_t local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  iVar2 = strcmp(param_1,"C");
  if (iVar2 == 0) goto LAB_0181fd30;
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
      if (sVar5 == 0) goto LAB_0181fdd4;
    }
    else {
      uVar10 = sVar5 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar10);
      local_88 = uVar10 | 1;
      local_80 = sVar5;
      local_78 = __dest;
    }
    memcpy(__dest,param_1,sVar5);
LAB_0181fdd4:
    *(undefined1 *)((long)__dest + sVar5) = 0;
    pmVar6 = (mbstate_t *)
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
                       ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         *)&local_88,0,
                        "numpunct_byname<char>::numpunct_byname failed to construct for ");
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
  pnVar9 = (numpunct_byname<char> *)plVar4->decimal_point;
  nVar8 = *pnVar9;
  if (nVar8 != (numpunct_byname<char>)0x0) {
    if (pnVar9[1] == (numpunct_byname<char>)0x0) {
LAB_0181fc68:
      this[0x10] = nVar8;
    }
    else {
      local_70.__count = 0;
      local_70.__value = (_union_27)0x0;
      sVar5 = strlen((char *)pnVar9);
      p_Var3 = uselocale(__dataset);
      sVar5 = mbrtowc((wchar_t *)&local_88,(char *)pnVar9,sVar5,&local_70);
      if (p_Var3 != (__locale_t)0x0) {
        uselocale(p_Var3);
      }
      __c = (wchar_t)local_88;
      if (sVar5 < 0xfffffffffffffffe) {
        p_Var3 = uselocale(__dataset);
        iVar2 = wctob(__c);
        if (p_Var3 != (__locale_t)0x0) {
          uselocale(p_Var3);
        }
        if (iVar2 == -1) {
          if ((__c == L'\x202f') || (__c == L'\xa0')) {
            nVar8 = (numpunct_byname<char>)0x20;
            goto LAB_0181fc68;
          }
        }
        else {
          this[0x10] = SUB41(iVar2,0);
        }
      }
    }
  }
  pnVar9 = (numpunct_byname<char> *)plVar4->thousands_sep;
  nVar8 = *pnVar9;
  if (nVar8 != (numpunct_byname<char>)0x0) {
    if (pnVar9[1] == (numpunct_byname<char>)0x0) {
LAB_0181fd18:
      this[0x11] = nVar8;
    }
    else {
      local_70.__count = 0;
      local_70.__value = (_union_27)0x0;
      sVar5 = strlen((char *)pnVar9);
      p_Var3 = uselocale(__dataset);
      sVar5 = mbrtowc((wchar_t *)&local_88,(char *)pnVar9,sVar5,&local_70);
      if (p_Var3 != (__locale_t)0x0) {
        uselocale(p_Var3);
      }
      if (sVar5 < 0xfffffffffffffffe) {
        p_Var3 = uselocale(__dataset);
        iVar2 = wctob((wchar_t)local_88);
        if (p_Var3 != (__locale_t)0x0) {
          uselocale(p_Var3);
        }
        if (iVar2 == -1) {
          if (((wchar_t)local_88 == L'\x202f') || ((wchar_t)local_88 == L'\xa0')) {
            nVar8 = (numpunct_byname<char>)0x20;
            goto LAB_0181fd18;
          }
        }
        else {
          this[0x11] = SUB41(iVar2,0);
        }
      }
    }
  }
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x18),plVar4->grouping);
  freelocale(__dataset);
LAB_0181fd30:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

