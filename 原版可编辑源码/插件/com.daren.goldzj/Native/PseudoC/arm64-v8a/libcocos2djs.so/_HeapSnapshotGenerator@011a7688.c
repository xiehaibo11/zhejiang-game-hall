
/* v8::internal::HeapSnapshotGenerator::~HeapSnapshotGenerator() */

void __thiscall
v8::internal::HeapSnapshotGenerator::~HeapSnapshotGenerator(HeapSnapshotGenerator *this)

{
  undefined8 *puVar1;
  long *plVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__HeapSnapshotGenerator_01cb7460;
  puVar1 = *(void **)(this + 0x128);
  while (puVar1 != (void *)0x0) {
    pvVar3 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar3;
  }
  pvVar3 = *(void **)(this + 0x118);
  *(undefined8 *)(this + 0x118) = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  plVar2 = *(long **)(this + 0x108);
  *(undefined8 *)(this + 0x108) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  V8HeapExplorer::~V8HeapExplorer((V8HeapExplorer *)(this + 0x18));
  operator_delete(this);
  return;
}

