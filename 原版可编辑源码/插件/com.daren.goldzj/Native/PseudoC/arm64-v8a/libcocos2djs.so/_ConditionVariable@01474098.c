
/* v8::base::ConditionVariable::~ConditionVariable() */

int __thiscall v8::base::ConditionVariable::~ConditionVariable(ConditionVariable *this)

{
  int iVar1;
  
  iVar1 = pthread_cond_destroy((pthread_cond_t *)this);
  return iVar1;
}

