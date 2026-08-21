
/* v8::internal::Heap::CreateObjectStats() */

void __thiscall v8::internal::Heap::CreateObjectStats(Heap *this)

{
  ObjectStats *pOVar1;
  void *pvVar2;
  
  if (TracingFlags::gc_stats != 0) {
    if (*(long *)(this + 0x850) == 0) {
      pOVar1 = operator_new(0x53ea8);
      *(Heap **)pOVar1 = this;
      ObjectStats::ClearObjectStats(pOVar1,false);
      pvVar2 = *(void **)(this + 0x850);
      *(ObjectStats **)(this + 0x850) = pOVar1;
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
      }
    }
    if (*(long *)(this + 0x858) == 0) {
      pOVar1 = operator_new(0x53ea8);
      *(Heap **)pOVar1 = this;
      ObjectStats::ClearObjectStats(pOVar1,false);
      pvVar2 = *(void **)(this + 0x858);
      *(ObjectStats **)(this + 0x858) = pOVar1;
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
        return;
      }
    }
  }
  return;
}

