
/* std::__ndk1::stol(std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> > const&, unsigned long*, int) */

long std::__ndk1::stol(basic_string *param_1,ulong *param_2,int param_3)

{
  basic_string *__nptr;
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  logic_error *plVar6;
  ulong local_80 [2];
  void *local_70;
  wchar_t *local_68;
  basic_string abStack_60 [24];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_80[1] = 0;
  local_70 = (void *)0x0;
  local_68 = (wchar_t *)0x0;
  local_80[0] = 0x6c6f747308;
  __nptr = param_1 + 4;
  if (((byte)*param_1 & 1) != 0) {
    __nptr = *(basic_string **)(param_1 + 0x10);
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  *piVar4 = 0;
  lVar5 = wcstol((wchar_t *)__nptr,&local_68,param_3);
  iVar2 = *piVar4;
  *piVar4 = iVar1;
  if (iVar2 == 0x22) {
    FUN_008d57d4(abStack_60,local_80,": out of range");
    plVar6 = (logic_error *)__cxa_allocate_exception(0x10);
    logic_error::logic_error(plVar6,abStack_60);
    *(undefined ***)plVar6 = &PTR__invalid_argument_01cdf878;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar6,&out_of_range::typeinfo,invalid_argument::~invalid_argument);
  }
  if ((long)local_68 - (long)__nptr == 0) {
    FUN_008d57d4(abStack_60,local_80,": no conversion");
    plVar6 = (logic_error *)__cxa_allocate_exception(0x10);
    logic_error::logic_error(plVar6,abStack_60);
    *(undefined ***)plVar6 = &PTR__invalid_argument_01cdf7f8;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar6,&invalid_argument::typeinfo,invalid_argument::~invalid_argument);
  }
  if (param_2 != (ulong *)0x0) {
    *param_2 = (long)local_68 - (long)__nptr >> 2;
  }
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

