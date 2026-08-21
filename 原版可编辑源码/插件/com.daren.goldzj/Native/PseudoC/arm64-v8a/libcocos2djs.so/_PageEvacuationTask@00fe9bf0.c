
/* v8::internal::PageEvacuationTask::~PageEvacuationTask() */

void __thiscall v8::internal::PageEvacuationTask::~PageEvacuationTask(PageEvacuationTask *this)

{
  Cancelable::~Cancelable((Cancelable *)this);
  operator_delete(this);
  return;
}

