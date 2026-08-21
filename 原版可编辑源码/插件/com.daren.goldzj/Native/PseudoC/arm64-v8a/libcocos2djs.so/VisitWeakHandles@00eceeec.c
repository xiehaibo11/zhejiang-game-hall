
/* v8::Isolate::VisitWeakHandles(v8::PersistentHandleVisitor*) */

void __thiscall v8::Isolate::VisitWeakHandles(Isolate *this,PersistentHandleVisitor *param_1)

{
  internal::GlobalHandles::IterateYoungWeakRootsWithClassIds
            (*(GlobalHandles **)(this + 0x95e0),param_1);
  return;
}

