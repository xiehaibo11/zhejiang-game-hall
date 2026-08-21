
/* v8::internal::CancelableIdleTask::CancelableIdleTask(v8::internal::Isolate*) */

void __thiscall
v8::internal::CancelableIdleTask::CancelableIdleTask(CancelableIdleTask *this,Isolate *param_1)

{
  Cancelable::Cancelable((Cancelable *)this,*(CancelableTaskManager **)(param_1 + 0xc700));
  *(undefined ***)this = &PTR__CancelableIdleTask_01cbbd78;
  *(undefined ***)(this + 0x20) = &PTR__CancelableIdleTask_01cbbda8;
  return;
}

