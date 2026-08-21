
/* v8::internal::V8HeapExplorer::~V8HeapExplorer() */

void __thiscall v8::internal::V8HeapExplorer::~V8HeapExplorer(V8HeapExplorer *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__V8HeapExplorer_01cb6428;
  if (*(void **)(this + 0xb8) != (void *)0x0) {
    operator_delete(*(void **)(this + 0xb8));
  }
  puVar1 = *(void **)(this + 0x98);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)(this + 0x88);
  *(undefined8 *)(this + 0x88) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  puVar1 = *(void **)(this + 0x70);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)(this + 0x60);
  *(undefined8 *)(this + 0x60) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  puVar1 = *(void **)(this + 0x48);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)(this + 0x38);
  *(undefined8 *)(this + 0x38) = 0;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2);
  return;
}

