
/* v8::platform::DefaultForegroundTaskRunner::~DefaultForegroundTaskRunner() */

void __thiscall
v8::platform::DefaultForegroundTaskRunner::~DefaultForegroundTaskRunner
          (DefaultForegroundTaskRunner *this)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  pvVar5 = *(void **)(this + 0xd0);
  *(undefined ***)this = &PTR_PostTask_01cc4028;
  if (pvVar5 != (void *)0x0) {
    pvVar6 = pvVar5;
    pvVar4 = *(void **)(this + 0xd8);
    if (*(void **)(this + 0xd8) != pvVar5) {
      do {
        plVar3 = *(long **)((long)pvVar4 + -8);
        pvVar6 = (void *)((long)pvVar4 + -0x10);
        *(undefined8 *)((long)pvVar4 + -8) = 0;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 8))();
        }
        pvVar4 = pvVar6;
      } while (pvVar5 != pvVar6);
      pvVar6 = *(void **)(this + 0xd0);
    }
    *(void **)(this + 0xd8) = pvVar5;
    operator_delete(pvVar6);
  }
  std::__ndk1::
  __deque_base<std::__ndk1::unique_ptr<v8::IdleTask,std::__ndk1::default_delete<v8::IdleTask>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::IdleTask,std::__ndk1::default_delete<v8::IdleTask>>>>
  ::clear((__deque_base<std::__ndk1::unique_ptr<v8::IdleTask,std::__ndk1::default_delete<v8::IdleTask>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::IdleTask,std::__ndk1::default_delete<v8::IdleTask>>>>
           *)(this + 0xa0));
  puVar1 = *(undefined8 **)(this + 0xb0);
  puVar8 = *(undefined8 **)(this + 0xa8);
  if (*(undefined8 **)(this + 0xa8) != puVar1) {
    do {
      puVar7 = puVar8 + 1;
      operator_delete((void *)*puVar8);
      puVar8 = puVar7;
    } while (puVar1 != puVar7);
    lVar2 = *(long *)(this + 0xb0) - *(long *)(this + 0xa8);
    if (lVar2 != 0) {
      *(ulong *)(this + 0xb0) = *(long *)(this + 0xb0) + (lVar2 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  pvVar5 = *(void **)(this + 0xa0);
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5);
  }
  std::__ndk1::
  __deque_base<std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>>>
  ::clear((__deque_base<std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>>>
           *)(this + 0x68));
  puVar1 = *(undefined8 **)(this + 0x78);
  puVar8 = *(undefined8 **)(this + 0x70);
  if (*(undefined8 **)(this + 0x70) != puVar1) {
    do {
      puVar7 = puVar8 + 1;
      operator_delete((void *)*puVar8);
      puVar8 = puVar7;
    } while (puVar1 != puVar7);
    lVar2 = *(long *)(this + 0x78) - *(long *)(this + 0x70);
    if (lVar2 != 0) {
      *(ulong *)(this + 0x78) = *(long *)(this + 0x78) + (lVar2 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  pvVar5 = *(void **)(this + 0x68);
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5);
  }
  base::ConditionVariable::~ConditionVariable((ConditionVariable *)(this + 0x34));
  base::Mutex::~Mutex((Mutex *)(this + 0xc));
  return;
}

