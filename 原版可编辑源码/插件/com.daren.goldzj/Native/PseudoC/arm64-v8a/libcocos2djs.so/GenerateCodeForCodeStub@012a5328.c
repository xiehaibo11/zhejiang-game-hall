
/* v8::internal::compiler::Pipeline::GenerateCodeForCodeStub(v8::internal::Isolate*,
   v8::internal::compiler::CallDescriptor*, v8::internal::compiler::Graph*,
   v8::internal::compiler::SourcePositionTable*, v8::internal::Code::Kind, char const*, int,
   v8::internal::PoisoningMitigationLevel, v8::internal::AssemblerOptions const&) */

long v8::internal::compiler::Pipeline::GenerateCodeForCodeStub
               (Isolate *param_1,undefined **param_2,Graph *param_3,SourcePositionTable *param_4,
               undefined4 param_5,char *param_6,undefined4 param_7,int param_8,
               AssemblerOptions *param_9)

{
  Isolate *pIVar1;
  JumpOptimizationInfo *pJVar2;
  int iVar3;
  long lVar4;
  void *pvVar5;
  char cVar6;
  size_t sVar7;
  PipelineStatistics *this;
  CompilationStatistics *pCVar8;
  undefined8 *puVar9;
  basic_ostream *pbVar10;
  long *plVar11;
  ulong uVar12;
  PipelineImpl *this_00;
  long lVar13;
  ulong extraout_x1;
  __sFILE *p_Var14;
  void *extraout_x1_00;
  char **local_6a0;
  void *local_698;
  undefined **local_690;
  undefined **ppuStack_688;
  locale alStack_680 [64];
  undefined **local_640 [19];
  PipelineData *local_5a8;
  undefined4 local_5a0;
  char local_59c;
  void *local_598;
  void *pvStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  NodeOriginTable aNStack_578 [56];
  long local_540;
  long local_538;
  ZoneStats aZStack_520 [72];
  OptimizedCompilationInfo OStack_4d8;
  byte local_4d7;
  int local_4d4;
  undefined4 local_4cc;
  long *local_438;
  char *local_430 [8];
  undefined1 local_3ef;
  PipelineData local_250 [8];
  WasmEngine *local_248;
  undefined1 local_20f;
  Graph *local_1b0;
  SourcePositionTable *local_1a8;
  NodeOriginTable *local_1a0;
  Schedule *local_168;
  JumpOptimizationInfo *local_b8;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  pIVar1 = param_1 + 0x95d0;
  pJVar2 = (JumpOptimizationInfo *)&local_5a0;
  sVar7 = strlen(param_6);
  OptimizedCompilationInfo::OptimizedCompilationInfo
            (&OStack_4d8,param_6,sVar7,*(undefined8 *)param_3,param_5);
  if (param_8 != 1) {
    local_4d4 = param_8;
  }
  local_4cc = param_7;
  ZoneStats::ZoneStats(aZStack_520,*(AccountingAllocator **)pIVar1);
  NodeOriginTable::NodeOriginTable(aNStack_578,param_3);
  local_5a0 = 0;
  local_59c = '\0';
  pvStack_590 = (void *)0x0;
  local_598 = (void *)0x0;
  uStack_580 = 0;
  local_588 = 0;
  if ((FLAG_turbo_rewrite_far_jumps & param_1[0xb6b8] != (Isolate)0x0) == 0) {
    pJVar2 = (JumpOptimizationInfo *)0x0;
  }
  PipelineData::PipelineData
            (local_250,aZStack_520,&OStack_4d8,param_1,*(AccountingAllocator **)pIVar1,param_3,
             (Schedule *)0x0,param_4,aNStack_578,pJVar2,param_9);
  local_20f = 0;
  if (FLAG_turbo_stats_nvp == '\0' && FLAG_turbo_stats == '\0') {
    this = (PipelineStatistics *)0x0;
  }
  else {
    this = Malloced::operator_new((Malloced *)0xa8,extraout_x1);
    pCVar8 = (CompilationStatistics *)Isolate::GetTurboStatistics();
    PipelineStatistics::PipelineStatistics(this,&OStack_4d8,pCVar8,aZStack_520);
    PipelineStatistics::BeginPhaseKind(this,"V8.TFStubCodegen");
  }
  local_5a8 = local_250;
  if ((local_4d7 & 0x60) != 0) {
    if (local_248 == (WasmEngine *)0x0) {
      puVar9 = (undefined8 *)Isolate::GetCodeTracer();
    }
    else {
      puVar9 = (undefined8 *)wasm::WasmEngine::GetCodeTracer(local_248);
    }
    p_Var14 = (__sFILE *)puVar9[0x12];
    if (FLAG_redirect_code_traces != '\0') {
      if (p_Var14 == (__sFILE *)0x0) {
        p_Var14 = (__sFILE *)base::OS::FOpen((char *)*puVar9,"ab");
        puVar9[0x12] = p_Var14;
      }
      *(int *)(puVar9 + 0x13) = *(int *)(puVar9 + 0x13) + 1;
    }
    OFStream::OFStream((OFStream *)&local_690,p_Var14);
    pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        ((basic_ostream *)&local_690,
                         "---------------------------------------------------\n",0x34);
    pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (pbVar10,"Begin compiling ",0x10);
    sVar7 = strlen(param_6);
    pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (pbVar10,param_6,sVar7);
    pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (pbVar10," using TurboFan",0xf);
    std::__ndk1::ios_base::getloc();
    plVar11 = (long *)std::__ndk1::locale::use_facet
                                ((locale *)local_430,(id *)&std::__ndk1::ctype<char>::id);
    cVar6 = (**(code **)(*plVar11 + 0x38))(plVar11,10);
    std::__ndk1::locale::~locale((locale *)local_430);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10,cVar6);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10);
    if ((local_4d7 >> 5 & 1) != 0) {
      TurboJsonFile::TurboJsonFile((TurboJsonFile *)local_430,&OStack_4d8,0x20);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)local_430,"{\"function\" : ",0xe);
      OptimizedCompilationInfo::GetDebugName();
      JsonPrintFunctionSource(local_430,0xffffffff,&local_698,0,param_1,0,0);
      pvVar5 = local_698;
      local_698 = (void *)0x0;
      if (pvVar5 != (void *)0x0) {
        operator_delete__(pvVar5);
      }
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)local_430,",\n\"phases\":[",0xc);
      TurboJsonFile::~TurboJsonFile((TurboJsonFile *)local_430);
    }
    PipelineImpl::Run<v8::internal::compiler::PrintGraphPhase,char_const(&)[17]>
              ((PipelineImpl *)&local_5a8,"V8.TFMachineCode");
    local_690 = &PTR__OFStream_01ca1000;
    local_640[0] = &PTR__OFStream_01ca1028;
    ppuStack_688 = &PTR__basic_streambuf_01c671a8;
    std::__ndk1::locale::~locale(alStack_680);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_640);
    if ((FLAG_redirect_code_traces != '\0') &&
       (iVar3 = *(int *)(puVar9 + 0x13), *(int *)(puVar9 + 0x13) = iVar3 + -1, iVar3 + -1 == 0)) {
      fclose((FILE *)puVar9[0x12]);
      puVar9[0x12] = 0;
    }
  }
  PipelineImpl::Run<v8::internal::compiler::CsaEarlyOptimizationPhase>((PipelineImpl *)&local_5a8);
  local_430[0] = "V8.TFCSAEarlyOptimization";
  local_690 = (undefined **)CONCAT71(local_690._1_7_,1);
  if ((*(byte *)(*(long *)(local_5a8 + 0x18) + 1) & 0x60) != 0) {
    PipelineImpl::Run<v8::internal::compiler::PrintGraphPhase,char_const*&>
              ((PipelineImpl *)&local_5a8,local_430);
  }
  if (FLAG_turbo_verify != '\0') {
    PipelineImpl::Run<v8::internal::compiler::VerifyGraphPhase,bool&>
              ((PipelineImpl *)&local_5a8,(bool *)&local_690);
  }
  PipelineImpl::Run<v8::internal::compiler::MemoryOptimizationPhase>((PipelineImpl *)&local_5a8);
  local_430[0] = "V8.TFMemoryOptimization";
  local_690 = (undefined **)CONCAT71(local_690._1_7_,1);
  if ((*(byte *)(*(long *)(local_5a8 + 0x18) + 1) & 0x60) != 0) {
    PipelineImpl::Run<v8::internal::compiler::PrintGraphPhase,char_const*&>
              ((PipelineImpl *)&local_5a8,local_430);
  }
  if (FLAG_turbo_verify != '\0') {
    PipelineImpl::Run<v8::internal::compiler::VerifyGraphPhase,bool&>
              ((PipelineImpl *)&local_5a8,(bool *)&local_690);
  }
  PipelineImpl::Run<v8::internal::compiler::CsaOptimizationPhase>((PipelineImpl *)&local_5a8);
  local_430[0] = "V8.TFCSAOptimization";
  local_690 = (undefined **)CONCAT71(local_690._1_7_,1);
  if ((*(byte *)(*(long *)(local_5a8 + 0x18) + 1) & 0x60) != 0) {
    PipelineImpl::Run<v8::internal::compiler::PrintGraphPhase,char_const*&>
              ((PipelineImpl *)&local_5a8,local_430);
  }
  if (FLAG_turbo_verify != '\0') {
    PipelineImpl::Run<v8::internal::compiler::VerifyGraphPhase,bool&>
              ((PipelineImpl *)&local_5a8,(bool *)&local_690);
  }
  PipelineImpl::Run<v8::internal::compiler::DecompressionOptimizationPhase>
            ((PipelineImpl *)&local_5a8);
  local_430[0] = "V8.TFDecompressionOptimization";
  local_690 = (undefined **)CONCAT71(local_690._1_7_,1);
  if ((*(byte *)(*(long *)(local_5a8 + 0x18) + 1) & 0x60) != 0) {
    PipelineImpl::Run<v8::internal::compiler::PrintGraphPhase,char_const*&>
              ((PipelineImpl *)&local_5a8,local_430);
  }
  if (FLAG_turbo_verify != '\0') {
    PipelineImpl::Run<v8::internal::compiler::VerifyGraphPhase,bool&>
              ((PipelineImpl *)&local_5a8,(bool *)&local_690);
  }
  local_430[0] = (char *)CONCAT71(local_430[0]._1_7_,1);
  PipelineImpl::Run<v8::internal::compiler::VerifyGraphPhase,bool>
            ((PipelineImpl *)&local_5a8,(bool *)local_430);
  PipelineImpl::ComputeScheduledGraph((PipelineImpl *)&local_5a8);
  PipelineData::PipelineData
            ((PipelineData *)local_430,aZStack_520,&OStack_4d8,param_1,
             *(AccountingAllocator **)pIVar1,local_1b0,local_168,local_1a8,local_1a0,local_b8,
             param_9);
  local_3ef = 0;
  local_6a0 = local_430;
  local_690 = param_2;
  uVar12 = PipelineImpl::SelectInstructions((PipelineImpl *)&local_6a0,(Linkage *)&local_690);
  if ((uVar12 & 1) != 0) {
    local_438 = (long *)0x0;
    PipelineImpl::AssembleCode((PipelineImpl *)&local_6a0,&local_690,&local_438);
    plVar11 = local_438;
    local_438 = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 8))();
    }
  }
  if (local_59c == '\0') {
    this_00 = (PipelineImpl *)&local_6a0;
  }
  else {
    local_5a0 = 1;
    local_690 = param_2;
    uVar12 = PipelineImpl::SelectInstructions((PipelineImpl *)&local_5a8,(Linkage *)&local_690);
    if ((uVar12 & 1) == 0) goto LAB_012a599c;
    local_438 = (long *)0x0;
    PipelineImpl::AssembleCode((PipelineImpl *)&local_5a8,&local_690,&local_438);
    plVar11 = local_438;
    local_438 = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 8))();
    }
    this_00 = (PipelineImpl *)&local_5a8;
  }
  lVar13 = PipelineImpl::FinalizeCode(this_00,true);
  if (lVar13 != 0) {
    PipelineData::~PipelineData((PipelineData *)local_430);
    if (this != (PipelineStatistics *)0x0) {
      PipelineStatistics::~PipelineStatistics(this);
      Malloced::operator_delete((Malloced *)this,extraout_x1_00);
    }
    PipelineData::~PipelineData(local_250);
    if (local_598 != (void *)0x0) {
      pvStack_590 = local_598;
      operator_delete(local_598);
    }
    if (local_540 != 0) {
      local_538 = local_540;
    }
    ZoneStats::~ZoneStats(aZStack_520);
    OptimizedCompilationInfo::~OptimizedCompilationInfo(&OStack_4d8);
    if (*(long *)(lVar4 + 0x28) == local_70) {
      return lVar13;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_012a599c:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

