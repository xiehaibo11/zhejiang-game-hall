
/* v8::internal::Heap::ScheduleIdleScavengeIfNeeded(int) */

void __thiscall v8::internal::Heap::ScheduleIdleScavengeIfNeeded(Heap *this,int param_1)

{
  ScavengeJob::ScheduleIdleTaskIfNeeded(*(ScavengeJob **)(this + 0x860),this,param_1);
  return;
}

