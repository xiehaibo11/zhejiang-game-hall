
/* std::__ndk1::__function::__func<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE()
   const::{lambda()#2},
   std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE()
   const::{lambda()#2}>, void ()>::__clone(std::__ndk1::__function::__base<void ()>*) const */

void __thiscall
std::__ndk1::__function::
__func<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE()const::{lambda()#2},std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE()const::{lambda()#2}>,void()>
::operator()(__func<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::_lambda()_1_::TEMPNAMEPLACEHOLDERVALUE()const::_lambda()_2_,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::_lambda()_1_::TEMPNAMEPLACEHOLDERVALUE()const::_lambda()_2_>,void()>
             *this,__base *param_1)

{
  __func<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::_lambda()_1_::TEMPNAMEPLACEHOLDERVALUE()const::_lambda()_2_,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::_lambda()_1_::TEMPNAMEPLACEHOLDERVALUE()const::_lambda()_2_>,void()>
  *p_Var1;
  undefined8 uVar2;
  
  *(undefined ***)param_1 = &PTR____func_01c6ea70;
  p_Var1 = *(__func<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::_lambda()_1_::TEMPNAMEPLACEHOLDERVALUE()const::_lambda()_2_,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::_lambda()_1_::TEMPNAMEPLACEHOLDERVALUE()const::_lambda()_2_>,void()>
             **)(this + 0x30);
  if (p_Var1 == (__func<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::_lambda()_1_::TEMPNAMEPLACEHOLDERVALUE()const::_lambda()_2_,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::_lambda()_1_::TEMPNAMEPLACEHOLDERVALUE()const::_lambda()_2_>,void()>
                 *)0x0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else if (this + 0x10 == p_Var1) {
    *(__base **)(param_1 + 0x30) = param_1 + 0x10;
    (**(code **)(**(long **)(this + 0x30) + 0x18))();
  }
  else {
    uVar2 = (**(code **)(*(long *)p_Var1 + 0x10))();
    *(undefined8 *)(param_1 + 0x30) = uVar2;
  }
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(this + 0x40);
  return;
}

