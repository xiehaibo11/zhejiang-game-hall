
/* v8::internal::NativeObjectsExplorer::NativeObjectsExplorer(v8::internal::HeapSnapshot*,
   v8::internal::SnapshottingProgressReportingInterface*) */

void __thiscall
v8::internal::NativeObjectsExplorer::NativeObjectsExplorer
          (NativeObjectsExplorer *this,HeapSnapshot *param_1,
          SnapshottingProgressReportingInterface *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  *(long *)this = *(long *)(*(long *)(*(long *)param_1 + 8) + 0x78) + -0x8850;
  *(HeapSnapshot **)(this + 8) = param_1;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(*(long *)param_1 + 0x28);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(*(long *)param_1 + 8);
  puVar1 = operator_new(0x20);
  *puVar1 = &PTR__HeapEntriesAllocator_01cb7490;
  puVar1[1] = param_1;
  lVar2 = *(long *)param_1;
  puVar1[2] = *(undefined8 *)(lVar2 + 0x28);
  puVar1[3] = *(undefined8 *)(lVar2 + 8);
  *(undefined8 **)(this + 0x20) = puVar1;
  *(undefined8 *)(this + 0x28) = 0;
  return;
}

