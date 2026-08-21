
/* v8::internal::Isolate::SetRAILMode(v8::RAILMode) */

void __thiscall v8::internal::Isolate::SetRAILMode(Isolate *this,uint param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(this + 0xb650);
  if ((param_2 == 3) && (iVar1 != 3)) {
    base::Mutex::Lock((Mutex *)(this + 0xb688));
    uVar3 = Heap::MonotonicallyIncreasingTimeInMs();
    *(undefined8 *)(this + 0xb6b0) = uVar3;
    base::Mutex::Unlock((Mutex *)(this + 0xb688));
    *(undefined4 *)(this + 0xb650) = 3;
  }
  else {
    *(uint *)(this + 0xb650) = param_2;
    if ((param_2 != 3) && (iVar1 == 3)) {
      IncrementalMarkingJob::ScheduleTask
                ((IncrementalMarkingJob *)(*(long *)(this + 0x9078) + 0x61),this + 0x8850,0);
    }
  }
  if (FLAG_trace_rail != '\0') {
    if (param_2 < 4) {
      puVar2 = (&PTR_s_RESPONSE_018bc216_5_01ca5f40)[(int)param_2];
    }
    else {
      puVar2 = &DAT_0189703a;
    }
    PrintIsolate(this,"RAIL mode: %s\n",puVar2);
    return;
  }
  return;
}

