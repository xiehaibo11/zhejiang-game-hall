
/* v8::internal::ConcurrentMarking::Task::~Task() */

void __thiscall v8::internal::ConcurrentMarking::Task::~Task(Task *this)

{
  Cancelable::~Cancelable((Cancelable *)this);
  operator_delete(this);
  return;
}

