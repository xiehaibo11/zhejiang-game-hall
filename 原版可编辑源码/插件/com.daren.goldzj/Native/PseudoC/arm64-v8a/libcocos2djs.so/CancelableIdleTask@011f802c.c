
/* v8::internal::CancelableIdleTask::CancelableIdleTask(v8::internal::CancelableTaskManager*) */

void __thiscall
v8::internal::CancelableIdleTask::CancelableIdleTask
          (CancelableIdleTask *this,CancelableTaskManager *param_1)

{
  Cancelable::Cancelable((Cancelable *)this,param_1);
  *(undefined ***)this = &PTR__CancelableIdleTask_01cbbd78;
  *(undefined ***)(this + 0x20) = &PTR__CancelableIdleTask_01cbbda8;
  return;
}

