
/* v8::internal::ArrayBufferTrackerUpdatingItem::Process() */

void __thiscall
v8::internal::ArrayBufferTrackerUpdatingItem::Process(ArrayBufferTrackerUpdatingItem *this)

{
  byte *pbVar1;
  long *plVar2;
  undefined8 uVar3;
  byte **local_78;
  byte *local_70;
  char *local_68;
  undefined8 local_60;
  ulong local_58;
  undefined1 local_4c [4];
  char *local_48;
  long *local_40;
  long *local_38;
  
  if (Process()::trace_event_unique_atomic3612 == (byte *)0x0) {
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    Process()::trace_event_unique_atomic3612 =
         (byte *)(**(code **)(*plVar2 + 0x10))(plVar2,"disabled-by-default-v8.gc");
  }
  pbVar1 = Process()::trace_event_unique_atomic3612;
  local_78 = (byte **)0x0;
  if ((*Process()::trace_event_unique_atomic3612 & 5) != 0) {
    local_48 = "EvacuationState";
    local_40 = (long *)0x0;
    local_58 = (ulong)*(uint *)(this + 0x18);
    local_4c[0] = 2;
    local_38 = (long *)0x0;
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar3 = (**(code **)(*plVar2 + 0x18))
                      (plVar2,0x58,pbVar1,"ArrayBufferTrackerUpdatingItem::Process",0,0,0,1,
                       &local_48,local_4c,&local_58,&local_40,0);
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
    local_78 = &local_70;
    local_68 = "ArrayBufferTrackerUpdatingItem::Process";
    local_70 = pbVar1;
    local_60 = uVar3;
  }
  if (*(uint *)(this + 0x18) < 2) {
    ArrayBufferTracker::ProcessBuffers(*(undefined8 *)(this + 0x10));
  }
  if ((local_78 != (byte **)0x0) && (*local_70 != 0)) {
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar2 + 0x28))(plVar2,local_70,local_68,local_60);
  }
  return;
}

