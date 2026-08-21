
/* v8::internal::ItemParallelJob::Task::Task(v8::internal::Isolate*) */

void __thiscall v8::internal::ItemParallelJob::Task::Task(Task *this,Isolate *param_1)

{
  CancelableTask::CancelableTask((CancelableTask *)this,param_1);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x40) = 1;
  *(undefined ***)(this + 0x20) = &PTR__Task_01cc6eb0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__CancelableTask_01cc6e78;
  *(undefined8 *)(this + 0x48) = 0;
  return;
}

