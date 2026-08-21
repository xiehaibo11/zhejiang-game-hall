
/* non-virtual thunk to v8::internal::UnreachableObjectsFilter::MarkingVisitor::~MarkingVisitor() */

void __thiscall
v8::internal::UnreachableObjectsFilter::MarkingVisitor::~MarkingVisitor(MarkingVisitor *this)

{
  void *pvVar1;
  
  *(undefined ***)(this + -8) = &PTR__MarkingVisitor_01ca7c88;
  pvVar1 = *(void **)(this + 0x10);
  *(undefined ***)this = &PTR__MarkingVisitor_01ca7d28;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x18) = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(this + -8);
  return;
}

