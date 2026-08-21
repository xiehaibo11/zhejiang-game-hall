
/* std::__ndk1::stod(std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> > const&, unsigned long*) */

undefined1  [16] std::__ndk1::stod(basic_string *param_1,ulong *param_2)

{
  basic_string *__nptr;
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  logic_error *plVar5;
  undefined8 extraout_var;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [16];
  void *local_70;
  wchar_t *local_68;
  basic_string abStack_60 [24];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,"stod");
  local_68 = (wchar_t *)0x0;
  __nptr = param_1 + 4;
  if (((byte)*param_1 & 1) != 0) {
    __nptr = *(basic_string **)(param_1 + 0x10);
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  *piVar4 = 0;
  auVar6._0_8_ = wcstod((wchar_t *)__nptr,&local_68);
  iVar2 = *piVar4;
  *piVar4 = iVar1;
  if (iVar2 == 0x22) {
    FUN_007c1fb0(abStack_60,local_80,": out of range");
    plVar5 = (logic_error *)__cxa_allocate_exception(0x10);
    logic_error::logic_error(plVar5,abStack_60);
    *(undefined ***)plVar5 = &PTR__invalid_argument_017356a0;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar5,&out_of_range::typeinfo,invalid_argument::~invalid_argument);
  }
  if ((long)local_68 - (long)__nptr == 0) {
    FUN_007c1fb0(abStack_60,local_80,": no conversion");
    plVar5 = (logic_error *)__cxa_allocate_exception(0x10);
    logic_error::logic_error(plVar5,abStack_60);
    *(undefined ***)plVar5 = &PTR__invalid_argument_01735620;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar5,&invalid_argument::typeinfo,invalid_argument::~invalid_argument);
  }
  if (param_2 != (ulong *)0x0) {
    *param_2 = (long)local_68 - (long)__nptr >> 2;
  }
  uVar7 = extraout_var;
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    auVar6._8_8_ = uVar7;
    return auVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

