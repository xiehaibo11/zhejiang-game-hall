
/* v8::internal::V8HeapExplorer::V8HeapExplorer(v8::internal::HeapSnapshot*,
   v8::internal::SnapshottingProgressReportingInterface*, v8::HeapProfiler::ObjectNameResolver*) */

void __thiscall
v8::internal::V8HeapExplorer::V8HeapExplorer
          (V8HeapExplorer *this,HeapSnapshot *param_1,
          SnapshottingProgressReportingInterface *param_2,ObjectNameResolver *param_3)

{
  undefined8 uVar1;
  
  *(undefined ***)this = &PTR__V8HeapExplorer_01cb6428;
  *(undefined8 *)(this + 8) = *(undefined8 *)(*(long *)(*(long *)param_1 + 8) + 0x78);
  *(HeapSnapshot **)(this + 0x10) = param_1;
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(*(long *)param_1 + 0x28);
  uVar1 = *(undefined8 *)(*(long *)param_1 + 8);
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x58) = 0x3f800000;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x80) = 0x3f800000;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0xa8) = 0x3f800000;
  *(ObjectNameResolver **)(this + 0xb0) = param_3;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0x20) = uVar1;
  *(SnapshottingProgressReportingInterface **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0;
  return;
}

