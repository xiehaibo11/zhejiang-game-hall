
/* std::__ndk1::__function::__func<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE()
   const::{lambda()#2},
   std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE()
   const::{lambda()#2}>, void ()>::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall
std::__ndk1::__function::
__func<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE()const::{lambda()#2},std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE()const::{lambda()#2}>,void()>
::operator()(__func<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::_lambda()_1_::TEMPNAMEPLACEHOLDERVALUE()const::_lambda()_2_,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::_lambda()_1_::TEMPNAMEPLACEHOLDERVALUE()const::_lambda()_2_>,void()>
             *this)

{
  long lVar1;
  long *plVar2;
  undefined8 local_30;
  long local_28;
  
                    /* catch() { ... } // from try @ 00a6c7b8 with catch @ 00a6ca58 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00a6c7ac with catch @ 00a6ca70 */
  local_30 = *(undefined8 *)(this + 0x40);
                    /* catch() { ... } // from try @ 00a6c798 with catch @ 00a6ca78 */
  plVar2 = *(long **)(this + 0x30);
                    /* catch() { ... } // from try @ 00a6c770 with catch @ 00a6ca7c */
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_008589d0();
  }
                    /* catch() { ... } // from try @ 00a6c754 with catch @ 00a6ca84 */
                    /* catch() { ... } // from try @ 00a6c778 with catch @ 00a6ca88 */
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* catch() { ... } // from try @ 00a6c748 with catch @ 00a6caa0
                       catch() { ... } // from try @ 00a6c9d4 with catch @ 00a6caa0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

