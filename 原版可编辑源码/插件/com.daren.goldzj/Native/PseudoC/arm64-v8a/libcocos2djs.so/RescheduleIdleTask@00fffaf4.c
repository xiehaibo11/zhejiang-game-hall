
/* v8::internal::ScavengeJob::RescheduleIdleTask(v8::internal::Heap*) */

void __thiscall v8::internal::ScavengeJob::RescheduleIdleTask(ScavengeJob *this,Heap *param_1)

{
  if (this[1] == (ScavengeJob)0x0) {
    ScheduleIdleTask(this,param_1);
    this[1] = (ScavengeJob)0x1;
  }
  return;
}

