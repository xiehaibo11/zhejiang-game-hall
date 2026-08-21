
/* v8::internal::IncrementalMarking::AdvanceWithDeadline(double,
   v8::internal::IncrementalMarking::CompletionAction, v8::internal::StepOrigin) */

undefined4 __thiscall
v8::internal::IncrementalMarking::AdvanceWithDeadline
          (double param_1,IncrementalMarking *this,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 uVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  byte **local_110;
  byte *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  Scope aSStack_f0 [64];
  byte **local_b0;
  byte *local_a8;
  char *local_a0;
  undefined8 local_98;
  long *local_90;
  long *local_88;
  
  lVar9 = *(long *)(*(long *)this + 0xcd0);
  TimedHistogram::Start
            ((TimedHistogram *)(lVar9 + 0x938),(ElapsedTimer *)(lVar9 + 0x968),
             *(Isolate **)(*(long *)(lVar9 + 0x958) + 0x10));
  if (DAT_01d3f140 == (byte *)0x0) {
    plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f140 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,&DAT_019c38f7);
  }
  pbVar2 = DAT_01d3f140;
  local_b0 = (byte **)0x0;
  if ((*DAT_01d3f140 & 5) != 0) {
    local_90 = (long *)0x0;
    local_88 = (long *)0x0;
    plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar2,"V8.GCIncrementalMarking",0,0,0,0,0,0,0,&local_90,0);
    plVar5 = local_88;
    local_88 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = local_90;
    local_90 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    local_b0 = &local_a8;
    local_a0 = "V8.GCIncrementalMarking";
    local_a8 = pbVar2;
    local_98 = uVar6;
  }
  GCTracer::Scope::Scope(aSStack_f0,*(undefined8 *)(*(long *)this + 0x7f8),0);
  if (DAT_01d3f148 == (byte *)0x0) {
    plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f148 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.gc");
  }
  pbVar2 = DAT_01d3f148;
  local_110 = (byte **)0x0;
  if ((*DAT_01d3f148 & 5) != 0) {
    uVar6 = GCTracer::Scope::Name(0);
    local_90 = (long *)0x0;
    local_88 = (long *)0x0;
    plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))(plVar5,0x58,pbVar2,uVar6,0,0,0,0,0,0,0,&local_90,0);
    plVar5 = local_88;
    local_88 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = local_90;
    local_90 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    local_100 = GCTracer::Scope::Name(0);
    local_110 = &local_108;
    local_108 = pbVar2;
    local_f8 = uVar6;
  }
  dVar10 = (double)Heap::MonotonicallyIncreasingTimeInMs();
  dVar11 = *(double *)(this + 0x48);
  if (dVar11 + 10.0 <= dVar10) {
    *(double *)(this + 0x48) = dVar10;
    dVar10 = (double)NEON_fminnm(dVar10 - dVar11,0x407f400000000000);
    dVar11 = (double)NEON_ucvtf(*(undefined8 *)(this + 0x28));
    uVar7 = (ulong)((dVar10 / 500.0) * dVar11);
    lVar1 = *(ulong *)(this + 0x40) + uVar7;
    if (CARRY8(*(ulong *)(this + 0x40),uVar7)) {
      lVar1 = -1;
    }
    *(long *)(this + 0x40) = lVar1;
    if (FLAG_trace_incremental_marking != '\0') {
      Isolate::PrintWithTimestamp
                ((char *)(*(long *)this + -0x8850),
                 "[IncrementalMarking] Scheduled %zuKB to mark based on time delta %.1fms\n",
                 uVar7 >> 10);
    }
  }
  uVar7 = *(ulong *)(this + 0x38);
  if ((((*(ulong *)(this + 0x28) >> 2) * 3 < uVar7) && (*(ulong *)(this + 0x40) < uVar7)) &&
     (*(ulong *)(this + 0x40) = uVar7, FLAG_trace_incremental_marking != '\0')) {
    Isolate::PrintWithTimestamp
              ((char *)(*(long *)this + -0x8850),"[IncrementalMarking] Fast-forwarded schedule\n");
  }
  do {
    iVar3 = V8Step((IncrementalMarking *)0x3fe0000000000000,this,param_3,param_4);
    dVar10 = (double)Heap::MonotonicallyIncreasingTimeInMs();
    dVar10 = param_1 - dVar10;
    if (1.0 < dVar10) {
      dVar10 = 1.0;
    }
    iVar4 = EmbedderStep(this,dVar10);
    dVar10 = (double)Heap::MonotonicallyIncreasingTimeInMs();
  } while ((iVar3 == 1 || iVar4 == 1) && (1.0 <= param_1 - dVar10));
  uVar8 = 2;
  if (iVar4 != 2 && iVar3 != 2) {
    uVar8 = 0;
  }
  if (iVar3 == 1 || iVar4 == 1) {
    uVar8 = 1;
  }
  if ((local_110 != (byte **)0x0) && (*local_108 != 0)) {
    plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar5 + 0x28))(plVar5,local_108,local_100,local_f8);
  }
  GCTracer::Scope::~Scope(aSStack_f0);
  if ((local_b0 != (byte **)0x0) && (*local_a8 != 0)) {
    plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar5 + 0x28))(plVar5,local_a8,local_a0,local_98);
  }
  TimedHistogram::Stop
            ((TimedHistogram *)(lVar9 + 0x938),(ElapsedTimer *)(lVar9 + 0x968),
             *(Isolate **)(*(long *)(lVar9 + 0x958) + 0x10));
  return uVar8;
}

