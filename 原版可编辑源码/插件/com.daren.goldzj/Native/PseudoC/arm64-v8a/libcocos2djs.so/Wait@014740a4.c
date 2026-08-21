
/* v8::base::ConditionVariable::Wait(v8::base::Mutex*) */

int __thiscall v8::base::ConditionVariable::Wait(ConditionVariable *this,Mutex *param_1)

{
  int iVar1;
  
  iVar1 = pthread_cond_wait((pthread_cond_t *)this,(pthread_mutex_t *)param_1);
  return iVar1;
}

