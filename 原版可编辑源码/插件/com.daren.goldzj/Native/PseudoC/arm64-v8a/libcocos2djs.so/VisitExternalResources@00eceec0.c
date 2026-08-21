
/* v8::Isolate::VisitExternalResources(v8::ExternalResourceVisitor*) */

void __thiscall v8::Isolate::VisitExternalResources(Isolate *this,ExternalResourceVisitor *param_1)

{
  internal::Heap::VisitExternalResources((Heap *)(this + 0x8850),param_1);
  return;
}

