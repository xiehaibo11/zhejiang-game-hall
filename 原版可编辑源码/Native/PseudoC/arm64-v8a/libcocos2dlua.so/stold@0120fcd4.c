
/* std::__ndk1::stold(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned long*) */

void std::__ndk1::stold(basic_string *param_1,ulong *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  logic_error *plVar5;
  basic_string *__nptr;
  double dVar6;
  char *local_80;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_78 [16];
  void *local_68;
  basic_string abStack_60 [24];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_78,"stold");
  local_80 = (char *)0x0;
  __nptr = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    __nptr = param_1 + 1;
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  *piVar4 = 0;
  dVar6 = strtold((char *)__nptr,&local_80);
  iVar2 = *piVar4;
  *piVar4 = iVar1;
  if (iVar2 == 0x22) {
    FUN_007c1fb0(abStack_60,local_78,": out of range");
    plVar5 = (logic_error *)__cxa_allocate_exception(0x10);
    logic_error::logic_error(plVar5,abStack_60);
    *(undefined ***)plVar5 = &PTR__invalid_argument_017356a0;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar5,&out_of_range::typeinfo,invalid_argument::~invalid_argument);
  }
  if ((long)local_80 - (long)__nptr == 0) {
    FUN_007c1fb0(abStack_60,local_78,": no conversion");
    plVar5 = (logic_error *)__cxa_allocate_exception(0x10);
    logic_error::logic_error(plVar5,abStack_60);
    *(undefined ***)plVar5 = &PTR__invalid_argument_01735620;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar5,&invalid_argument::typeinfo,invalid_argument::~invalid_argument);
  }
  if (param_2 != (ulong *)0x0) {
    *param_2 = (long)local_80 - (long)__nptr;
  }
  if (((byte)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(dVar6);
}

