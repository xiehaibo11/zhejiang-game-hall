
/* v8::internal::CodeLargeObjectSpace::~CodeLargeObjectSpace() */

void __thiscall
v8::internal::CodeLargeObjectSpace::~CodeLargeObjectSpace(CodeLargeObjectSpace *this)

{
  undefined8 *puVar1;
  long *plVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__CodeLargeObjectSpace_01ca9ba0;
  puVar1 = *(void **)(this + 0x90);
  while (puVar1 != (void *)0x0) {
    pvVar3 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar3;
  }
  pvVar3 = *(void **)(this + 0x80);
  *(undefined8 *)(this + 0x80) = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  *(undefined ***)this = &PTR__LargeObjectSpace_01ca9990;
  LargeObjectSpace::TearDown((LargeObjectSpace *)this);
  *(undefined ***)this = &PTR__Space_01ca9d00;
  if (*(void **)(this + 0x30) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x30));
  }
  plVar2 = *(long **)(this + 0x60);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  pvVar3 = *(void **)(this + 8);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  *(void **)(this + 0x10) = pvVar3;
  operator_delete(pvVar3);
  return;
}

