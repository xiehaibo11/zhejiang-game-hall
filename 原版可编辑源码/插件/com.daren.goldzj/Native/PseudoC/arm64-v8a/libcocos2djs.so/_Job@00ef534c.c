
/* v8::internal::CompilerDispatcher::Job::~Job() */

void __thiscall v8::internal::CompilerDispatcher::Job::~Job(Job *this)

{
  BackgroundCompileTask *this_00;
  
  this_00 = *(BackgroundCompileTask **)this;
  *(undefined8 *)this = 0;
  if (this_00 != (BackgroundCompileTask *)0x0) {
    BackgroundCompileTask::~BackgroundCompileTask(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}

