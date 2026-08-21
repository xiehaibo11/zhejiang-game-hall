
undefined8 FUN_015a0c24(undefined8 param_1,undefined8 param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong *puVar13;
  NewSpace *this;
  undefined8 uVar14;
  byte **local_c0;
  byte *local_b8;
  char *local_b0;
  undefined8 local_a8;
  RuntimeCallStats *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulong local_78;
  long *local_70;
  long *local_68;
  
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = (RuntimeCallStats *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  pIVar1 = param_3 + 0x8938;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_a0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_a0,(ulong)&local_a0 | 8,0x26b);
  }
  if (DAT_01d47538 == (byte *)0x0) {
    plVar10 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47538 = (byte *)(**(code **)(*plVar10 + 0x10))(plVar10,"disabled-by-default-v8.runtime");
  }
  pbVar8 = DAT_01d47538;
  local_c0 = (byte **)0x0;
  if ((*DAT_01d47538 & 5) != 0) {
    local_70 = (long *)0x0;
    local_68 = (long *)0x0;
    plVar10 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar11 = (**(code **)(*plVar10 + 0x18))
                       (plVar10,0x58,pbVar8,"V8.Runtime_Runtime_SimulateNewspaceFull",0,0,0,0,0,0,0,
                        &local_70,0);
    plVar10 = local_68;
    local_68 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    plVar10 = local_70;
    local_70 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    local_c0 = &local_b8;
    local_b0 = "V8.Runtime_Runtime_SimulateNewspaceFull";
    local_b8 = pbVar8;
    local_a8 = uVar11;
  }
  uVar11 = *(undefined8 *)(param_3 + 0x95a0);
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  this = *(NewSpace **)pIVar1;
  pIVar2 = param_3 + 0x8908;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pIVar2,0x10);
    if (bVar5) {
      *(long *)pIVar2 = *(long *)pIVar2 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    v8::internal::PauseAllocationObserversScope::PauseAllocationObserversScope
              ((PauseAllocationObserversScope *)&local_70,(Heap *)(param_3 + 0x8850));
    for (iVar7 = *(int *)(*(long *)(*(long *)pIVar1 + 0x160) + 0x28) -
                 *(int *)(*(long *)pIVar1 + 0x68); 0 < iVar7; iVar7 = iVar7 - iVar9) {
      iVar6 = iVar7 + -8;
      iVar9 = iVar7 + -5;
      if (-1 < iVar6) {
        iVar9 = iVar6;
      }
      if (iVar6 < 4) {
        v8::internal::Heap::CreateFillerObjectAt
                  ((Heap *)(param_3 + 0x8850),*(undefined8 *)(*(long *)pIVar1 + 0x68),iVar7,1,1);
        break;
      }
      iVar9 = iVar9 >> 2;
      if (0x7ffd < iVar9) {
        iVar9 = 0x7ffe;
      }
      puVar13 = (ulong *)v8::internal::Factory::NewFixedArray((Factory *)param_3,iVar9,0);
      local_78 = *puVar13;
      iVar9 = v8::internal::HeapObject::SizeFromMap
                        ((HeapObject *)&local_78,
                         local_78 & 0xffffffff00000000 | (ulong)*(uint *)(local_78 - 1));
    }
    v8::internal::PauseAllocationObserversScope::~PauseAllocationObserversScope
              ((PauseAllocationObserversScope *)&local_70);
    uVar12 = v8::internal::NewSpace::AddFreshPage(this);
    if ((uVar12 & 1) == 0) {
      uVar14 = *(undefined8 *)(param_3 + 0xa0);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pIVar2,0x10);
        if (bVar5) {
          *(long *)pIVar2 = *(long *)pIVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (param_3 != (Isolate *)0x0) {
        *(undefined8 *)(param_3 + 0x95a0) = uVar11;
        *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
        if (*(long *)(param_3 + 0x95a8) != lVar3) {
          *(long *)(param_3 + 0x95a8) = lVar3;
          v8::internal::HandleScope::DeleteExtensions(param_3);
        }
      }
      if ((local_c0 != (byte **)0x0) && (*local_b8 != 0)) {
        plVar10 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
        (**(code **)(*plVar10 + 0x28))(plVar10,local_b8,local_b0,local_a8);
      }
      if (local_a0 != (RuntimeCallStats *)0x0) {
        v8::internal::RuntimeCallStats::Leave(local_a0,(RuntimeCallTimer *)((ulong)&local_a0 | 8));
      }
      return uVar14;
    }
  } while( true );
}

