
/* v8::base::ConditionVariable::WaitFor(v8::base::Mutex*, v8::base::TimeDelta const&) */

bool __thiscall
v8::base::ConditionVariable::WaitFor(ConditionVariable *this,Mutex *param_1,TimeDelta *param_2)

{
  int iVar1;
  long lVar2;
  timespec local_40;
  undefined8 local_18;
  
  lVar2 = Time::NowFromSystemTime();
  local_18 = bits::SignedSaturatedAdd64(*(long *)param_2,lVar2);
  local_40 = (timespec)Time::ToTimespec((Time *)&local_18);
  iVar1 = pthread_cond_timedwait((pthread_cond_t *)this,(pthread_mutex_t *)param_1,&local_40);
  return iVar1 != 0x6e;
}

