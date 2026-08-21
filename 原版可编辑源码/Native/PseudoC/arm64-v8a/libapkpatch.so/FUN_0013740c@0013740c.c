
pthread_cond_t * FUN_0013740c(void)

{
  long lVar1;
  int iVar2;
  pthread_cond_t *__cond;
  runtime_error *this;
  undefined8 *puVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> abStack_88 [24];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __cond = operator_new(0x30);
  (__cond->__data).__total_seq = 0;
  __cond->__align = 0;
  (__cond->__data).__woken_seq = 0;
  (__cond->__data).__wakeup_seq = 0;
  *(uint *)((long)__cond + 0x28) = 0;
  *(uint *)((long)__cond + 0x2c) = 0;
  (__cond->__data).__mutex = (void *)0x0;
  iVar2 = pthread_cond_init(__cond,(pthread_condattr_t *)0x0);
  if (iVar2 != 0) {
    operator_delete(__cond);
    this = (runtime_error *)__cxa_allocate_exception(0x10);
    FUN_00136f64(abStack_88,iVar2);
    puVar3 = (undefined8 *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
                       (abStack_88,0,"pthread_cond_init() return ");
    local_60 = puVar3[2];
    uStack_68 = puVar3[1];
    local_70 = *puVar3;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    puVar3 = (undefined8 *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                       ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         *)&local_70," error!");
    local_40 = puVar3[2];
    uStack_48 = puVar3[1];
    local_50 = *puVar3;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    std::runtime_error::runtime_error(this,(basic_string *)&local_50);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,&std::runtime_error::typeinfo,std::underflow_error::~underflow_error);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return __cond;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

