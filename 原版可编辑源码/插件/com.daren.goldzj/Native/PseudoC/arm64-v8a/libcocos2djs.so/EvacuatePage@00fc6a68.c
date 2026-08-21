
/* v8::internal::Evacuator::EvacuatePage(v8::internal::MemoryChunk*) */

void __thiscall v8::internal::Evacuator::EvacuatePage(Evacuator *this,MemoryChunk *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  byte *pbVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  double dVar11;
  double dVar12;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar13;
  byte **local_80;
  byte *local_78;
  char *local_70;
  undefined8 local_68;
  long *local_60;
  long *local_58;
  
  uVar13 = (undefined4)((ulong)in_stack_ffffffffffffff58 >> 0x20);
  if (DAT_01d3f238 == (byte *)0x0) {
    plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f238 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.gc");
  }
  pbVar4 = DAT_01d3f238;
  local_80 = (byte **)0x0;
  if ((*DAT_01d3f238 & 5) != 0) {
    local_60 = (long *)0x0;
    local_58 = (long *)0x0;
    plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar13 = 0;
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar4,"Evacuator::EvacuatePage",0,0,0,0,0,0,0,&local_60,0);
    plVar5 = local_58;
    local_58 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = local_60;
    local_60 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    local_80 = &local_78;
    local_70 = "Evacuator::EvacuatePage";
    local_78 = pbVar4;
    local_68 = uVar6;
  }
  local_60 = (long *)0x0;
  plVar5 = (long *)(*(long *)(this + 8) + 0xb8);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plVar7 = (long *)V8::GetCurrentPlatform();
  dVar11 = (double)(**(code **)(*plVar7 + 0x78))();
  (**(code **)(*(long *)this + 0x20))(this,param_1,&local_60);
  plVar7 = (long *)V8::GetCurrentPlatform();
  dVar12 = (double)(**(code **)(*plVar7 + 0x78))();
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  *(double *)(this + 0x148) = (dVar12 * 1000.0 - dVar11 * 1000.0) + *(double *)(this + 0x148);
  *(long *)(this + 0x150) = *(long *)(this + 0x150) + (long)local_60;
  if (FLAG_trace_evacuation != '\0') {
    uVar9 = *(ulong *)(param_1 + 8);
    uVar10 = *(ulong *)(*(long *)(*(long *)(this + 8) + 0xe8) + 0x1f0);
    uVar8 = (uint)uVar9;
    uVar3 = uVar8 >> 10 & 1;
    if ((uVar9 & 0x200) != 0) {
      uVar3 = 1;
    }
    if (uVar10 < *(ulong *)(param_1 + 0x20)) {
      uVar10 = 0;
    }
    else {
      uVar10 = (ulong)(uVar10 < *(ulong *)(param_1 + 0x28));
    }
    PrintIsolate((void *)(*(long *)(this + 8) + -0x8850),
                 "evacuation[%p]: page=%p new_space=%d page_evacuation=%d executable=%d contains_age_mark=%d live_bytes=%ld time=%f success=%d\n"
                 ,this,param_1,(ulong)((uVar9 & 0x20) == 0 && (uVar9 & 0x18) != 0),(ulong)uVar3,
                 (ulong)(uVar8 & 1),uVar10,local_60,
                 CONCAT44(uVar13,uVar8 >> 0xf) & 0xffffffff00000001);
  }
  if ((local_80 != (byte **)0x0) && (*local_78 != 0)) {
    plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar5 + 0x28))(plVar5,local_78,local_70,local_68);
  }
  return;
}

