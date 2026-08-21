
/* std::__ndk1::__function::__func<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::{lambda()#1}::operator()()
   const::{lambda()#2},
   std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::{lambda()#1}::operator()()
   const::{lambda()#2}>, void ()>::destroy() */

void __thiscall
std::__ndk1::__function::
__func<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::{lambda()#1}::operator()()const::{lambda()#2},std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::{lambda()#1}::operator()()const::{lambda()#2}>,void()>
::destroy(__func<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::_lambda()_1_::operator()()const::_lambda()_2_,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::_lambda()_1_::operator()()const::_lambda()_2_>,void()>
          *this)

{
  __func<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::_lambda()_1_::operator()()const::_lambda()_2_,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::_lambda()_1_::operator()()const::_lambda()_2_>,void()>
  *p_Var1;
  
                    /* try { // try from 00a6c9d4 to 00b6c9e3 has its CatchHandler @ 00a6caa0 */
  p_Var1 = *(__func<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::_lambda()_1_::operator()()const::_lambda()_2_,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::_lambda()_1_::operator()()const::_lambda()_2_>,void()>
             **)(this + 0x30);
                    /* try { // try from 00a6c9e4 to 00b6cb47 has its CatchHandler @ 00a6c674 */
  if (this + 0x10 == p_Var1) {
                    /* WARNING: Could not recover jumptable at 0x00a6ca00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)p_Var1 + 0x20))();
    return;
  }
  if (p_Var1 != (__func<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::_lambda()_1_::operator()()const::_lambda()_2_,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::_lambda()_1_::operator()()const::_lambda()_2_>,void()>
                 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00a6c9f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)p_Var1 + 0x28))();
    return;
  }
  return;
}

