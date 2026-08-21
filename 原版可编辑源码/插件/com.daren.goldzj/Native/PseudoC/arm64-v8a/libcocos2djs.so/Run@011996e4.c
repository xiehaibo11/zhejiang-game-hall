
/* v8::internal::SamplingEventsProcessor::Run() */

void __thiscall v8::internal::SamplingEventsProcessor::Run(SamplingEventsProcessor *this)

{
  Mutex *this_00;
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long local_48;
  
  this_00 = (Mutex *)(this + 0x7c);
  base::Mutex::Lock(this_00);
  if (*(int *)(this + 0x48) == 0) {
LAB_011997cc:
    do {
      do {
        iVar1 = (**(code **)(*(long *)this + 0x28))(this);
      } while (iVar1 == 0);
      uVar4 = ProfilerEventsProcessor::ProcessCodeEvent((ProfilerEventsProcessor *)this);
    } while ((uVar4 & 1) != 0);
    base::Mutex::Unlock(this_00);
    return;
  }
LAB_01199738:
  lVar2 = base::TimeTicks::HighResolutionNow();
  lVar2 = base::bits::SignedSaturatedAdd64(*(long *)(this + 0x80188),lVar2);
  do {
    iVar1 = (**(code **)(*(long *)this + 0x28))(this);
    if (iVar1 == 1) {
      ProfilerEventsProcessor::ProcessCodeEvent((ProfilerEventsProcessor *)this);
      lVar3 = base::TimeTicks::HighResolutionNow();
    }
    else {
      lVar3 = base::TimeTicks::HighResolutionNow();
      if (iVar1 == 2) break;
    }
  } while (lVar3 < lVar2);
  do {
    if (lVar2 <= lVar3) break;
    local_48 = lVar2 - lVar3;
    uVar4 = base::ConditionVariable::WaitFor
                      ((ConditionVariable *)(this + 0x4c),this_00,(TimeDelta *)&local_48);
    if (((uVar4 & 1) == 0) || (*(int *)(this + 0x48) == 0)) break;
    lVar3 = base::TimeTicks::HighResolutionNow();
  } while( true );
  sampler::Sampler::DoSample(*(Sampler **)(this + 0x80180));
  if (*(int *)(this + 0x48) == 0) goto LAB_011997cc;
  goto LAB_01199738;
}

