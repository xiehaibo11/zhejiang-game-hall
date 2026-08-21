
/* v8::internal::EmbedderGraphImpl::~EmbedderGraphImpl() */

void __thiscall v8::internal::EmbedderGraphImpl::~EmbedderGraphImpl(EmbedderGraphImpl *this)

{
  void *pvVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  pvVar1 = *(void **)(this + 0x20);
  *(undefined ***)this = &PTR_V8Node_01cb75e8;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x28) = pvVar1;
    operator_delete(pvVar1);
  }
  plVar3 = *(long **)(this + 8);
  if (plVar3 != (long *)0x0) {
    plVar4 = *(long **)(this + 0x10);
    plVar2 = plVar3;
    if (plVar4 != plVar3) {
      do {
        plVar4 = plVar4 + -1;
        plVar2 = (long *)*plVar4;
        *plVar4 = 0;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
      } while (plVar3 != plVar4);
      plVar2 = *(long **)(this + 8);
    }
    *(long **)(this + 0x10) = plVar3;
    operator_delete(plVar2);
  }
  operator_delete(this);
  return;
}

