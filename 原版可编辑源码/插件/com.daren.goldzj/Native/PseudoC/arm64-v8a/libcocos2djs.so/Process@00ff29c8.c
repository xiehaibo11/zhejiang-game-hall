
/* v8::internal::PageMarkingItem::Process(v8::internal::YoungGenerationMarkingTask*) */

void __thiscall
v8::internal::PageMarkingItem::Process(PageMarkingItem *this,YoungGenerationMarkingTask *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  Mutex *this_00;
  MemoryChunk *this_01;
  long lVar8;
  int iVar9;
  byte **local_90;
  byte *local_88;
  char *local_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  
  if (Process(v8::internal::YoungGenerationMarkingTask*)::trace_event_unique_atomic4743 ==
      (byte *)0x0) {
    plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
    Process(v8::internal::YoungGenerationMarkingTask*)::trace_event_unique_atomic4743 =
         (byte *)(**(code **)(*plVar6 + 0x10))(plVar6,"disabled-by-default-v8.gc");
  }
  pbVar4 = Process(v8::internal::YoungGenerationMarkingTask*)::trace_event_unique_atomic4743;
  local_90 = (byte **)0x0;
  if ((*Process(v8::internal::YoungGenerationMarkingTask*)::trace_event_unique_atomic4743 & 5) != 0)
  {
    local_70 = (long *)0x0;
    local_68 = (long *)0x0;
    plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar7 = (**(code **)(*plVar6 + 0x18))
                      (plVar6,0x58,pbVar4,"PageMarkingItem::Process",0,0,0,0,0,0,0,&local_70,0);
    plVar6 = local_68;
    local_68 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    plVar6 = local_70;
    local_70 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    local_90 = &local_88;
    local_80 = "PageMarkingItem::Process";
    local_88 = pbVar4;
    local_78 = uVar7;
  }
  this_00 = *(Mutex **)(*(long *)(this + 0x10) + 0xa0);
  base::Mutex::Lock(this_00);
  MarkUntypedPointers(this,param_1);
  this_01 = *(MemoryChunk **)(this + 0x10);
  lVar8 = *(long *)(this_01 + 0x78);
  if (lVar8 != 0) {
    plVar6 = *(long **)(lVar8 + 8);
    if (plVar6 != (long *)0x0) {
      iVar9 = 0;
      do {
        puVar2 = (uint *)plVar6[2];
        for (puVar1 = (uint *)plVar6[1]; puVar1 != puVar2; puVar1 = puVar1 + 1) {
          uVar3 = *puVar1 >> 0x1d;
          if (uVar3 != 5) {
            iVar5 = UpdateTypedSlotHelper::operator()
                              (*(UpdateTypedSlotHelper **)(*(long *)(this + 0x10) + 0x18),uVar3,
                               *(long *)(lVar8 + 0x18) + ((ulong)*puVar1 & 0x1fffffff),this,param_1)
            ;
            if (iVar5 == 0) {
              iVar9 = iVar9 + 1;
            }
            else {
              *puVar1 = 0xa0000000;
            }
          }
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
      if (iVar9 != 0) goto LAB_00ff2b70;
    }
    MemoryChunk::ReleaseTypedSlotSet<(v8::internal::RememberedSetType)0>(this_01);
  }
LAB_00ff2b70:
  base::Mutex::Unlock(this_00);
  if ((local_90 != (byte **)0x0) && (*local_88 != 0)) {
    plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar6 + 0x28))(plVar6,local_88,local_80,local_78);
  }
  return;
}

