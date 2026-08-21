
/* std::__ndk1::deque<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack,
   std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack>
   >::push_back(cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack&&) */

void __thiscall
std::__ndk1::
deque<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack>>
::push_back(deque<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack>>
            *this,AsyncTaskCallBack *param_1)

{
  ulong uVar1;
  long lVar2;
  AsyncTaskCallBack *pAVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = *(long *)(this + 8);
  lVar4 = *(long *)(this + 0x10);
  lVar2 = *(long *)(this + 0x28);
  uVar1 = 0;
  if (lVar4 - lVar6 != 0) {
    uVar1 = (lVar4 - lVar6) * 8 - 1;
  }
  uVar5 = lVar2 + *(long *)(this + 0x20);
  if (uVar1 == uVar5) {
    __add_back_capacity(this);
    lVar2 = *(long *)(this + 0x28);
    lVar6 = *(long *)(this + 8);
    lVar4 = *(long *)(this + 0x10);
    uVar5 = *(long *)(this + 0x20) + lVar2;
  }
  if (lVar4 == lVar6) {
    lVar6 = 0;
    pAVar3 = *(AsyncTaskCallBack **)(param_1 + 0x20);
  }
  else {
    lVar6 = *(long *)(lVar6 + (uVar5 >> 3 & 0x1ffffffffffffff8)) + (uVar5 & 0x3f) * 0x40;
    pAVar3 = *(AsyncTaskCallBack **)(param_1 + 0x20);
  }
  if (pAVar3 == (AsyncTaskCallBack *)0x0) {
    *(undefined8 *)(lVar6 + 0x20) = 0;
  }
  else if (param_1 == pAVar3) {
    *(long *)(lVar6 + 0x20) = lVar6;
    (**(code **)(**(long **)(param_1 + 0x20) + 0x18))(*(long **)(param_1 + 0x20),lVar6);
    lVar2 = *(long *)(this + 0x28);
  }
  else {
    *(AsyncTaskCallBack **)(lVar6 + 0x20) = pAVar3;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(long *)(this + 0x28) = lVar2 + 1;
  return;
}

