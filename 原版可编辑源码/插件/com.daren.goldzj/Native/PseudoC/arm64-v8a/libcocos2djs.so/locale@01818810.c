
/* std::__ndk1::locale::locale(std::__ndk1::locale const&, char const*, int) */

void __thiscall std::__ndk1::locale::locale(locale *this,locale *param_1,char *param_2,int param_3)

{
  long lVar1;
  __shared_count *this_00;
  size_t __n;
  runtime_error *this_01;
  undefined8 uVar2;
  void *__dest;
  ulong uVar3;
  ulong local_80;
  size_t local_78;
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_2 == (char *)0x0) {
    this_01 = (runtime_error *)__cxa_allocate_exception(0x10,param_1,0,param_3);
    runtime_error::runtime_error(this_01,"locale constructed with null");
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_01,&runtime_error::typeinfo,overflow_error::~overflow_error);
  }
  this_00 = operator_new(0x140);
  uVar2 = *(undefined8 *)param_1;
  local_80 = 0;
  local_78 = 0;
  local_70 = (void *)0x0;
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_80 | 1);
    local_80 = CONCAT71(local_80._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_018188cc;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar3);
    local_80 = uVar3 | 1;
    local_78 = __n;
    local_70 = __dest;
  }
  memcpy(__dest,param_2,__n);
LAB_018188cc:
  *(undefined1 *)((long)__dest + __n) = 0;
  FUN_01813db8(this_00,uVar2,&local_80,param_3);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  *(__shared_count **)this = this_00;
  __shared_count::__add_shared(this_00);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

