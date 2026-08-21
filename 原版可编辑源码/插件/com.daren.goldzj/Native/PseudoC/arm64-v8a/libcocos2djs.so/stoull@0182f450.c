
/* std::__ndk1::stoull(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned long*, int) */

ulonglong std::__ndk1::stoull(basic_string *param_1,ulong *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  ulonglong uVar5;
  logic_error *plVar6;
  basic_string *__nptr;
  byte local_80 [16];
  void *local_70;
  char *local_68;
  basic_string abStack_60 [24];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_80[0] = 0xc;
  local_80[8] = 0;
  local_80[9] = 0;
  local_80[10] = 0;
  local_80[0xb] = 0;
  local_80[0xc] = 0;
  local_80[0xd] = 0;
  local_80[0xe] = 0;
  local_80[0xf] = 0;
  local_70 = (void *)0x0;
  local_80[5] = 0x6c;
  local_80[6] = 0x6c;
  local_80[1] = 0x73;
  local_80[2] = 0x74;
  local_80[3] = 0x6f;
  local_80[4] = 0x75;
  local_80[7] = 0;
  local_68 = (char *)0x0;
  __nptr = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    __nptr = param_1 + 1;
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  *piVar4 = 0;
  uVar5 = strtoull((char *)__nptr,&local_68,param_3);
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
    *param_2 = (long)local_68 - (long)__nptr;
  }
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

