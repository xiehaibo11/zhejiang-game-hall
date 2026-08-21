
/* v8::internal::compiler::PipelineCompilationJob::PrepareJobImpl(v8::internal::Isolate*) */

undefined8 __thiscall
v8::internal::compiler::PipelineCompilationJob::PrepareJobImpl
          (PipelineCompilationJob *this,Isolate *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  Zone *this_00;
  undefined8 *puVar3;
  uint *puVar4;
  undefined8 local_18;
  
  puVar4 = *(uint **)(this + 0x18);
  if (FLAG_max_optimized_bytecode_size < *(int *)(**(long **)(puVar4 + 4) + 3) >> 1) {
    uVar2 = OptimizedCompilationJob::AbortOptimization(this,6);
    return uVar2;
  }
  if (FLAG_always_opt == '\0') {
    *puVar4 = *puVar4 | 0x20;
  }
  if (FLAG_turbo_loop_peeling != '\0') {
    **(uint **)(this + 0x18) = **(uint **)(this + 0x18) | 0x40;
  }
  if (FLAG_turbo_inlining != '\0') {
    **(uint **)(this + 0x18) = **(uint **)(this + 0x18) | 2;
  }
  uVar1 = 1;
  if (FLAG_untrusted_code_mitigations != '\0') {
    uVar1 = 2;
  }
  *(undefined4 *)(*(long *)(this + 0x18) + 4) = uVar1;
  if (FLAG_turbo_allocation_folding != '\0') {
    **(uint **)(this + 0x18) = **(uint **)(this + 0x18) | 0x800;
  }
  puVar4 = *(uint **)(this + 0x18);
  if ((*(int *)((**(ulong **)(puVar4 + 8) & 0xffffffff00000000 |
                (ulong)*(uint *)(**(ulong **)(puVar4 + 8) + 0x13)) - 1) == *(int *)(param_1 + 0x220)
      ) && (puVar4[0xe] == 0xffffffff)) {
    *puVar4 = *puVar4 | 1;
    PipelineData::ChooseSpecializationContext((PipelineData *)(this + 0x170));
    puVar4 = *(uint **)(this + 0x18);
  }
  if (((byte)*puVar4 >> 4 & 1) != 0) {
    SharedFunctionInfo::EnsureSourcePositionsAvailable(param_1,*(undefined8 *)(puVar4 + 6));
    puVar4 = *(uint **)(this + 0x18);
  }
  local_18 = **(undefined8 **)(puVar4 + 6);
  uVar1 = SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_18);
  *(undefined4 *)(this + 0x1b4) = uVar1;
  this_00 = *(Zone **)(*(long *)(this + 0x18) + 0x40);
  puVar3 = *(undefined8 **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar3) < 8) {
    puVar3 = (undefined8 *)Zone::NewExpand(this_00,8);
  }
  else {
    *(undefined8 **)(this_00 + 0x10) = puVar3 + 1;
  }
  uVar2 = Linkage::ComputeIncoming
                    (*(Zone **)(*(OptimizedCompilationInfo **)(this + 0x18) + 0x40),
                     *(OptimizedCompilationInfo **)(this + 0x18));
  *puVar3 = uVar2;
  *(undefined8 **)(this + 0x358) = puVar3;
  if (*(int *)(*(long *)(this + 0x18) + 0x38) != -1) {
    if (this[0x1b8] != (PipelineCompilationJob)0x0) {
      this[0x1b8] = (PipelineCompilationJob)0x0;
    }
    OsrHelper::OsrHelper((OsrHelper *)(this + 0x1c0),*(OptimizedCompilationInfo **)(this + 0x188));
    this[0x1b8] = (PipelineCompilationJob)0x1;
  }
  Deoptimizer::EnsureCodeForDeoptimizationEntries(param_1);
  PipelineImpl::Serialize((PipelineImpl *)(this + 0x350));
  if (FLAG_concurrent_inlining == '\0') {
    PipelineImpl::CreateGraph((PipelineImpl *)(this + 0x350));
  }
  return 0;
}

