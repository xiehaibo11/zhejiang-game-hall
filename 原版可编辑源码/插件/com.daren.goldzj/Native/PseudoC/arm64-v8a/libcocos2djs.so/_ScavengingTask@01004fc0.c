
/* v8::internal::ScavengingTask::~ScavengingTask() */

void __thiscall v8::internal::ScavengingTask::~ScavengingTask(ScavengingTask *this)

{
  Cancelable::~Cancelable((Cancelable *)this);
  operator_delete(this);
  return;
}

