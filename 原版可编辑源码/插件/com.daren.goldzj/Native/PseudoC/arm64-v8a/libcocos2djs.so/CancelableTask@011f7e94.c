
/* v8::internal::CancelableTask::CancelableTask(v8::internal::Isolate*) */

void __thiscall v8::internal::CancelableTask::CancelableTask(CancelableTask *this,Isolate *param_1)

{
  Cancelable::Cancelable((Cancelable *)this,*(CancelableTaskManager **)(param_1 + 0xc700));
  *(undefined ***)this = &PTR__CancelableTask_01cbbd20;
  *(undefined ***)(this + 0x20) = &PTR__CancelableTask_01cbbd50;
  return;
}

