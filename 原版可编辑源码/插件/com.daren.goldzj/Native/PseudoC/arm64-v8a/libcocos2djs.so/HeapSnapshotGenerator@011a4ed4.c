
/* v8::internal::HeapSnapshotGenerator::HeapSnapshotGenerator(v8::internal::HeapSnapshot*,
   v8::ActivityControl*, v8::HeapProfiler::ObjectNameResolver*, v8::internal::Heap*) */

void __thiscall
v8::internal::HeapSnapshotGenerator::HeapSnapshotGenerator
          (HeapSnapshotGenerator *this,HeapSnapshot *param_1,ActivityControl *param_2,
          ObjectNameResolver *param_3,Heap *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  *(undefined ***)this = &PTR__HeapSnapshotGenerator_01cb7460;
  *(HeapSnapshot **)(this + 8) = param_1;
  *(ActivityControl **)(this + 0x10) = param_2;
  *(undefined ***)(this + 0x18) = &PTR__V8HeapExplorer_01cb6428;
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(*(long *)(*(long *)param_1 + 8) + 0x78);
  *(HeapSnapshot **)(this + 0x28) = param_1;
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(*(long *)param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(long *)param_1 + 8);
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x70) = 0x3f800000;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x98) = 0x3f800000;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xc0) = 0x3f800000;
  *(ObjectNameResolver **)(this + 200) = param_3;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0x38) = uVar2;
  *(HeapSnapshotGenerator **)(this + 0x40) = this;
  *(long *)(this + 0xe8) = *(long *)(*(long *)(*(long *)param_1 + 8) + 0x78) + -0x8850;
  *(HeapSnapshot **)(this + 0xf0) = param_1;
  *(undefined8 *)(this + 0xf8) = *(undefined8 *)(*(long *)param_1 + 0x28);
  *(undefined8 *)(this + 0x100) = *(undefined8 *)(*(long *)param_1 + 8);
  puVar1 = operator_new(0x20);
  *puVar1 = &PTR__HeapEntriesAllocator_01cb7490;
  puVar1[1] = param_1;
  lVar3 = *(long *)param_1;
  puVar1[2] = *(undefined8 *)(lVar3 + 0x28);
  puVar1[3] = *(undefined8 *)(lVar3 + 8);
  *(undefined8 **)(this + 0x108) = puVar1;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 0x138) = 0x3f800000;
  *(Heap **)(this + 0x148) = param_4;
  return;
}

