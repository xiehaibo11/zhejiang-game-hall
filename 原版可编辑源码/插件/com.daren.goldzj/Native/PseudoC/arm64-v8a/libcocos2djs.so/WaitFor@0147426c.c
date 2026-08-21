
/* v8::base::Semaphore::WaitFor(v8::base::TimeDelta const&) */

undefined8 __thiscall v8::base::Semaphore::WaitFor(Semaphore *this,TimeDelta *param_1)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  timespec local_38;
  undefined8 local_28;
  
  lVar2 = Time::NowFromSystemTime();
  local_28 = bits::SignedSaturatedAdd64(*(long *)param_1,lVar2);
  local_38 = (timespec)Time::ToTimespec((Time *)&local_28);
  do {
    while( true ) {
      iVar1 = sem_timedwait((sem_t *)this,&local_38);
      if (iVar1 == -1) break;
      if (iVar1 == 0) {
        return 1;
      }
    }
    piVar3 = (int *)__errno();
  } while (*piVar3 != 0x6e);
  return 0;
}

