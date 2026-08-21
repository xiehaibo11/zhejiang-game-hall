
/* v8::platform::DelayedTaskQueue::GetNext() */

void v8::platform::DelayedTaskQueue::GetNext(void)

{
  Mutex *this;
  ulong uVar1;
  ConditionVariable *in_x0;
  long *plVar2;
  undefined8 *in_x8;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  double dVar7;
  long local_58;
  long local_48;
  
  this = (Mutex *)(in_x0 + 0x30);
  base::Mutex::Lock(this);
  while( true ) {
    dVar7 = (double)(**(code **)(in_x0 + 0xa8))();
    PopTaskFromDelayedQueue(dVar7);
    while (local_48 != 0) {
      lVar3 = *(long *)(in_x0 + 0x60);
      uVar1 = 0;
      if (*(long *)(in_x0 + 0x68) - lVar3 != 0) {
        uVar1 = (*(long *)(in_x0 + 0x68) - lVar3) * 0x40 - 1;
      }
      uVar4 = *(long *)(in_x0 + 0x80) + *(long *)(in_x0 + 0x78);
      if (uVar1 == uVar4) {
        std::__ndk1::
        deque<std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>>>
        ::__add_back_capacity
                  ((deque<std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>>>
                    *)(in_x0 + 0x58));
        lVar3 = *(long *)(in_x0 + 0x60);
        uVar4 = *(long *)(in_x0 + 0x78) + *(long *)(in_x0 + 0x80);
      }
      *(long *)(*(long *)(lVar3 + (uVar4 >> 6 & 0x3fffffffffffff8)) + (uVar4 & 0x1ff) * 8) =
           local_48;
      *(long *)(in_x0 + 0x80) = *(long *)(in_x0 + 0x80) + 1;
      PopTaskFromDelayedQueue(dVar7);
      local_48 = local_58;
    }
    if (*(long *)(in_x0 + 0x80) != 0) break;
    if (in_x0[0xa0] != (ConditionVariable)0x0) {
      base::ConditionVariable::NotifyAll(in_x0);
      *in_x8 = 0;
LAB_00e9fa14:
      base::Mutex::Unlock(this);
      return;
    }
    if (*(long *)(in_x0 + 0x98) == 0) {
      base::ConditionVariable::Wait(in_x0,this);
    }
    else {
      local_58 = (long)((*(double *)(*(long *)(in_x0 + 0x88) + 0x20) - dVar7) * 1000000.0);
      base::ConditionVariable::WaitFor(in_x0,this,(TimeDelta *)&local_58);
    }
  }
  lVar5 = *(long *)(*(long *)(in_x0 + 0x60) + (*(ulong *)(in_x0 + 0x78) >> 6 & 0x3fffffffffffff8));
  lVar3 = (*(ulong *)(in_x0 + 0x78) & 0x1ff) * 8;
  uVar6 = *(undefined8 *)(lVar5 + lVar3);
  *(undefined8 *)(lVar5 + lVar3) = 0;
  *in_x8 = uVar6;
  lVar5 = *(long *)(*(long *)(in_x0 + 0x60) + (*(ulong *)(in_x0 + 0x78) >> 6 & 0x3fffffffffffff8));
  lVar3 = (*(ulong *)(in_x0 + 0x78) & 0x1ff) * 8;
  plVar2 = *(long **)(lVar5 + lVar3);
  *(undefined8 *)(lVar5 + lVar3) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  lVar3 = *(long *)(in_x0 + 0x78);
  *(long *)(in_x0 + 0x80) = *(long *)(in_x0 + 0x80) + -1;
  *(ulong *)(in_x0 + 0x78) = lVar3 + 1U;
  if (0x3ff < lVar3 + 1U) {
    operator_delete((void *)**(undefined8 **)(in_x0 + 0x60));
    *(long *)(in_x0 + 0x60) = *(long *)(in_x0 + 0x60) + 8;
    *(long *)(in_x0 + 0x78) = *(long *)(in_x0 + 0x78) + -0x200;
  }
  goto LAB_00e9fa14;
}

