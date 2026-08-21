
/* cocos2d::AsyncTaskPool::ThreadTasks::enqueue(std::__ndk1::function<void (void*)>, void*,
   std::__ndk1::function<void ()>) */

void __thiscall
cocos2d::AsyncTaskPool::ThreadTasks::enqueue
          (ThreadTasks *this,long *param_2,undefined8 param_3,function *param_4)

{
  mutex *this_00;
  long lVar1;
  long *plVar2;
  code *pcVar3;
  AsyncTaskCallBack aAStack_80 [32];
  long *local_60;
  undefined8 local_50;
  long local_38;
  
  local_60 = (long *)aAStack_80;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)param_2[4];
  if (plVar2 == (long *)0x0) {
    local_60 = (long *)0x0;
  }
  else if (param_2 == plVar2) {
    (**(code **)(*plVar2 + 0x18))(plVar2,aAStack_80);
  }
  else {
    param_2[4] = 0;
    local_60 = plVar2;
  }
  this_00 = (mutex *)(this + 0x68);
  local_50 = param_3;
  std::__ndk1::mutex::lock(this_00);
  if (this[0xc0] == (ThreadTasks)0x0) {
    std::__ndk1::
    deque<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>::
    push_back((deque<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>
               *)(this + 8),param_4);
    std::__ndk1::
    deque<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack>>
    ::push_back((deque<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack>>
                 *)(this + 0x38),aAStack_80);
    std::__ndk1::mutex::unlock(this_00);
    std::__ndk1::condition_variable::notify_one((condition_variable *)(this + 0x90));
  }
  else {
    __android_log_print(6,"cocos2d-x assert","%s function:%s line:%d",
                        "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/3d/../base/CCAsyncTaskPool.h"
                        ,"enqueue",0xb8);
    std::__ndk1::mutex::unlock(this_00);
  }
  if (aAStack_80 == (AsyncTaskCallBack *)local_60) {
    pcVar3 = *(code **)(*local_60 + 0x20);
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_008823f0;
    pcVar3 = *(code **)(*local_60 + 0x28);
  }
  (*pcVar3)();
LAB_008823f0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

