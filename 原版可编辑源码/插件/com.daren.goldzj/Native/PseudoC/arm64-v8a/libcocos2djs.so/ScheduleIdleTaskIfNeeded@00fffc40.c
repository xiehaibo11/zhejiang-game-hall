
/* v8::internal::ScavengeJob::ScheduleIdleTaskIfNeeded(v8::internal::Heap*, int) */

void __thiscall
v8::internal::ScavengeJob::ScheduleIdleTaskIfNeeded(ScavengeJob *this,Heap *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 4);
  *(int *)(this + 4) = iVar1 + param_2;
  if (0xfffff < iVar1 + param_2) {
    ScheduleIdleTask(this,param_1);
    *(undefined4 *)(this + 4) = 0;
    this[1] = (ScavengeJob)0x0;
  }
  return;
}

