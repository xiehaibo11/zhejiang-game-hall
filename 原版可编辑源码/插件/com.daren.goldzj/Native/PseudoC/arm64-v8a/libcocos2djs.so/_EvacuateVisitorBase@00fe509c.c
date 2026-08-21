
/* v8::internal::EvacuateVisitorBase::~EvacuateVisitorBase() */

void __thiscall v8::internal::EvacuateVisitorBase::~EvacuateVisitorBase(EvacuateVisitorBase *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x20);
  *(undefined ***)this = &PTR__EvacuateVisitorBase_01ca8c18;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x28) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}

