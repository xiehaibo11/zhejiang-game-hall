
/* v8::internal::MarkCompactCollector::Prepare() */

void __thiscall v8::internal::MarkCompactCollector::Prepare(MarkCompactCollector *this)

{
  long lVar1;
  byte *pbVar2;
  long *plVar3;
  undefined8 uVar4;
  PagedSpace *this_00;
  long lVar5;
  undefined8 uVar6;
  byte **local_a8;
  byte *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long *local_88;
  long *local_80;
  undefined8 local_78;
  undefined4 local_70;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this[0x4c] = (MarkCompactCollector)(1 < *(int *)(*(long *)(*(long *)(this + 8) + 0x828) + 0x58));
  EnsureSweepingCompleted(this);
  if (*(int *)(*(IncrementalMarking **)(*(long *)(this + 8) + 0x828) + 0x58) == 1) {
    IncrementalMarking::Stop(*(IncrementalMarking **)(*(long *)(this + 8) + 0x828));
  }
  if (this[0x4c] == (MarkCompactCollector)0x0) {
    GCTracer::Scope::Scope((Scope *)&local_78,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x2f);
    if (DAT_01d3f168 == (byte *)0x0) {
      plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
      DAT_01d3f168 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.gc");
    }
    pbVar2 = DAT_01d3f168;
    local_a8 = (byte **)0x0;
    if ((*DAT_01d3f168 & 5) != 0) {
      uVar4 = GCTracer::Scope::Name(0x2f);
      local_88 = (long *)0x0;
      local_80 = (long *)0x0;
      plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
      uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,0x58,pbVar2,uVar4,0,0,0,0,0,0,0,&local_88,0);
      plVar3 = local_80;
      local_80 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      plVar3 = local_88;
      local_88 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      local_98 = GCTracer::Scope::Name(0x2f);
      local_a8 = &local_a0;
      local_a0 = pbVar2;
      local_90 = uVar4;
    }
    uVar6 = *(undefined8 *)(*(Heap **)(this + 8) + 0x870);
    uVar4 = Heap::flags_for_embedder_tracer(*(Heap **)(this + 8));
    LocalEmbedderHeapTracer::TracePrologue(uVar6,uVar4);
    if ((local_a8 != (byte **)0x0) && (*local_a0 != 0)) {
      plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar3 + 0x28))(plVar3,local_a0,local_98,local_90);
    }
    GCTracer::Scope::~Scope((Scope *)&local_78);
    if (FLAG_never_compact == '\0') {
      StartCompaction(this);
    }
    StartMarking(this);
  }
  local_78 = *(undefined8 *)(this + 8);
  local_70 = 2;
  while (this_00 = (PagedSpace *)PagedSpaceIterator::Next((PagedSpaceIterator *)&local_78),
        this_00 != (PagedSpace *)0x0) {
    PagedSpace::PrepareForMarkCompact(this_00);
  }
  lVar5 = *(long *)(this + 8);
  *(long *)(lVar5 + -0x8830) = *(long *)(lVar5 + -0x8830) - *(long *)(lVar5 + 0x28);
  *(long *)(lVar5 + 0x28) = 0;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

