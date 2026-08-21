
/* v8::internal::IncrementalMarking::AdvanceOnAllocation() */

void __thiscall v8::internal::IncrementalMarking::AdvanceOnAllocation(IncrementalMarking *this)

{
  byte *pbVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  byte **local_e0;
  byte *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  Scope aSStack_c0 [64];
  byte **local_80;
  byte *local_78;
  char *local_70;
  undefined8 local_68;
  long *local_60;
  long *local_58;
  
  if (((*(int *)(*(long *)this + 0x178) == 0 && FLAG_incremental_marking != '\0') &&
      (*(int *)(this + 0x58) - 1U < 2)) && (*(long *)(*(long *)this + 0xb8) == 0)) {
    lVar4 = *(long *)(*(long *)this + 0xcd0);
    TimedHistogram::Start
              ((TimedHistogram *)(lVar4 + 0x938),(ElapsedTimer *)(lVar4 + 0x968),
               *(Isolate **)(*(long *)(lVar4 + 0x958) + 0x10));
    if (DAT_01d3f150 == (byte *)0x0) {
      plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
      DAT_01d3f150 = (byte *)(**(code **)(*plVar2 + 0x10))(plVar2,&DAT_019c38f7);
    }
    pbVar1 = DAT_01d3f150;
    local_80 = (byte **)0x0;
    if ((*DAT_01d3f150 & 5) != 0) {
      local_60 = (long *)0x0;
      local_58 = (long *)0x0;
      plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
      uVar3 = (**(code **)(*plVar2 + 0x18))
                        (plVar2,0x58,pbVar1,"V8.GCIncrementalMarking",0,0,0,0,0,0,0,&local_60,0);
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
      local_70 = "V8.GCIncrementalMarking";
      local_78 = pbVar1;
      local_68 = uVar3;
    }
    GCTracer::Scope::Scope(aSStack_c0,*(undefined8 *)(*(long *)this + 0x7f8),0);
    if (DAT_01d3f158 == (byte *)0x0) {
      plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
      DAT_01d3f158 = (byte *)(**(code **)(*plVar2 + 0x10))(plVar2,"disabled-by-default-v8.gc");
    }
    pbVar1 = DAT_01d3f158;
    local_e0 = (byte **)0x0;
    if ((*DAT_01d3f158 & 5) != 0) {
      uVar3 = GCTracer::Scope::Name(0);
      local_60 = (long *)0x0;
      local_58 = (long *)0x0;
      plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
      uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,0x58,pbVar1,uVar3,0,0,0,0,0,0,0,&local_60,0);
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
      local_d0 = GCTracer::Scope::Name(0);
      local_e0 = &local_d8;
      local_d8 = pbVar1;
      local_c8 = uVar3;
    }
    ScheduleBytesToMarkBasedOnAllocation(this);
    V8Step((IncrementalMarking *)0x4014000000000000,this,0,0);
    if ((local_e0 != (byte **)0x0) && (*local_d8 != 0)) {
      plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar2 + 0x28))(plVar2,local_d8,local_d0,local_c8);
    }
    GCTracer::Scope::~Scope(aSStack_c0);
    if ((local_80 != (byte **)0x0) && (*local_78 != 0)) {
      plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar2 + 0x28))(plVar2,local_78,local_70,local_68);
    }
    TimedHistogram::Stop
              ((TimedHistogram *)(lVar4 + 0x938),(ElapsedTimer *)(lVar4 + 0x968),
               *(Isolate **)(*(long *)(lVar4 + 0x958) + 0x10));
  }
  return;
}

