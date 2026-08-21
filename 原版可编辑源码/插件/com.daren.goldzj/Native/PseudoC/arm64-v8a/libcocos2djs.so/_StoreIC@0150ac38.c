
/* v8::internal::StoreIC::~StoreIC() */

void __thiscall v8::internal::StoreIC::~StoreIC(StoreIC *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x28);
  *(undefined ***)this = &PTR__IC_01cc6ed8;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(this);
  return;
}

