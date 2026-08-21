
/* v8::internal::UnreachableObjectsFilter::MarkingVisitor::~MarkingVisitor() */

void __thiscall
v8::internal::UnreachableObjectsFilter::MarkingVisitor::~MarkingVisitor(MarkingVisitor *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x18);
  *(undefined ***)this = &PTR__MarkingVisitor_01ca7c88;
  *(undefined ***)(this + 8) = &PTR__MarkingVisitor_01ca7d28;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x20) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}

