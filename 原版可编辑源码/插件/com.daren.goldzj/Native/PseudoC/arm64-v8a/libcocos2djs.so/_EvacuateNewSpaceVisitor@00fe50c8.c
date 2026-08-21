
/* v8::internal::EvacuateNewSpaceVisitor::~EvacuateNewSpaceVisitor() */

void __thiscall
v8::internal::EvacuateNewSpaceVisitor::~EvacuateNewSpaceVisitor(EvacuateNewSpaceVisitor *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR__EvacuateNewSpaceVisitor_01ca8c40;
  LocalAllocationBuffer::Close((LocalAllocationBuffer *)(this + 0x40));
  pvVar1 = *(void **)(this + 0x20);
  *(undefined ***)this = &PTR__EvacuateVisitorBase_01ca8c18;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x28) = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(this);
  return;
}

