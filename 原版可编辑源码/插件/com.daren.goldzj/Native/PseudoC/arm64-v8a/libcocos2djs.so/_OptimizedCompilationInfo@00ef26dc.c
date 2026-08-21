
/* v8::internal::OptimizedCompilationInfo::~OptimizedCompilationInfo() */

void __thiscall
v8::internal::OptimizedCompilationInfo::~OptimizedCompilationInfo(OptimizedCompilationInfo *this)

{
  void *pvVar1;
  void *pvVar2;
  DeferredHandles *this_00;
  undefined8 local_28;
  
  if ((((byte)*this >> 2 & 1) != 0) && (*(undefined8 **)(this + 0x18) != (undefined8 *)0x0)) {
    local_28 = **(undefined8 **)(this + 0x18);
    SharedFunctionInfo::DisableOptimization((SharedFunctionInfo *)&local_28,this[0x50]);
  }
  pvVar1 = *(void **)(this + 0x90);
  *(undefined8 *)(this + 0x90) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x58);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x60) = pvVar1;
    operator_delete(pvVar1);
  }
  this_00 = *(DeferredHandles **)(this + 0x48);
  *(undefined8 *)(this + 0x48) = 0;
  if (this_00 != (DeferredHandles *)0x0) {
    DeferredHandles::~DeferredHandles(this_00);
    operator_delete(this_00);
  }
  pvVar1 = *(void **)(this + 0x30);
  *(undefined8 *)(this + 0x30) = 0;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)((long)pvVar1 + 0x70);
    *(undefined8 *)((long)pvVar1 + 0x70) = 0;
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
    pvVar2 = *(void **)((long)pvVar1 + 0x60);
    *(undefined8 *)((long)pvVar1 + 0x60) = 0;
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
    pvVar2 = *(void **)((long)pvVar1 + 0x50);
    *(undefined8 *)((long)pvVar1 + 0x50) = 0;
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
    operator_delete(pvVar1);
  }
  return;
}

