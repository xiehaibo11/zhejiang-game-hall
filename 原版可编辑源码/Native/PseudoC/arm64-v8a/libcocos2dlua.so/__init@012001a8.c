
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
  char *pcVar8;
  wchar_t local_88 [4];
  void *local_78;
  mbstate_t local_70;
  mbstate_t mStack_68;
  mbstate_t local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  iVar2 = strcmp(param_1,"C");
  if (iVar2 != 0) {
    __dataset = newlocale(0x1fbf,param_1,(__locale_t)0x0);
    if (__dataset == (__locale_t)0x0) {
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 local_88,param_1);
      pmVar6 = (mbstate_t *)
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               insert((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)local_88,0,
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
      uVar7 = FUN_011f98b4(&local_70);
      if (((ulong)local_70 & 1) == 0) {
        if ((local_88[0] & 1U) != 0) goto LAB_01200388;
      }
      else {
        operator_delete((void *)local_60);
        if (((byte)local_88[0]._0_1_ & 1) != 0) {
LAB_01200388:
          operator_delete(local_78);
                    /* WARNING: Subroutine does not return */
          _Unwind_Resume(uVar7);
        }
      }
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar7);
    }
    p_Var3 = uselocale(__dataset);
    plVar4 = localeconv();
    if (p_Var3 != (__locale_t)0x0) {
      uselocale(p_Var3);
    }
    pcVar8 = plVar4->decimal_point;
    if (*pcVar8 != '\0') {
      local_70.__count = 0;
      local_70.__value = (_union_27)0x0;
      sVar5 = strlen(pcVar8);
      p_Var3 = uselocale(__dataset);
      sVar5 = mbrtowc(local_88,pcVar8,sVar5,&local_70);
      if (p_Var3 != (__locale_t)0x0) {
        uselocale(p_Var3);
      }
      if (sVar5 < 0xfffffffffffffffe) {
        *(wchar_t *)(this + 0x10) = local_88[0];
      }
    }
    pcVar8 = plVar4->thousands_sep;
    if (*pcVar8 != '\0') {
      local_70.__count = 0;
      local_70.__value = (_union_27)0x0;
      sVar5 = strlen(pcVar8);
      p_Var3 = uselocale(__dataset);
      sVar5 = mbrtowc(local_88,pcVar8,sVar5,&local_70);
      if (p_Var3 != (__locale_t)0x0) {
        uselocale(p_Var3);
      }
      if (sVar5 < 0xfffffffffffffffe) {
        *(wchar_t *)(this + 0x14) = local_88[0];
      }
    }
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x18),plVar4->grouping);
    freelocale(__dataset);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

