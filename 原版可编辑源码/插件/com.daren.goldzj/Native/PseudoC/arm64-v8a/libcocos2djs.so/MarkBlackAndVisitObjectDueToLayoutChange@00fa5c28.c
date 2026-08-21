
/* v8::internal::IncrementalMarking::MarkBlackAndVisitObjectDueToLayoutChange(v8::internal::HeapObject)
    */

void __thiscall
v8::internal::IncrementalMarking::MarkBlackAndVisitObjectDueToLayoutChange
          (IncrementalMarking *this,ulong param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  byte *pbVar5;
  long *plVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  byte **local_d0;
  byte *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  Scope aSStack_b0 [64];
  byte **local_70;
  byte *local_68;
  char *local_60;
  undefined8 local_58;
  long *local_50;
  long *local_48;
  
  if (DAT_01d3f108 == (byte *)0x0) {
    plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f108 = (byte *)(**(code **)(*plVar6 + 0x10))(plVar6,&DAT_019c38f7);
  }
  pbVar5 = DAT_01d3f108;
  local_70 = (byte **)0x0;
  if ((*DAT_01d3f108 & 5) != 0) {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar7 = (**(code **)(*plVar6 + 0x18))
                      (plVar6,0x58,pbVar5,"V8.GCIncrementalMarkingLayoutChange",0,0,0,0,0,0,0,
                       &local_50,0);
    plVar6 = local_48;
    local_48 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    plVar6 = local_50;
    local_50 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    local_70 = &local_68;
    local_60 = "V8.GCIncrementalMarkingLayoutChange";
    local_68 = pbVar5;
    local_58 = uVar7;
  }
  GCTracer::Scope::Scope(aSStack_b0,*(undefined8 *)(*(long *)this + 0x7f8),7);
  if (DAT_01d3f110 == (byte *)0x0) {
    plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f110 = (byte *)(**(code **)(*plVar6 + 0x10))(plVar6,"disabled-by-default-v8.gc");
  }
  pbVar5 = DAT_01d3f110;
  local_d0 = (byte **)0x0;
  if ((*DAT_01d3f110 & 5) != 0) {
    uVar7 = GCTracer::Scope::Name(7);
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar7 = (**(code **)(*plVar6 + 0x18))(plVar6,0x58,pbVar5,uVar7,0,0,0,0,0,0,0,&local_50,0);
    plVar6 = local_48;
    local_48 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    plVar6 = local_50;
    local_50 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    local_c0 = GCTracer::Scope::Name(7);
    local_d0 = &local_c8;
    local_c8 = pbVar5;
    local_b8 = uVar7;
  }
  uVar9 = param_2 - (param_2 & 0xfffffffffffc0000);
  puVar1 = (uint *)(*(long *)((param_2 & 0xfffffffffffc0000) + 0x10) + (uVar9 >> 7 & 0x1ffffff) * 4)
  ;
  while( true ) {
    uVar2 = *puVar1;
    uVar8 = (uint)(1L << (uVar9 >> 2 & 0x1f));
    if ((uVar8 & (uVar2 ^ 0xffffffff)) == 0) break;
    while (*puVar1 == uVar2) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar2 | uVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') goto LAB_00fa5e50;
    }
    ClearExclusiveLocal();
  }
LAB_00fa5e50:
  MarkCompactCollector::VisitObject(*(MarkCompactCollector **)(this + 8),param_2);
  if ((local_d0 != (byte **)0x0) && (*local_c8 != 0)) {
    plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar6 + 0x28))(plVar6,local_c8,local_c0,local_b8);
  }
  GCTracer::Scope::~Scope(aSStack_b0);
  if ((local_70 != (byte **)0x0) && (*local_68 != 0)) {
    plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar6 + 0x28))(plVar6,local_68,local_60,local_58);
  }
  return;
}

