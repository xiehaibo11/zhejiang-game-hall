
/* v8::internal::IncrementalMarkingJob::Task::~Task() */

void __thiscall v8::internal::IncrementalMarkingJob::Task::~Task(Task *this)

{
  Cancelable::~Cancelable((Cancelable *)this);
  operator_delete(this);
  return;
}

