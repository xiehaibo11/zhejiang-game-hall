
/* v8::internal::ThreadManager::~ThreadManager() */

void __thiscall v8::internal::ThreadManager::~ThreadManager(ThreadManager *this)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar1 = *(void **)(this + 0x38);
  pvVar2 = *(void **)((long)pvVar1 + 0x10);
  if (*(void **)((long)pvVar1 + 0x10) == pvVar1) {
LAB_00f63e68:
    if (*(void **)((long)pvVar1 + 8) != (void *)0x0) {
      operator_delete__(*(void **)((long)pvVar1 + 8));
    }
    operator_delete(pvVar1);
  }
  else {
    do {
      pvVar3 = *(void **)((long)pvVar2 + 0x10);
      if (pvVar2 != (void *)0x0) {
        if (*(void **)((long)pvVar2 + 8) != (void *)0x0) {
          operator_delete__(*(void **)((long)pvVar2 + 8));
        }
        operator_delete(pvVar2);
      }
      pvVar2 = pvVar3;
    } while (pvVar3 != pvVar1);
    if (pvVar1 != (void *)0x0) goto LAB_00f63e68;
  }
  pvVar1 = *(void **)(this + 0x40);
  pvVar2 = *(void **)((long)pvVar1 + 0x10);
  if (*(void **)((long)pvVar1 + 0x10) != pvVar1) {
    do {
      pvVar3 = *(void **)((long)pvVar2 + 0x10);
      if (pvVar2 != (void *)0x0) {
        if (*(void **)((long)pvVar2 + 8) != (void *)0x0) {
          operator_delete__(*(void **)((long)pvVar2 + 8));
        }
        operator_delete(pvVar2);
      }
      pvVar2 = pvVar3;
    } while (pvVar3 != pvVar1);
    if (pvVar1 == (void *)0x0) goto LAB_00f63ed4;
  }
  if (*(void **)((long)pvVar1 + 8) != (void *)0x0) {
    operator_delete__(*(void **)((long)pvVar1 + 8));
  }
  operator_delete(pvVar1);
LAB_00f63ed4:
  base::Mutex::~Mutex((Mutex *)this);
  return;
}

