
/* v8::internal::Heap::PerformIdleTimeAction(v8::internal::GCIdleTimeAction,
   v8::internal::GCIdleTimeHeapState, double) */

bool v8::internal::Heap::PerformIdleTimeAction(Heap *param_1,char param_2)

{
  byte *pbVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  byte **local_80;
  byte *local_78;
  char *local_70;
  undefined8 local_68;
  long *local_60;
  long *local_58;
  
  if (param_2 == '\x02') {
    lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 0x9520);
    TimedHistogram::Start
              ((TimedHistogram *)(lVar4 + 0x8c8),(ElapsedTimer *)(lVar4 + 0x8f8),
               *(Isolate **)(*(long *)(lVar4 + 0x8e8) + 0x10));
    if (DAT_01d3f0e8 == (byte *)0x0) {
      plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
      DAT_01d3f0e8 = (byte *)(**(code **)(*plVar2 + 0x10))(plVar2,&DAT_019c38f7);
    }
    pbVar1 = DAT_01d3f0e8;
    local_80 = (byte **)0x0;
    if ((*DAT_01d3f0e8 & 5) != 0) {
      local_60 = (long *)0x0;
      local_58 = (long *)0x0;
      plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
      uVar3 = (**(code **)(*plVar2 + 0x18))
                        (plVar2,0x58,pbVar1,"V8.GCContext",0,0,0,0,0,0,0,&local_60,0);
      plVar2 = local_58;
      local_58 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      plVar2 = local_60;
      local_60 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      local_80 = &local_78;
      local_70 = "V8.GCContext";
      local_78 = pbVar1;
      local_68 = uVar3;
    }
    *(undefined4 *)(param_1 + 0xad4) = 0;
    CollectGarbage(param_1,2,3,0);
    *(undefined4 *)(param_1 + 0xad4) = 0;
    if ((local_80 != (byte **)0x0) && (*local_78 != 0)) {
      plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar2 + 0x28))(plVar2,local_78,local_70,local_68);
    }
    TimedHistogram::Stop
              ((TimedHistogram *)(lVar4 + 0x8c8),(ElapsedTimer *)(lVar4 + 0x8f8),
               *(Isolate **)(*(long *)(lVar4 + 0x8e8) + 0x10));
  }
  else {
    if (param_2 == '\x01') {
      IncrementalMarking::AdvanceWithDeadline(*(IncrementalMarking **)(param_1 + 0x828),1,1);
      FinalizeIncrementalMarkingIfComplete(param_1,9);
      return *(int *)(*(long *)(param_1 + 0x828) + 0x58) == 0;
    }
    if (param_2 == '\0') {
      return true;
    }
  }
  return false;
}

