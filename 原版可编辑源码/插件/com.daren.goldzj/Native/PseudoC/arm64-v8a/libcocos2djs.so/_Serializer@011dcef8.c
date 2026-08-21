
/* v8::internal::Serializer::~Serializer() */

void __thiscall v8::internal::Serializer::~Serializer(Serializer *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR__Serializer_01cbb9d0;
  if (*(long **)(this + 0x98) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x98) + 8))();
  }
  if (*(void **)(this + 0x168) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x168));
    if (*(void **)(this + 0x198) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x198));
    }
  }
  if (*(void **)(this + 0x170) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x170));
    if (*(void **)(this + 0x1a0) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x1a0));
    }
  }
  if (*(void **)(this + 0x178) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x178));
    if (*(void **)(this + 0x1a8) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x1a8));
    }
  }
  if (*(void **)(this + 0x180) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x180));
    if (*(void **)(this + 0x1b0) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x1b0));
    }
  }
  if (*(void **)(this + 0x188) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x188));
    if (*(void **)(this + 0x1b8) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x1b8));
    }
  }
  if (*(void **)(this + 400) != (void *)0x0) {
    operator_delete__(*(void **)(this + 400));
    if (*(void **)(this + 0x1c0) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x1c0));
    }
  }
  pvVar1 = *(void **)(this + 0x130);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x138) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x118);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x120) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x100);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x108) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0xe8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0xf0) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0xb8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0xc0) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0xa0);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0xa8) = pvVar1;
    operator_delete(pvVar1);
  }
  ExternalReferenceEncoder::~ExternalReferenceEncoder((ExternalReferenceEncoder *)(this + 0x88));
  free(*(void **)(this + 0x70));
  pvVar1 = *(void **)(this + 0x50);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x58) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}

