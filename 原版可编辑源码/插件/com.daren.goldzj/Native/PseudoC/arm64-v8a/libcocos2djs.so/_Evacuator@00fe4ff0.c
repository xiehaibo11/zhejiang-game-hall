
/* v8::internal::Evacuator::~Evacuator() */

void __thiscall v8::internal::Evacuator::~Evacuator(Evacuator *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x120);
  *(undefined ***)this = &PTR__Evacuator_01ca8be0;
  *(undefined ***)(this + 0x100) = &PTR__EvacuateVisitorBase_01ca8c18;
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x128) = pvVar2;
    operator_delete(pvVar2);
  }
  *(undefined ***)(this + 0x38) = &PTR__EvacuateNewSpaceVisitor_01ca8c40;
  LocalAllocationBuffer::Close((LocalAllocationBuffer *)(this + 0x78));
  pvVar2 = *(void **)(this + 0x58);
  *(undefined ***)(this + 0x38) = &PTR__EvacuateVisitorBase_01ca8c18;
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x60) = pvVar2;
    operator_delete(pvVar2);
  }
  puVar1 = *(void **)(this + 0x20);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)(this + 0x10);
  *(undefined8 *)(this + 0x10) = 0;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2);
  return;
}

