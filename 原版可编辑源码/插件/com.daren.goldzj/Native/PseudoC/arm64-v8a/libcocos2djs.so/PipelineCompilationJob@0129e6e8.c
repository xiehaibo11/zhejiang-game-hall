
/* v8::internal::compiler::PipelineCompilationJob::PipelineCompilationJob(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SharedFunctionInfo>,
   v8::internal::Handle<v8::internal::JSFunction>) */

void __thiscall
v8::internal::compiler::PipelineCompilationJob::PipelineCompilationJob
          (PipelineCompilationJob *this,Isolate *param_1,ulong *param_3,long param_4)

{
  ZoneStats *this_00;
  undefined8 uVar1;
  ulong *puVar2;
  PipelineStatistics *pPVar3;
  ulong uVar4;
  ulong uVar5;
  
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__CompilationJob_01cacba8;
  *(undefined8 *)(this + 0x10) = 0;
  uVar1 = base::TimeTicks::HighResolutionNow();
  *(undefined8 *)(this + 0x10) = uVar1;
  *(OptimizedCompilationInfo **)(this + 0x18) = (OptimizedCompilationInfo *)(this + 200);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(char **)(this + 0x38) = "TurboFan";
  *(undefined ***)this = &PTR__PipelineCompilationJob_01cbe7e8;
  Zone::Zone((Zone *)(this + 0x40),
             *(AccountingAllocator **)((ulong)*(uint *)(param_4 + 4) << 0x20 | 0x95d0),
             "pipeline-compilation-job-zone");
  this_00 = (ZoneStats *)(this + 0x80);
  ZoneStats::ZoneStats
            (this_00,*(AccountingAllocator **)((ulong)*(uint *)(param_4 + 4) << 0x20 | 0x95d0));
  OptimizedCompilationInfo::OptimizedCompilationInfo
            ((OptimizedCompilationInfo *)(this + 200),(Zone *)(this + 0x40),
             (ulong)*(uint *)(param_4 + 4) << 0x20,param_3,param_4);
  uVar4 = *param_3 & 0xffffffff00000000;
  uVar5 = uVar4 | *(uint *)(*param_3 + 0xf);
  if (*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x5b) {
    uVar5 = uVar4 | *(uint *)(uVar5 + 0xb);
  }
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(param_1 + 0x95a0);
    if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar5;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
  }
  pPVar3 = (PipelineStatistics *)
           FUN_0129e870(puVar2,*(undefined8 *)(this + 0x18),(ulong)*(uint *)(param_4 + 4) << 0x20,
                        this_00);
  *(PipelineStatistics **)(this + 0x168) = pPVar3;
  PipelineData::PipelineData
            ((PipelineData *)(this + 0x170),this_00,
             (Isolate *)((ulong)*(uint *)(param_4 + 4) << 0x20),
             *(OptimizedCompilationInfo **)(this + 0x18),pPVar3);
  *(PipelineData **)(this + 0x350) = (PipelineData *)(this + 0x170);
  *(undefined8 *)(this + 0x358) = 0;
  return;
}

