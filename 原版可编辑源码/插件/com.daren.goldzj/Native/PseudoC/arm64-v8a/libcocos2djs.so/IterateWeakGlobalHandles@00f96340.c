
/* v8::internal::Heap::IterateWeakGlobalHandles(v8::internal::RootVisitor*) */

void __thiscall v8::internal::Heap::IterateWeakGlobalHandles(Heap *this,RootVisitor *param_1)

{
  GlobalHandles::IterateWeakRoots(*(GlobalHandles **)(*(long *)(this + 0x30) + 0x95e0),param_1);
  return;
}

