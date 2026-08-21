
/* v8::internal::compiler::GraphAssembler::~GraphAssembler() */

void __thiscall v8::internal::compiler::GraphAssembler::~GraphAssembler(GraphAssembler *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x30);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined ***)this = &PTR__GraphAssembler_01cccf58;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
    return;
  }
  return;
}

