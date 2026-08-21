
/* v8::internal::Sweeper::~Sweeper() */

void __thiscall v8::internal::Sweeper::~Sweeper(Sweeper *this)

{
  void *pvVar1;
  
  base::Semaphore::~Semaphore((Semaphore *)(this + 0x130));
  pvVar1 = *(void **)(this + 0x110);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x118) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0xe0);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0xe8) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 200);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0xd0) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0xb0);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0xb8) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x98);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0xa0) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x80);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x88) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x68);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x70) = pvVar1;
    operator_delete(pvVar1);
  }
  base::Mutex::~Mutex((Mutex *)(this + 0x40));
  base::Semaphore::~Semaphore((Semaphore *)(this + 0x30));
  return;
}

