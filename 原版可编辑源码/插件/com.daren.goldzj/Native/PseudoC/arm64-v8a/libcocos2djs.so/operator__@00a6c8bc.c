
/* std::__ndk1::__function::__func<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE()
   const::{lambda()#2},
   std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE()
   const::{lambda()#2}>, void ()>::__clone() const */

undefined8 * __thiscall
std::__ndk1::__function::
__func<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE()const::{lambda()#2},std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE()const::{lambda()#2}>,void()>
::operator()(__func<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::_lambda()_1_::TEMPNAMEPLACEHOLDERVALUE()const::_lambda()_2_,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::_lambda()_1_::TEMPNAMEPLACEHOLDERVALUE()const::_lambda()_2_>,void()>
             *this)

{
  undefined8 *puVar1;
  __func<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::_lambda()_1_::TEMPNAMEPLACEHOLDERVALUE()const::_lambda()_2_,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::_lambda()_1_::TEMPNAMEPLACEHOLDERVALUE()const::_lambda()_2_>,void()>
  *p_Var2;
  undefined8 uVar3;
  
  puVar1 = operator_new(0x50);
                    /* try { // try from 00a6c8e4 to 00b6c9d3 has its CatchHandler @ 00a6c674 */
  *puVar1 = &PTR____func_01c6ea70;
  p_Var2 = *(__func<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::_lambda()_1_::TEMPNAMEPLACEHOLDERVALUE()const::_lambda()_2_,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::_lambda()_1_::TEMPNAMEPLACEHOLDERVALUE()const::_lambda()_2_>,void()>
             **)(this + 0x30);
  if (p_Var2 == (__func<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::_lambda()_1_::TEMPNAMEPLACEHOLDERVALUE()const::_lambda()_2_,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::_lambda()_1_::TEMPNAMEPLACEHOLDERVALUE()const::_lambda()_2_>,void()>
                 *)0x0) {
    puVar1[6] = 0;
  }
  else if (this + 0x10 == p_Var2) {
    puVar1[6] = puVar1 + 2;
    (**(code **)(*(long *)p_Var2 + 0x18))();
  }
  else {
    uVar3 = (**(code **)(*(long *)p_Var2 + 0x10))();
    puVar1[6] = uVar3;
  }
  puVar1[8] = *(undefined8 *)(this + 0x40);
  return puVar1;
}

