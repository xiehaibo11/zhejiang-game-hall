
/* v8::internal::ItemParallelJob::ItemParallelJob(v8::internal::CancelableTaskManager*,
   v8::base::Semaphore*) */

void __thiscall
v8::internal::ItemParallelJob::ItemParallelJob
          (ItemParallelJob *this,CancelableTaskManager *param_1,Semaphore *param_2)

{
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(CancelableTaskManager **)(this + 0x30) = param_1;
  *(Semaphore **)(this + 0x38) = param_2;
  return;
}

