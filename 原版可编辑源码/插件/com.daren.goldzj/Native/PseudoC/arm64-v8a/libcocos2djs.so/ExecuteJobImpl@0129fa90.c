
/* v8::internal::compiler::PipelineCompilationJob::ExecuteJobImpl(v8::internal::RuntimeCallStats*)
    */

undefined8 __thiscall
v8::internal::compiler::PipelineCompilationJob::ExecuteJobImpl
          (PipelineCompilationJob *this,RuntimeCallStats *param_1)

{
  PipelineImpl *this_00;
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *local_28;
  
  *(RuntimeCallStats **)(this + 0x348) = param_1;
  if (FLAG_concurrent_inlining != '\0') {
    PipelineImpl::CreateGraph((PipelineImpl *)(this + 0x350));
  }
  this_00 = (PipelineImpl *)(this + 0x350);
  if (FLAG_turboprop == '\0') {
    uVar2 = PipelineImpl::OptimizeGraph(this_00,*(Linkage **)(this + 0x358));
  }
  else {
    uVar2 = PipelineImpl::OptimizeGraphForMidTier(this_00,*(Linkage **)(this + 0x358));
  }
  if ((uVar2 & 1) == 0) {
    uVar3 = 1;
  }
  else {
    local_28 = (long *)0x0;
    PipelineImpl::AssembleCode(this_00,*(undefined8 *)(this + 0x358),&local_28);
    plVar1 = local_28;
    local_28 = (long *)0x0;
    uVar3 = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
      uVar3 = 0;
    }
  }
  *(undefined8 *)(this + 0x348) = 0;
  return uVar3;
}

