
/* v8::internal::compiler::WasmHeapStubCompilationJob::WasmHeapStubCompilationJob(v8::internal::Isolate*,
   v8::internal::wasm::WasmEngine*, v8::internal::compiler::CallDescriptor*,
   std::__ndk1::unique_ptr<v8::internal::Zone, std::__ndk1::default_delete<v8::internal::Zone> >,
   v8::internal::compiler::Graph*, v8::internal::Code::Kind, std::__ndk1::unique_ptr<char [],
   std::__ndk1::default_delete<char []> >, v8::internal::AssemblerOptions const&,
   v8::internal::compiler::SourcePositionTable*) */

void __thiscall
v8::internal::compiler::WasmHeapStubCompilationJob::WasmHeapStubCompilationJob
          (WasmHeapStubCompilationJob *this,Isolate *param_1,long param_2,undefined8 param_3,
          long *param_5,Graph *param_6,undefined4 param_7,undefined8 *param_8,
          AssemblerOptions *param_9,SourcePositionTable *param_10)

{
  OptimizedCompilationInfo *pOVar1;
  undefined8 uVar2;
  size_t sVar3;
  Zone *this_00;
  NodeOriginTable *this_01;
  char *__s;
  
  *(undefined ***)this = &PTR__CompilationJob_01cacba8;
  pOVar1 = (OptimizedCompilationInfo *)(this + 0x48);
  *(undefined4 *)(this + 8) = 1;
  *(undefined8 *)(this + 0x10) = 0;
  uVar2 = base::TimeTicks::HighResolutionNow();
  *(undefined8 *)(this + 0x10) = uVar2;
  *(OptimizedCompilationInfo **)(this + 0x18) = pOVar1;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(char **)(this + 0x38) = "TurboFan";
  *(undefined ***)this = &PTR__WasmHeapStubCompilationJob_01cbe820;
  __s = (char *)*param_8;
  *param_8 = 0;
  *(char **)(this + 0x40) = __s;
  sVar3 = strlen(__s);
  OptimizedCompilationInfo::OptimizedCompilationInfo
            (pOVar1,__s,sVar3,*(undefined8 *)param_6,param_7);
  *(undefined8 *)(this + 0xe8) = param_3;
  ZoneStats::ZoneStats((ZoneStats *)(this + 0xf0),*(AccountingAllocator **)(*param_5 + 0x20));
  this_00 = (Zone *)*param_5;
  *param_5 = 0;
  *(Zone **)(this + 0x138) = this_00;
  *(Graph **)(this + 0x140) = param_6;
  this_01 = *(NodeOriginTable **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)this_01) < 0x58) {
    this_01 = (NodeOriginTable *)Zone::NewExpand(this_00,0x58);
  }
  else {
    *(NodeOriginTable **)(this_00 + 0x10) = this_01 + 0x58;
  }
  NodeOriginTable::NodeOriginTable(this_01,*(Graph **)(this + 0x140));
  PipelineData::PipelineData
            ((PipelineData *)(this + 0x148),(ZoneStats *)(this + 0xf0),pOVar1,param_1,
             (AccountingAllocator *)(param_2 + 0x58),param_6,(Schedule *)0x0,param_10,this_01,
             (JumpOptimizationInfo *)0x0,param_9);
  *(PipelineData **)(this + 0x328) = (PipelineData *)(this + 0x148);
  *(long *)(this + 0x330) = param_2;
  return;
}

