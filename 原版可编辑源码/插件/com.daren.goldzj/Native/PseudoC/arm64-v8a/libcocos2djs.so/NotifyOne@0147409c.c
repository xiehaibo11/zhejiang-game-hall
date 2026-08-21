
/* v8::base::ConditionVariable::NotifyOne() */

int __thiscall v8::base::ConditionVariable::NotifyOne(ConditionVariable *this)

{
  int iVar1;
  
  iVar1 = pthread_cond_signal((pthread_cond_t *)this);
  return iVar1;
}

