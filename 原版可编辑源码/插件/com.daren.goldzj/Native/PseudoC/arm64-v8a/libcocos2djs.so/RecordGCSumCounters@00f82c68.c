
/* v8::internal::GCTracer::RecordGCSumCounters(double) */

void __thiscall v8::internal::GCTracer::RecordGCSumCounters(GCTracer *this,double param_1)

{
  byte *pbVar1;
  long *plVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double local_b0;
  double dStack_a8;
  char *local_a0;
  char *pcStack_98;
  long *local_90;
  long *local_88;
  undefined2 local_24 [2];
  
  base::Mutex::Lock((Mutex *)(this + 0x1130));
  dVar3 = *(double *)(this + 0x498);
  dVar5 = *(double *)(this + 0x4b0);
  dVar6 = *(double *)(this + 0x4c8);
  dVar9 = *(double *)(this + 0x9c0);
  dVar4 = *(double *)(this + 0x128);
  dVar7 = *(double *)(this + 0x468);
  dVar12 = *(double *)(this + 0x1170);
  dVar10 = *(double *)(this + 0x1178);
  dVar8 = *(double *)(this + 0x1180);
  dVar11 = *(double *)(this + 0x1188);
  Histogram::AddSample((int)*(undefined8 *)(*(long *)this + 0xcd0) + 0x300);
  if (DAT_01d3f038 == (byte *)0x0) {
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f038 = (byte *)(**(code **)(*plVar2 + 0x10))(plVar2,"disabled-by-default-v8.gc");
  }
  pbVar1 = DAT_01d3f038;
  if ((*DAT_01d3f038 & 5) != 0) {
    dStack_a8 = dVar12 + dVar10 + dVar8 + dVar11;
    local_a0 = "duration";
    pcStack_98 = "background_duration";
    local_24[0] = 0x404;
    local_90 = (long *)0x0;
    local_88 = (long *)0x0;
    local_b0 = dVar3 + dVar5 + dVar6 + dVar9 + dVar7 + param_1;
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar2 + 0x18))
              (plVar2,0x49,pbVar1,"V8.GCMarkCompactorSummary",0,0,0,2,&local_a0,local_24,&local_b0,
               &local_90,0x10);
    plVar2 = local_88;
    local_88 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = local_90;
    local_90 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  if (DAT_01d3f040 == (byte *)0x0) {
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f040 = (byte *)(**(code **)(*plVar2 + 0x10))(plVar2,"disabled-by-default-v8.gc");
  }
  pbVar1 = DAT_01d3f040;
  if ((*DAT_01d3f040 & 5) != 0) {
    local_b0 = dVar3 + dVar5 + dVar9 + dVar7 + dVar4;
    local_a0 = "duration";
    pcStack_98 = "background_duration";
    local_24[0] = 0x404;
    local_90 = (long *)0x0;
    local_88 = (long *)0x0;
    dStack_a8 = dVar8;
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar2 + 0x18))
              (plVar2,0x49,pbVar1,"V8.GCMarkCompactorMarkingSummary",0,0,0,2,&local_a0,local_24,
               &local_b0,&local_90,0x10);
    plVar2 = local_88;
    local_88 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = local_90;
    local_90 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  base::Mutex::Unlock((Mutex *)(this + 0x1130));
  return;
}

