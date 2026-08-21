
/* v8::internal::compiler::PipelineCompilationJob::FinalizeJobImpl(v8::internal::Isolate*) */

undefined4 __thiscall
v8::internal::compiler::PipelineCompilationJob::FinalizeJobImpl
          (PipelineCompilationJob *this,Isolate *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  CompilationDependencies *pCVar3;
  ulong uVar4;
  PipelineCompilationJob *pPVar5;
  undefined8 local_68;
  RuntimeCallStats *local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  local_40 = 0;
  uStack_58 = 0;
  local_60 = (RuntimeCallStats *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (TracingFlags::runtime_stats != 0) {
    local_60 = (RuntimeCallStats *)(*(long *)(param_1 + 0x9520) + 0x58a0);
    RuntimeCallStats::Enter(local_60,(ulong)&local_60 | 8,0xa9);
  }
  puVar2 = (undefined8 *)PipelineImpl::FinalizeCode((PipelineImpl *)(this + 0x350),true);
  if (puVar2 == (undefined8 *)0x0) {
    if (*(char *)(*(long *)(this + 0x18) + 0x50) == '\0') {
      uVar1 = OptimizedCompilationJob::AbortOptimization(this,2);
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    pCVar3 = *(CompilationDependencies **)(*(long *)(this + 0x350) + 0x138);
    if ((pCVar3 == (CompilationDependencies *)0x0) ||
       (uVar4 = CompilationDependencies::Commit(pCVar3,puVar2), (uVar4 & 1) != 0)) {
      *(undefined8 **)(*(long *)(this + 0x18) + 0x28) = puVar2;
      local_68 = OptimizedCompilationInfo::native_context
                           (*(OptimizedCompilationInfo **)(this + 0x18));
      pPVar5 = (PipelineCompilationJob *)
               NativeContext::AddOptimizedCode((NativeContext *)&local_68,*puVar2);
      RegisterWeakObjectsInOptimizedCode(pPVar5,puVar2,param_1);
      uVar1 = 0;
    }
    else {
      uVar1 = OptimizedCompilationJob::RetryOptimization(this,1);
    }
  }
  if (local_60 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_60,(RuntimeCallTimer *)((ulong)&local_60 | 8));
  }
  return uVar1;
}

