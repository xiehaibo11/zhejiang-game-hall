
/* cocos2d::experimental::ThreadPool::pushTask(std::__ndk1::function<void (int)> const&,
   cocos2d::experimental::ThreadPool::TaskType) */

void __thiscall
cocos2d::experimental::ThreadPool::pushTask(ThreadPool *this,long *param_1,undefined4 param_3)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined4 *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  timeval local_90;
  long alStack_80 [4];
  long *local_60;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (this[0x16c] == (ThreadPool)0x0) {
    std::__ndk1::mutex::lock((mutex *)(this + 0xc0));
    iVar2 = *(int *)(this + 0xbc);
    std::__ndk1::mutex::unlock((mutex *)(this + 0xc0));
    if (*(int *)(this + 0x140) < iVar2) {
      std::__ndk1::mutex::lock((mutex *)(this + 0x90));
      lVar12 = *(long *)(this + 0x88);
      std::__ndk1::mutex::unlock((mutex *)(this + 0x90));
      if ((lVar12 == 0) &&
         (gettimeofday(&local_90,(__timezone_ptr_t)0x0),
         *(float *)(this + 0x160) <
         (float)(local_90.tv_usec - *(long *)(this + 0x158)) / 1e+06 +
         (float)(local_90.tv_sec - *(long *)(this + 0x150)))) {
        tryShrinkPool(this);
        *(__suseconds_t *)(this + 0x158) = local_90.tv_usec;
        *(__time_t *)(this + 0x150) = local_90.tv_sec;
      }
    }
    else if (iVar2 == 0) {
      stretchPool(this,*(int *)(this + 0x168));
    }
  }
  pvVar4 = operator_new(0x30,(nothrow_t *)&std::nothrow);
  if (pvVar4 != (void *)0x0) {
    plVar5 = (long *)param_1[4];
    if (plVar5 == (long *)0x0) {
      local_60 = (long *)0x0;
    }
    else if (param_1 == plVar5) {
      local_60 = alStack_80;
      (**(code **)(*plVar5 + 0x18))(plVar5,alStack_80);
    }
    else {
      local_60 = (long *)(**(code **)(*plVar5 + 0x10))();
    }
    plVar5 = local_60;
    *(undefined8 *)((long)pvVar4 + 0x20) = 0;
    puVar6 = operator_new(0x40);
    *puVar6 = &PTR_FUN_016f4210;
    if (plVar5 == (long *)0x0) {
      puVar6[6] = 0;
    }
    else if (alStack_80 == plVar5) {
      puVar6[6] = puVar6 + 2;
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
    else {
      uVar7 = (**(code **)(*plVar5 + 0x10))(plVar5);
      puVar6[6] = uVar7;
    }
    *(undefined8 **)((long)pvVar4 + 0x20) = puVar6;
    if (alStack_80 == local_60) {
      pcVar8 = *(code **)(*local_60 + 0x20);
    }
    else {
      if (local_60 == (long *)0x0) goto LAB_00e91018;
      pcVar8 = *(code **)(*local_60 + 0x28);
    }
    (*pcVar8)();
  }
LAB_00e91018:
  std::__ndk1::mutex::lock((mutex *)(this + 0x90));
  lVar12 = *(long *)(this + 0x68);
  lVar10 = *(long *)(this + 0x70);
  uVar1 = 0;
  if (lVar10 - lVar12 != 0) {
    uVar1 = (lVar10 - lVar12) * 0x20 - 1;
  }
  uVar11 = *(long *)(this + 0x88) + *(long *)(this + 0x80);
  if (uVar1 == uVar11) {
    std::__ndk1::
    deque<cocos2d::experimental::ThreadPool::Task,std::__ndk1::allocator<cocos2d::experimental::ThreadPool::Task>>
    ::__add_back_capacity
              ((deque<cocos2d::experimental::ThreadPool::Task,std::__ndk1::allocator<cocos2d::experimental::ThreadPool::Task>>
                *)(this + 0x60));
    lVar12 = *(long *)(this + 0x68);
    lVar10 = *(long *)(this + 0x70);
    uVar11 = *(long *)(this + 0x80) + *(long *)(this + 0x88);
  }
  if (lVar10 == lVar12) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    puVar9 = (undefined4 *)
             (*(long *)(lVar12 + (uVar11 >> 5 & 0x7fffffffffffff8)) + (uVar11 & 0xff) * 0x10);
  }
  *puVar9 = param_3;
  *(void **)(puVar9 + 2) = pvVar4;
  *(long *)(this + 0x88) = *(long *)(this + 0x88) + 1;
  std::__ndk1::mutex::unlock((mutex *)(this + 0x90));
  std::__ndk1::mutex::lock((mutex *)(this + 0xe8));
  std::__ndk1::condition_variable::notify_one((condition_variable *)(this + 0x110));
  std::__ndk1::mutex::unlock((mutex *)(this + 0xe8));
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

