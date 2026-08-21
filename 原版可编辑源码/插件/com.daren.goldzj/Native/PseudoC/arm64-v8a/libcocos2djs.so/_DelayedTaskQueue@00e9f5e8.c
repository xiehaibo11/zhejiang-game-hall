
/* v8::platform::DelayedTaskQueue::~DelayedTaskQueue() */

void __thiscall v8::platform::DelayedTaskQueue::~DelayedTaskQueue(DelayedTaskQueue *this)

{
  Mutex *this_00;
  undefined8 *puVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  this_00 = (Mutex *)(this + 0x30);
  base::Mutex::Lock(this_00);
  base::Mutex::Unlock(this_00);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<double,std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>>,std::__ndk1::__map_value_compare<double,std::__ndk1::__value_type<double,std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>>,std::__ndk1::less<double>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<double,std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>>>>
  ::destroy((__tree<std::__ndk1::__value_type<double,std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>>,std::__ndk1::__map_value_compare<double,std::__ndk1::__value_type<double,std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>>,std::__ndk1::less<double>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<double,std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>>>>
             *)(this + 0x88),*(__tree_node **)(this + 0x90));
  std::__ndk1::
  __deque_base<std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>>>
  ::clear((__deque_base<std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>>>
           *)(this + 0x58));
  puVar1 = *(undefined8 **)(this + 0x68);
  puVar4 = *(undefined8 **)(this + 0x60);
  if (*(undefined8 **)(this + 0x60) != puVar1) {
    do {
      puVar5 = puVar4 + 1;
      operator_delete((void *)*puVar4);
      puVar4 = puVar5;
    } while (puVar1 != puVar5);
    lVar2 = *(long *)(this + 0x68) - *(long *)(this + 0x60);
    if (lVar2 != 0) {
      *(ulong *)(this + 0x68) = *(long *)(this + 0x68) + (lVar2 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  pvVar3 = *(void **)(this + 0x58);
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  base::Mutex::~Mutex(this_00);
  base::ConditionVariable::~ConditionVariable((ConditionVariable *)this);
  return;
}

