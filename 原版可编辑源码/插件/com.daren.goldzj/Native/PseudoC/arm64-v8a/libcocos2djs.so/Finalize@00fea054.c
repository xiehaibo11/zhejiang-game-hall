
/* v8::internal::Evacuator::Finalize() */

void __thiscall v8::internal::Evacuator::Finalize(Evacuator *this)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  
  plVar3 = *(long **)(this + 0x140);
  PagedSpace::MergeLocalSpace(*(PagedSpace **)(*plVar3 + 0xf0),(LocalSpace *)(plVar3 + 3));
  PagedSpace::MergeLocalSpace(*(PagedSpace **)(*plVar3 + 0xf8),(LocalSpace *)(plVar3 + 0x20));
  auVar4 = LocalAllocationBuffer::Close((LocalAllocationBuffer *)(plVar3 + 0x3d));
  if ((auVar4._8_8_ != 0) && (auVar4._8_8_ == *(long *)(plVar3[1] + 0x68))) {
    *(long *)(plVar3[1] + 0x68) = auVar4._0_8_;
  }
  GCTracer::AddCompactionEvent
            (*(GCTracer **)(*(long *)(this + 8) + 0x7f8),*(double *)(this + 0x148),
             *(ulong *)(this + 0x150));
  *(long *)(*(long *)(this + 8) + 0x7a0) =
       *(long *)(this + 0xf0) + *(long *)(this + 0x90) + *(long *)(*(long *)(this + 8) + 0x7a0);
  *(long *)(*(long *)(this + 8) + 0x7b8) =
       *(long *)(this + 200) + *(long *)(this + 0x98) + *(long *)(*(long *)(this + 8) + 0x7b8);
  lVar2 = *(long *)(this + 8);
  lVar1 = *(long *)(this + 0x98) + *(long *)(this + 0x90) + *(long *)(this + 0xf0) +
          *(long *)(this + 200);
  *(long *)(lVar2 + 0xb0) = lVar1;
  *(long *)(lVar2 + 0xa8) = *(long *)(lVar2 + 0xa8) + lVar1;
  Heap::MergeAllocationSitePretenuringFeedback(*(Heap **)(this + 8),(unordered_map *)(this + 0x10));
  return;
}

