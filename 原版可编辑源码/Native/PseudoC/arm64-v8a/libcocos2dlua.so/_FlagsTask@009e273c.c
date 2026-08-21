
/* universe::core::FlagsTask::~FlagsTask() */

void __thiscall universe::core::FlagsTask::~FlagsTask(FlagsTask *this)

{
  Provided::~Provided((Provided *)this);
  operator_delete(this);
  return;
}

