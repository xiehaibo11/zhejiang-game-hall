
/* v8::Isolate::VisitHandlesWithClassIds(v8::PersistentHandleVisitor*) */

void __thiscall
v8::Isolate::VisitHandlesWithClassIds(Isolate *this,PersistentHandleVisitor *param_1)

{
  internal::GlobalHandles::IterateAllRootsWithClassIds(*(GlobalHandles **)(this + 0x95e0),param_1);
  return;
}

