
/* v8::base::ConditionVariable::NotifyAll() */

int __thiscall v8::base::ConditionVariable::NotifyAll(ConditionVariable *this)

{
  int iVar1;
  
  iVar1 = pthread_cond_broadcast((pthread_cond_t *)this);
  return iVar1;
}

