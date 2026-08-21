
/* v8::internal::IdleScavengeObserver::Step(int, unsigned long, unsigned long) */

void v8::internal::IdleScavengeObserver::Step(int param_1,ulong param_2,ulong param_3)

{
  ScavengeJob::ScheduleIdleTaskIfNeeded
            (*(ScavengeJob **)(*(Heap **)((ulong)(uint)param_1 + 0x18) + 0x860),
             *(Heap **)((ulong)(uint)param_1 + 0x18),(int)param_2);
  return;
}

