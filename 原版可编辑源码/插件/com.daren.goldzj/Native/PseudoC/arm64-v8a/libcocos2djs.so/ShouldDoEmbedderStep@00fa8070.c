
/* v8::internal::IncrementalMarking::ShouldDoEmbedderStep() */

bool __thiscall v8::internal::IncrementalMarking::ShouldDoEmbedderStep(IncrementalMarking *this)

{
  bool bVar1;
  
  bVar1 = false;
  if ((*(int *)(this + 0x58) == 2) && (FLAG_incremental_marking_wrappers != '\0')) {
    bVar1 = *(long *)(*(long *)(*(long *)this + 0x870) + 8) != 0;
  }
  return bVar1;
}

