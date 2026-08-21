
/* v8::internal::OptimizingCompileDispatcher::CompileTask::~CompileTask() */

void __thiscall
v8::internal::OptimizingCompileDispatcher::CompileTask::~CompileTask(CompileTask *this)

{
  Cancelable::~Cancelable((Cancelable *)this);
  operator_delete(this);
  return;
}

