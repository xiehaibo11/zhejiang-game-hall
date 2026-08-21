
/* operator new(unsigned long, std::align_val_t) */

void * operator_new(size_t param_1,size_t param_2)

{
  long lVar1;
  int iVar2;
  code *pcVar3;
  bad_alloc *this;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 == 0) {
    param_1 = 1;
  }
  if (param_2 < 9) {
    param_2 = 8;
  }
  while( true ) {
    iVar2 = posix_memalign(&local_40,param_2,param_1);
    if (iVar2 == 0) {
      if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return local_40;
    }
    pcVar3 = (code *)std::get_new_handler();
    if (pcVar3 == (code *)0x0) break;
    (*pcVar3)();
  }
  this = (bad_alloc *)__cxa_allocate_exception(8);
  std::bad_alloc::bad_alloc(this);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,&std::bad_alloc::typeinfo,std::bad_alloc::~bad_alloc);
}

