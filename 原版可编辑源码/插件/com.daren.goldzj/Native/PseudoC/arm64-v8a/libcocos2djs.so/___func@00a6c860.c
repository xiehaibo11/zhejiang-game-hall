
/* std::__ndk1::__function::__func<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::{lambda()#1}::operator()()
   const::{lambda()#2},
   std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::{lambda()#1}::operator()()
   const::{lambda()#2}>, void ()>::~__func() */

void __thiscall
std::__ndk1::__function::
__func<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::{lambda()#1}::operator()()const::{lambda()#2},std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::{lambda()#1}::operator()()const::{lambda()#2}>,void()>
::~__func(__func<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::_lambda()_1_::operator()()const::_lambda()_2_,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::_lambda()_1_::operator()()const::_lambda()_2_>,void()>
          *this)

{
  __func<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::_lambda()_1_::operator()()const::_lambda()_2_,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::_lambda()_1_::operator()()const::_lambda()_2_>,void()>
  *p_Var1;
  code *pcVar2;
  
  p_Var1 = *(__func<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::_lambda()_1_::operator()()const::_lambda()_2_,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::_lambda()_1_::operator()()const::_lambda()_2_>,void()>
             **)(this + 0x30);
  *(undefined ***)this = &PTR____func_01c6ea70;
  if (this + 0x10 == p_Var1) {
    pcVar2 = *(code **)(*(long *)p_Var1 + 0x20);
  }
  else {
    if (p_Var1 == (__func<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::_lambda()_1_::operator()()const::_lambda()_2_,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::_lambda()_1_::operator()()const::_lambda()_2_>,void()>
                   *)0x0) goto LAB_00a6c8ac;
    pcVar2 = *(code **)(*(long *)p_Var1 + 0x28);
  }
  (*pcVar2)();
LAB_00a6c8ac:
  operator_delete(this);
  return;
}

