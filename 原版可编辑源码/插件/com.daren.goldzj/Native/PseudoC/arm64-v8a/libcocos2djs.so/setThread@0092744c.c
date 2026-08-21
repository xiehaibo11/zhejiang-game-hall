
/* cocos2d::renderer::ParallelTask::setThread(int) */

void __thiscall cocos2d::renderer::ParallelTask::setThread(ParallelTask *this,int param_1)

{
  int iVar1;
  pthread_t *__newthread;
  __thread_struct *this_00;
  undefined8 *__arg;
  thread *this_01;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x20);
  __newthread = operator_new(8,(nothrow_t *)&std::nothrow);
  if (__newthread != (pthread_t *)0x0) {
    this_00 = operator_new(8);
    std::__ndk1::__thread_struct::__thread_struct(this_00);
    __arg = operator_new(0x18);
    *__arg = this_00;
    __arg[1] = this;
    __arg[2] = (ulong)(uint)param_1;
    iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,FUN_00927e14,__arg);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__throw_system_error(iVar1,"thread constructor failed");
    }
  }
  this_01 = *(thread **)(lVar2 + (long)param_1 * 8);
  *(pthread_t **)(lVar2 + (long)param_1 * 8) = __newthread;
  if (this_01 != (thread *)0x0) {
    std::__ndk1::thread::~thread(this_01);
    operator_delete(this_01);
    return;
  }
  return;
}

