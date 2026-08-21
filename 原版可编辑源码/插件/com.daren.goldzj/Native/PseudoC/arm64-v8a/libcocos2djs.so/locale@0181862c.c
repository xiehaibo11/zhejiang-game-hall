
/* std::__ndk1::locale::locale(char const*) */

void __thiscall std::__ndk1::locale::locale(locale *this,char *param_1)

{
  long lVar1;
  __shared_count *this_00;
  size_t __n;
  runtime_error *this_01;
  void *__dest;
  ulong uVar2;
  ulong local_70;
  size_t local_68;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_1 == (char *)0x0) {
    this_01 = (runtime_error *)__cxa_allocate_exception(0x10);
    runtime_error::runtime_error(this_01,"locale constructed with null");
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_01,&runtime_error::typeinfo,overflow_error::~overflow_error);
  }
  this_00 = operator_new(0x140);
  local_70 = 0;
  local_68 = 0;
  local_60 = (void *)0x0;
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_70 | 1);
    local_70 = CONCAT71(local_70._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_018186d8;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar2);
    local_70 = uVar2 | 1;
    local_68 = __n;
    local_60 = __dest;
  }
  memcpy(__dest,param_1,__n);
LAB_018186d8:
  *(undefined1 *)((long)__dest + __n) = 0;
  FUN_01811908(this_00,&local_70,0);
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  *(__shared_count **)this = this_00;
  __shared_count::__add_shared(this_00);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

