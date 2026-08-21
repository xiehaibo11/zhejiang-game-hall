
/* v8::internal::CancelableTaskManager::CancelableTaskManager() */

void __thiscall
v8::internal::CancelableTaskManager::CancelableTaskManager(CancelableTaskManager *this)

{
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x28) = 0x3f800000;
  base::ConditionVariable::ConditionVariable((ConditionVariable *)(this + 0x30));
  base::Mutex::Mutex((Mutex *)(this + 0x60));
  this[0x88] = (CancelableTaskManager)0x0;
  return;
}

