
/* v8::internal::RememberedSetUpdatingItem<v8::internal::MajorNonAtomicMarkingState,
   (v8::internal::GarbageCollector)1>::Process() */

void __thiscall
v8::internal::
RememberedSetUpdatingItem<v8::internal::MajorNonAtomicMarkingState,(v8::internal::GarbageCollector)1>
::Process(RememberedSetUpdatingItem<v8::internal::MajorNonAtomicMarkingState,(v8::internal::GarbageCollector)1>
          *this)

{
  byte *pbVar1;
  long *plVar2;
  undefined8 uVar3;
  Mutex *this_00;
  MemoryChunk *this_01;
  byte **local_60;
  byte *local_58;
  char *local_50;
  undefined8 local_48;
  long *local_40;
  long *local_38;
  
  if (Process()::trace_event_unique_atomic3413 == (byte *)0x0) {
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    Process()::trace_event_unique_atomic3413 =
         (byte *)(**(code **)(*plVar2 + 0x10))(plVar2,"disabled-by-default-v8.gc");
  }
  pbVar1 = Process()::trace_event_unique_atomic3413;
  local_60 = (byte **)0x0;
  if ((*Process()::trace_event_unique_atomic3413 & 5) != 0) {
    local_40 = (long *)0x0;
    local_38 = (long *)0x0;
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar3 = (**(code **)(*plVar2 + 0x18))
                      (plVar2,0x58,pbVar1,"RememberedSetUpdatingItem::Process",0,0,0,0,0,0,0,
                       &local_40,0);
    plVar2 = local_38;
    local_38 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = local_40;
    local_40 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    local_60 = &local_58;
    local_50 = "RememberedSetUpdatingItem::Process";
    local_58 = pbVar1;
    local_48 = uVar3;
  }
  this_00 = *(Mutex **)(*(long *)(this + 0x20) + 0xa0);
  base::Mutex::Lock(this_00);
  this_01 = *(MemoryChunk **)(this + 0x20);
  if ((*(char *)(*(long *)(this_01 + 0x18) + 0x168) == '\0') || (((byte)this_01[8] & 1) == 0)) {
    UpdateUntypedPointers();
    UpdateTypedPointers(this);
  }
  else {
    MemoryChunk::SetReadAndWritable(this_01);
    UpdateUntypedPointers();
    UpdateTypedPointers(this);
    if (FLAG_jitless == '\0') {
      MemoryChunk::SetReadAndExecutable(this_01);
    }
    else {
      MemoryChunk::SetReadable(this_01);
    }
  }
  base::Mutex::Unlock(this_00);
  if ((local_60 != (byte **)0x0) && (*local_58 != 0)) {
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar2 + 0x28))(plVar2,local_58,local_50,local_48);
  }
  return;
}

