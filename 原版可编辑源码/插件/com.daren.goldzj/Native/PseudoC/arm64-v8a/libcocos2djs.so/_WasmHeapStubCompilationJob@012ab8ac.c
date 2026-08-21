
/* v8::internal::compiler::WasmHeapStubCompilationJob::~WasmHeapStubCompilationJob() */

void __thiscall
v8::internal::compiler::WasmHeapStubCompilationJob::~WasmHeapStubCompilationJob
          (WasmHeapStubCompilationJob *this)

{
  void *pvVar1;
  Zone *this_00;
  
  *(undefined ***)this = &PTR__WasmHeapStubCompilationJob_01cbe820;
  PipelineData::~PipelineData((PipelineData *)(this + 0x148));
  this_00 = *(Zone **)(this + 0x138);
  *(undefined8 *)(this + 0x138) = 0;
  if (this_00 != (Zone *)0x0) {
    Zone::~Zone(this_00);
    operator_delete(this_00);
  }
  ZoneStats::~ZoneStats((ZoneStats *)(this + 0xf0));
  OptimizedCompilationInfo::~OptimizedCompilationInfo((OptimizedCompilationInfo *)(this + 0x48));
  pvVar1 = *(void **)(this + 0x40);
  *(undefined8 *)(this + 0x40) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    return;
  }
  return;
}

