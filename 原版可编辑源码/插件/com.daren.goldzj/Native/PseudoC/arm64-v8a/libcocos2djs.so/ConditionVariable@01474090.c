
/* v8::base::ConditionVariable::ConditionVariable() */

int __thiscall v8::base::ConditionVariable::ConditionVariable(ConditionVariable *this)

{
  int iVar1;
  
  iVar1 = pthread_cond_init((pthread_cond_t *)this,(pthread_condattr_t *)0x0);
  return iVar1;
}

