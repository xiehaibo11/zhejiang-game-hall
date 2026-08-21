
/* std::__ndk1::numpunct_byname<wchar_t>::__init(char const*) */

void __thiscall
std::__ndk1::numpunct_byname<wchar_t>::__init(numpunct_byname<wchar_t> *this,char *param_1)

{
  long lVar1;
  int iVar2;
  __locale_t __dataset;
  __locale_t p_Var3;
  lconv *plVar4;
  size_t sVar5;
  mbstate_t *pmVar6;
  undefined8 uVar7;
  void *__dest;
  ulong uVar8;
  char *pcVar9;
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
  if (iVar2 == 0) {
LAB_01820184:
    if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  __dataset = newlocale(0x1fbf,param_1,(__locale_t)0x0);
  if (__dataset != (__locale_t)0x0) {
    p_Var3 = uselocale(__dataset);
    plVar4 = localeconv();
    if (p_Var3 != (__locale_t)0x0) {
      uselocale(p_Var3);
    }
    pcVar9 = plVar4->decimal_point;
    if (*pcVar9 != '\0') {
      local_70.__count = 0;
      local_70.__value = (_union_27)0x0;
      sVar5 = strlen(pcVar9);
      p_Var3 = uselocale(__dataset);
      sVar5 = mbrtowc((wchar_t *)&local_88,pcVar9,sVar5,&local_70);
      if (p_Var3 != (__locale_t)0x0) {
        uselocale(p_Var3);
      }
      if (sVar5 < 0xfffffffffffffffe) {
        *(wchar_t *)(this + 0x10) = (wchar_t)local_88;
      }
    }
    pcVar9 = plVar4->thousands_sep;
    if (*pcVar9 != '\0') {
      local_70.__count = 0;
      local_70.__value = (_union_27)0x0;
      sVar5 = strlen(pcVar9);
      p_Var3 = uselocale(__dataset);
      sVar5 = mbrtowc((wchar_t *)&local_88,pcVar9,sVar5,&local_70);
      if (p_Var3 != (__locale_t)0x0) {
        uselocale(p_Var3);
      }
      if (sVar5 < 0xfffffffffffffffe) {
        *(wchar_t *)(this + 0x14) = (wchar_t)local_88;
      }
    }
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x18),plVar4->grouping);
    freelocale(__dataset);
    goto LAB_01820184;
  }
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
    if (sVar5 == 0) goto LAB_01820228;
  }
  else {
    uVar8 = sVar5 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar8);
    local_88 = uVar8 | 1;
    local_80 = sVar5;
    local_78 = __dest;
  }
  memcpy(__dest,param_1,sVar5);
LAB_01820228:
  *(undefined1 *)((long)__dest + sVar5) = 0;
  pmVar6 = (mbstate_t *)
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
                     ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&local_88,0,
                      "numpunct_byname<wchar_t>::numpunct_byname failed to construct for ");
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

