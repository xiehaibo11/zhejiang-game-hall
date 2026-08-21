
/* v8::internal::PointersUpdatingTask::~PointersUpdatingTask() */

void __thiscall
v8::internal::PointersUpdatingTask::~PointersUpdatingTask(PointersUpdatingTask *this)

{
  Cancelable::~Cancelable((Cancelable *)this);
  operator_delete(this);
  return;
}

