
/* v8::internal::compiler::Pipeline::GenerateCodeForTesting(v8::internal::OptimizedCompilationInfo*,
   v8::internal::Isolate*, std::__ndk1::unique_ptr<v8::internal::compiler::JSHeapBroker,
   std::__ndk1::default_delete<v8::internal::compiler::JSHeapBroker> >*) */

long v8::internal::compiler::Pipeline::GenerateCodeForTesting
               (OptimizedCompilationInfo *param_1,Isolate *param_2,unique_ptr *param_3)

{
  long lVar1;
  undefined8 uVar2;
  unique_ptr *puVar3;
  long lVar4;
  long *plVar5;
  PipelineStatistics *this;
  ulong uVar6;
  long lVar7;
  long lVar8;
  void *extraout_x1;
  long local_2a0;
  long *local_298;
  undefined8 local_290;
  PipelineData *local_288;
  ZoneStats aZStack_280 [72];
  PipelineData aPStack_238 [264];
  Zone *local_130;
  undefined8 local_f8;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  ZoneStats::ZoneStats(aZStack_280,*(AccountingAllocator **)(param_2 + 0x95d0));
  this = (PipelineStatistics *)FUN_0129e870(0,param_1,param_2,aZStack_280);
  PipelineData::PipelineData(aPStack_238,aZStack_280,param_2,param_1,this);
  local_288 = aPStack_238;
  local_290 = Linkage::ComputeIncoming(local_130,param_1);
  Deoptimizer::EnsureCodeForDeoptimizationEntries(param_2);
  PipelineImpl::Serialize((PipelineImpl *)&local_288);
  PipelineImpl::CreateGraph((PipelineImpl *)&local_288);
  uVar6 = PipelineImpl::OptimizeGraph((PipelineImpl *)&local_288,(Linkage *)&local_290);
  lVar8 = 0;
  if ((uVar6 & 1) != 0) {
    local_298 = (long *)0x0;
    PipelineImpl::AssembleCode((PipelineImpl *)&local_288,&local_290,&local_298);
    plVar5 = local_298;
    local_298 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    lVar7 = PipelineImpl::FinalizeCode((PipelineImpl *)&local_288,param_3 == (unique_ptr *)0x0);
    if (lVar7 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = lVar7;
      uVar2 = local_f8;
      puVar3 = param_3;
      if (*(CompilationDependencies **)(local_288 + 0x138) != (CompilationDependencies *)0x0) {
        uVar6 = CompilationDependencies::Commit
                          (*(CompilationDependencies **)(local_288 + 0x138),lVar7);
        if ((uVar6 & 1) == 0) {
          lVar8 = 0;
        }
        if (param_3 == (unique_ptr *)0x0) goto LAB_012a7168;
        uVar2 = local_f8;
        puVar3 = (unique_ptr *)(uVar6 & 1);
      }
      local_f8 = uVar2;
      if (puVar3 != (unique_ptr *)0x0) {
        local_f8 = 0;
        local_2a0 = 0;
        lVar8 = *(long *)param_3;
        *(undefined8 *)param_3 = uVar2;
        if (lVar8 == 0) {
          local_2a0 = 0;
          lVar8 = lVar7;
        }
        else {
          FUN_012ac354(param_3);
          lVar4 = local_2a0;
          local_2a0 = 0;
          lVar8 = lVar7;
          if (lVar4 != 0) {
            FUN_012ac354(&local_2a0);
          }
        }
      }
    }
  }
LAB_012a7168:
  PipelineData::~PipelineData(aPStack_238);
  if (this != (PipelineStatistics *)0x0) {
    PipelineStatistics::~PipelineStatistics(this);
    Malloced::operator_delete((Malloced *)this,extraout_x1);
  }
  ZoneStats::~ZoneStats(aZStack_280);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar8;
}

