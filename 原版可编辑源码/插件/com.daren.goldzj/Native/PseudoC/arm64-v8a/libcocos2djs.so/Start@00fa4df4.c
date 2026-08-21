
/* v8::internal::IncrementalMarkingJob::Start(v8::internal::Heap*) */

void __thiscall
v8::internal::IncrementalMarkingJob::Start(IncrementalMarkingJob *this,Heap *param_1)

{
  ScheduleTask(this,param_1,0);
  return;
}

