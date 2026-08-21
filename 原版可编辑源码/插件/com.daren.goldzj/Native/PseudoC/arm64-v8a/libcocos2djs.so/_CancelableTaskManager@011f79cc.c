
/* v8::internal::CancelableTaskManager::~CancelableTaskManager() */

void __thiscall
v8::internal::CancelableTaskManager::~CancelableTaskManager(CancelableTaskManager *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  if (this[0x88] != (CancelableTaskManager)0x1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","canceled_");
  }
  base::Mutex::~Mutex((Mutex *)(this + 0x60));
  base::ConditionVariable::~ConditionVariable((ConditionVariable *)(this + 0x30));
  puVar1 = *(void **)(this + 0x18);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)(this + 8);
  *(undefined8 *)(this + 8) = 0;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2);
  return;
}

