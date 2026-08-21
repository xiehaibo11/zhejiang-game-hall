
/* v8::internal::IncrementalMarking::MarkRoots() */

void __thiscall v8::internal::IncrementalMarking::MarkRoots(IncrementalMarking *this)

{
  undefined **local_20;
  Heap *pHStack_18;
  
  pHStack_18 = *(Heap **)this;
  local_20 = &PTR__RootVisitor_01ca8030;
  Heap::IterateStrongRoots(pHStack_18,&local_20,5);
  return;
}

