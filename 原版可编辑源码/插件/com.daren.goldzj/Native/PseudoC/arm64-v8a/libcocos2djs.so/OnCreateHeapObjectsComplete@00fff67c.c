
/* v8::internal::ReadOnlyHeap::OnCreateHeapObjectsComplete(v8::internal::Isolate*) */

void v8::internal::ReadOnlyHeap::OnCreateHeapObjectsComplete(Isolate *param_1)

{
  PagedSpace::ShrinkImmortalImmovablePages(*(PagedSpace **)(param_1 + 8));
  ReadOnlySpace::Seal(*(ReadOnlySpace **)(param_1 + 8),1);
  *param_1 = (Isolate)0x1;
  return;
}

