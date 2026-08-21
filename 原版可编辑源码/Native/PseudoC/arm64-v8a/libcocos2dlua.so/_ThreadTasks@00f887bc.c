
/* cocos2d::AsyncTaskPool::ThreadTasks::~ThreadTasks() */

void __thiscall cocos2d::AsyncTaskPool::ThreadTasks::~ThreadTasks(ThreadTasks *this)

{
  mutex *this_00;
  undefined8 *puVar1;
  long *plVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  this_00 = (mutex *)(this + 0x68);
  std::__ndk1::mutex::lock(this_00);
  this[0xc0] = (ThreadTasks)0x1;
  if (*(long *)(this + 0x30) != 0) {
    uVar4 = *(ulong *)(this + 0x28);
    do {
      plVar5 = (long *)(*(long *)(*(long *)(this + 0x10) + (uVar4 / 0x55) * 8) +
                       (uVar4 % 0x55) * 0x30);
      plVar2 = (long *)plVar5[4];
      if (plVar5 == plVar2) {
        pcVar6 = *(code **)(*plVar2 + 0x20);
LAB_00f8884c:
        (*pcVar6)();
      }
      else if (plVar2 != (long *)0x0) {
        pcVar6 = *(code **)(*plVar2 + 0x28);
        goto LAB_00f8884c;
      }
      lVar7 = *(long *)(this + 0x30) + -1;
      uVar4 = *(long *)(this + 0x28) + 1;
      *(ulong *)(this + 0x28) = uVar4;
      *(long *)(this + 0x30) = lVar7;
      if (0xa9 < uVar4) {
        operator_delete((void *)**(undefined8 **)(this + 0x10));
        lVar7 = *(long *)(this + 0x30);
        uVar4 = *(long *)(this + 0x28) - 0x55;
        *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
        *(ulong *)(this + 0x28) = uVar4;
      }
    } while (lVar7 != 0);
  }
  if (*(long *)(this + 0x60) != 0) {
    uVar4 = *(ulong *)(this + 0x58);
    do {
      plVar2 = (long *)(*(long *)(*(long *)(this + 0x40) + (uVar4 >> 3 & 0x1ffffffffffffff8)) +
                       (uVar4 & 0x3f) * 0x40);
      plVar5 = (long *)plVar2[4];
      if (plVar2 == plVar5) {
        pcVar6 = *(code **)(*plVar5 + 0x20);
LAB_00f888e0:
        (*pcVar6)();
      }
      else if (plVar5 != (long *)0x0) {
        pcVar6 = *(code **)(*plVar5 + 0x28);
        goto LAB_00f888e0;
      }
      lVar7 = *(long *)(this + 0x60) + -1;
      uVar4 = *(long *)(this + 0x58) + 1;
      *(ulong *)(this + 0x58) = uVar4;
      *(long *)(this + 0x60) = lVar7;
      if (0x7f < uVar4) {
        operator_delete((void *)**(undefined8 **)(this + 0x40));
        lVar7 = *(long *)(this + 0x60);
        uVar4 = *(long *)(this + 0x58) - 0x40;
        *(long *)(this + 0x40) = *(long *)(this + 0x40) + 8;
        *(ulong *)(this + 0x58) = uVar4;
      }
    } while (lVar7 != 0);
  }
  std::__ndk1::mutex::unlock(this_00);
  std::__ndk1::condition_variable::notify_all((condition_variable *)(this + 0x90));
  std::__ndk1::thread::join((thread *)this);
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)(this + 0x90));
  std::__ndk1::mutex::~mutex(this_00);
  std::__ndk1::
  __deque_base<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack>>
  ::clear((__deque_base<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack>>
           *)(this + 0x38));
  puVar1 = *(undefined8 **)(this + 0x48);
  puVar8 = *(undefined8 **)(this + 0x40);
  if (*(undefined8 **)(this + 0x40) != puVar1) {
    do {
      puVar9 = puVar8 + 1;
      operator_delete((void *)*puVar8);
      puVar8 = puVar9;
    } while (puVar1 != puVar9);
    lVar7 = *(long *)(this + 0x48) - *(long *)(this + 0x40);
    if (lVar7 != 0) {
      *(ulong *)(this + 0x48) = *(long *)(this + 0x48) + (lVar7 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  pvVar3 = *(void **)(this + 0x38);
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  std::__ndk1::
  __deque_base<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>
  ::clear((__deque_base<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>
           *)(this + 8));
  puVar1 = *(undefined8 **)(this + 0x18);
  puVar8 = *(undefined8 **)(this + 0x10);
  if (*(undefined8 **)(this + 0x10) != puVar1) {
    do {
      puVar9 = puVar8 + 1;
      operator_delete((void *)*puVar8);
      puVar8 = puVar9;
    } while (puVar1 != puVar9);
    lVar7 = *(long *)(this + 0x18) - *(long *)(this + 0x10);
    if (lVar7 != 0) {
      *(ulong *)(this + 0x18) = *(long *)(this + 0x18) + (lVar7 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  pvVar3 = *(void **)(this + 8);
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  std::__ndk1::thread::~thread((thread *)this);
  return;
}

