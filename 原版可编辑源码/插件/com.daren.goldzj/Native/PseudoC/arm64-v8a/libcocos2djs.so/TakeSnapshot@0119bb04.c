
/* v8::internal::HeapProfiler::TakeSnapshot(v8::ActivityControl*,
   v8::HeapProfiler::ObjectNameResolver*) */

void __thiscall
v8::internal::HeapProfiler::TakeSnapshot
          (HeapProfiler *this,ActivityControl *param_1,ObjectNameResolver *param_2)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  HeapSnapshot *this_00;
  ulong uVar4;
  void *pvVar5;
  HeapSnapshot *local_1a0;
  undefined **local_198 [3];
  V8HeapExplorer aVStack_180 [240];
  long *local_90;
  void *local_80;
  void *local_70;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this_00 = operator_new(400);
  HeapSnapshot::HeapSnapshot(this_00,this);
  local_1a0 = this_00;
  HeapSnapshotGenerator::HeapSnapshotGenerator
            ((HeapSnapshotGenerator *)local_198,this_00,param_1,param_2,
             *(Heap **)(*(long *)(this + 8) + 0x78));
  uVar4 = HeapSnapshotGenerator::GenerateSnapshot((HeapSnapshotGenerator *)local_198);
  if ((uVar4 & 1) == 0) {
    HeapSnapshot::~HeapSnapshot(this_00);
    operator_delete(this_00);
    local_1a0 = (HeapSnapshot *)0x0;
  }
  else if (*(undefined8 **)(this + 0x18) < *(undefined8 **)(this + 0x20)) {
    **(undefined8 **)(this + 0x18) = this_00;
    *(long *)(this + 0x18) = *(long *)(this + 0x18) + 8;
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::unique_ptr<v8::internal::HeapSnapshot,std::__ndk1::default_delete<v8::internal::HeapSnapshot>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::HeapSnapshot,std::__ndk1::default_delete<v8::internal::HeapSnapshot>>>>
    ::__emplace_back_slow_path<v8::internal::HeapSnapshot*&>
              ((vector<std::__ndk1::unique_ptr<v8::internal::HeapSnapshot,std::__ndk1::default_delete<v8::internal::HeapSnapshot>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::HeapSnapshot,std::__ndk1::default_delete<v8::internal::HeapSnapshot>>>>
                *)(this + 0x10),&local_1a0);
  }
  local_198[0] = &PTR__HeapSnapshotGenerator_01cb7460;
  pvVar2 = local_80;
  while (local_70 != (void *)0x0) {
    pvVar5 = *(void **)local_70;
    local_80 = pvVar2;
    operator_delete(local_70);
    pvVar2 = local_80;
    local_70 = pvVar5;
  }
  local_80 = (void *)0x0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  plVar3 = local_90;
  local_90 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  V8HeapExplorer::~V8HeapExplorer(aVStack_180);
  HeapObjectsMap::RemoveDeadEntries(*(HeapObjectsMap **)(this + 8));
  this[0x38] = (HeapProfiler)0x1;
  DebugFeatureTracker::Track
            ((DebugFeatureTracker *)
             (*(long *)(*(long *)(*(long *)(this + 8) + 0x78) + 0x2e78) + 0x30),4);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_1a0);
  }
  return;
}

