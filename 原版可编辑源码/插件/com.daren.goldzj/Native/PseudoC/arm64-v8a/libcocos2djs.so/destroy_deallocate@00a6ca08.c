
/* std::__ndk1::__function::__func<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::{lambda()#1}::operator()()
   const::{lambda()#2},
   std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::{lambda()#1}::operator()()
   const::{lambda()#2}>, void ()>::destroy_deallocate() */

void __thiscall
std::__ndk1::__function::
__func<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::{lambda()#1}::operator()()const::{lambda()#2},std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::{lambda()#1}::operator()()const::{lambda()#2}>,void()>
::destroy_deallocate
          (__func<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::_lambda()_1_::operator()()const::_lambda()_2_,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::_lambda()_1_::operator()()const::_lambda()_2_>,void()>
           *this)

{
  __func<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::_lambda()_1_::operator()()const::_lambda()_2_,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::_lambda()_1_::operator()()const::_lambda()_2_>,void()>
  *p_Var1;
  code *pcVar2;
  
                    /* catch() { ... } // from try @ 00a6c808 with catch @ 00a6ca18 */
  p_Var1 = *(__func<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::_lambda()_1_::operator()()const::_lambda()_2_,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::_lambda()_1_::operator()()const::_lambda()_2_>,void()>
             **)(this + 0x30);
  if (this + 0x10 == p_Var1) {
                    /* catch() { ... } // from try @ 00a6c7dc with catch @ 00a6ca38 */
    pcVar2 = *(code **)(*(long *)p_Var1 + 0x20);
  }
  else {
                    /* catch() { ... } // from try @ 00a6c7f8 with catch @ 00a6ca28 */
    if (p_Var1 == (__func<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::_lambda()_1_::operator()()const::_lambda()_2_,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::_lambda()_1_::operator()()const::_lambda()_2_>,void()>
                   *)0x0) goto LAB_00a6ca44;
    pcVar2 = *(code **)(*(long *)p_Var1 + 0x28);
  }
  (*pcVar2)();
LAB_00a6ca44:
                    /* catch() { ... } // from try @ 00a6c7cc with catch @ 00a6ca48 */
  operator_delete(this);
  return;
}

