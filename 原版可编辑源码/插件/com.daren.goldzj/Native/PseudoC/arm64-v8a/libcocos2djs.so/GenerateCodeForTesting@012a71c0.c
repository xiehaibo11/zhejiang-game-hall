
/* v8::internal::compiler::Pipeline::GenerateCodeForTesting(v8::internal::OptimizedCompilationInfo*,
   v8::internal::Isolate*, v8::internal::compiler::CallDescriptor*, v8::internal::compiler::Graph*,
   v8::internal::AssemblerOptions const&, v8::internal::compiler::Schedule*) */

long v8::internal::compiler::Pipeline::GenerateCodeForTesting
               (OptimizedCompilationInfo *param_1,Isolate *param_2,CallDescriptor *param_3,
               Graph *param_4,AssemblerOptions *param_5,Schedule *param_6)

{
  long lVar1;
  long *plVar2;
  Zone *this;
  PipelineStatistics *this_00;
  CompilationStatistics *pCVar3;
  basic_ostream *pbVar4;
  size_t sVar5;
  ulong uVar6;
  long lVar7;
  NodeOriginTable *this_01;
  ulong extraout_x1;
  void *extraout_x1_00;
  PipelineData *local_3e8;
  ZoneStats aZStack_3e0 [72];
  long *local_398;
  CallDescriptor *local_390 [41];
  PipelineData aPStack_248 [232];
  long local_160;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  ZoneStats::ZoneStats(aZStack_3e0,*(AccountingAllocator **)(param_2 + 0x95d0));
  this = *(Zone **)(param_1 + 0x40);
  this_01 = *(NodeOriginTable **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)this_01) < 0x58) {
    this_01 = (NodeOriginTable *)Zone::NewExpand(this,0x58);
  }
  else {
    *(NodeOriginTable **)(this + 0x10) = this_01 + 0x58;
  }
  NodeOriginTable::NodeOriginTable(this_01,param_4);
  PipelineData::PipelineData
            (aPStack_248,aZStack_3e0,param_1,param_2,*(AccountingAllocator **)(param_2 + 0x95d0),
             param_4,param_6,(SourcePositionTable *)0x0,this_01,(JumpOptimizationInfo *)0x0,param_5)
  ;
  if (FLAG_turbo_stats_nvp == '\0' && FLAG_turbo_stats == '\0') {
    this_00 = (PipelineStatistics *)0x0;
  }
  else {
    this_00 = Malloced::operator_new((Malloced *)0xa8,extraout_x1);
    pCVar3 = (CompilationStatistics *)Isolate::GetTurboStatistics();
    PipelineStatistics::PipelineStatistics(this_00,param_1,pCVar3,aZStack_3e0);
    PipelineStatistics::BeginPhaseKind(this_00,"V8.TFTestCodegen");
  }
  local_3e8 = aPStack_248;
  if (((byte)param_1[1] >> 5 & 1) != 0) {
    TurboJsonFile::TurboJsonFile((TurboJsonFile *)local_390,param_1,0x20);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)local_390,"{\"function\":\"",0xd);
    OptimizedCompilationInfo::GetDebugName();
    plVar2 = local_398;
    sVar5 = strlen((char *)local_398);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar4,(char *)plVar2,sVar5);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (pbVar4,"\", \"source\":\"\",\n\"phases\":[",0x1a);
    plVar2 = local_398;
    local_398 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      operator_delete__(plVar2);
    }
    TurboJsonFile::~TurboJsonFile((TurboJsonFile *)local_390);
  }
  local_390[0] = (CallDescriptor *)0x19fcdb8;
  local_398 = (long *)CONCAT71(local_398._1_7_,1);
  if ((*(byte *)(*(long *)(local_3e8 + 0x18) + 1) & 0x60) != 0) {
    PipelineImpl::Run<v8::internal::compiler::PrintGraphPhase,char_const*&>
              ((PipelineImpl *)&local_3e8,(char **)local_390);
  }
  if (FLAG_turbo_verify != '\0') {
    PipelineImpl::Run<v8::internal::compiler::VerifyGraphPhase,bool&>
              ((PipelineImpl *)&local_3e8,(bool *)&local_398);
  }
  if (local_160 == 0) {
    PipelineImpl::ComputeScheduledGraph((PipelineImpl *)&local_3e8);
  }
  local_390[0] = param_3;
  uVar6 = PipelineImpl::SelectInstructions((PipelineImpl *)&local_3e8,(Linkage *)local_390);
  if ((uVar6 & 1) != 0) {
    local_398 = (long *)0x0;
    PipelineImpl::AssembleCode((PipelineImpl *)&local_3e8,local_390,&local_398);
    plVar2 = local_398;
    local_398 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    lVar7 = PipelineImpl::FinalizeCode((PipelineImpl *)&local_3e8,true);
    if (lVar7 == 0) goto LAB_012a7424;
    if ((*(CompilationDependencies **)(local_3e8 + 0x138) == (CompilationDependencies *)0x0) ||
       (uVar6 = CompilationDependencies::Commit
                          (*(CompilationDependencies **)(local_3e8 + 0x138),lVar7), (uVar6 & 1) != 0
       )) goto LAB_012a7424;
  }
  lVar7 = 0;
LAB_012a7424:
  if (this_00 != (PipelineStatistics *)0x0) {
    PipelineStatistics::~PipelineStatistics(this_00);
    Malloced::operator_delete((Malloced *)this_00,extraout_x1_00);
  }
  PipelineData::~PipelineData(aPStack_248);
  ZoneStats::~ZoneStats(aZStack_3e0);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

