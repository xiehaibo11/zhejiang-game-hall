
/* v8::internal::compiler::Pipeline::GenerateCodeForWasmFunction(v8::internal::OptimizedCompilationInfo*,
   v8::internal::wasm::WasmEngine*, v8::internal::compiler::MachineGraph*,
   v8::internal::compiler::CallDescriptor*, v8::internal::compiler::SourcePositionTable*,
   v8::internal::compiler::NodeOriginTable*, v8::internal::wasm::FunctionBody,
   v8::internal::wasm::WasmModule const*, int) */

void v8::internal::compiler::Pipeline::GenerateCodeForWasmFunction
               (OptimizedCompilationInfo *param_1,WasmEngine *param_2,MachineGraph *param_3,
               CallDescriptor *param_4,SourcePositionTable *param_5,NodeOriginTable *param_6,
               undefined8 *param_7,long param_8)

{
  TickCounter *pTVar1;
  Graph *pGVar2;
  int iVar3;
  long lVar4;
  byte *pbVar5;
  Node *pNVar6;
  char *pcVar7;
  WasmInstructionBuffer *this;
  Zone *pZVar8;
  undefined **ppuVar9;
  Graph *pGVar10;
  CommonOperatorBuilder *pCVar11;
  MachineGraph *pMVar12;
  char cVar13;
  undefined4 uVar14;
  long *plVar15;
  PipelineStatistics *this_00;
  CompilationStatistics *pCVar16;
  basic_ostream *pbVar17;
  size_t sVar18;
  compiler *this_01;
  undefined8 *puVar19;
  Operator *pOVar20;
  ulong uVar21;
  CodeDesc *pCVar22;
  void *pvVar23;
  Reducer *pRVar24;
  Reducer *pRVar25;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  __sFILE *p_Var26;
  void *extraout_x1_02;
  Node *pNVar27;
  uint uVar28;
  long lVar29;
  undefined1 auVar30 [16];
  CodeDesc *local_600;
  long *local_5f8;
  Node *local_5f0;
  Node *local_5e8;
  byte *local_5e0;
  char *local_5b0 [6];
  CallDescriptor *local_580;
  ulong local_578;
  byte *local_570;
  TurboJsonFile *local_550;
  WasmInstructionBuffer *local_548;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  ZoneStats aZStack_520 [72];
  PipelineStatistics *local_4d8;
  char *local_4d0;
  ZoneStats *local_4c8;
  Zone *local_4c0;
  NodeOriginTable *local_4b8;
  undefined8 local_4b0;
  RuntimeCallStats *pRStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  ulong local_480;
  undefined8 uStack_478;
  void *local_470;
  undefined8 uStack_468;
  undefined4 local_460;
  undefined **local_458 [17];
  undefined8 local_3d0;
  undefined4 local_3c8;
  undefined **local_3c0;
  undefined **local_3b8;
  locale alStack_3b0 [8];
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  ulong local_378;
  undefined **ppuStack_370;
  void *local_368;
  undefined8 uStack_360;
  undefined4 local_358;
  undefined **local_350 [17];
  undefined8 local_2c8;
  undefined4 local_2c0;
  ushort local_278 [16];
  TurboJsonFile local_258 [8];
  WasmEngine *local_250;
  OptimizedCompilationInfo *local_240;
  ZoneStats *local_228;
  PipelineStatistics *local_220;
  Zone *local_1c0;
  Graph *local_1b8;
  CallDescriptor *local_1b0;
  NodeOriginTable *local_1a8;
  MachineOperatorBuilder *local_198;
  CommonOperatorBuilder *local_190;
  MachineGraph *local_178;
  JSHeapBroker *local_118;
  RuntimeCallStats *local_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  ZoneStats::ZoneStats(aZStack_520,(AccountingAllocator *)(param_2 + 0x58));
  auVar30._8_8_ = extraout_x1;
  auVar30._0_8_ = DAT_01d418f8;
  uStack_538 = param_7[1];
  local_540 = *param_7;
  uStack_528 = param_7[3];
  uStack_530 = param_7[2];
  if (DAT_01d418f8 == (byte *)0x0) {
    plVar15 = (long *)tracing::TraceEventHelper::GetTracingController();
    auVar30 = (**(code **)(*plVar15 + 0x10))(plVar15,"disabled-by-default-v8.wasm");
  }
  DAT_01d418f8 = auVar30._0_8_;
  if ((*DAT_01d418f8 & 5) == 0 && FLAG_turbo_stats_wasm == '\0') {
    this_00 = (PipelineStatistics *)0x0;
  }
  else {
    this_00 = Malloced::operator_new((Malloced *)0xa8,auVar30._8_8_);
    pCVar16 = (CompilationStatistics *)wasm::WasmEngine::GetOrCreateTurboStatistics(param_2);
    PipelineStatistics::PipelineStatistics(this_00,param_1,pCVar16,aZStack_520);
    PipelineStatistics::BeginPhaseKind(this_00,"V8.WasmInitializing");
    auVar30._8_8_ = extraout_x1_00;
    auVar30._0_8_ = DAT_01d418f8;
  }
  DAT_01d418f8 = auVar30._0_8_;
  if (((byte)param_1[1] >> 5 & 1) != 0) {
    TurboJsonFile::TurboJsonFile(local_258,param_1,0x20);
    OptimizedCompilationInfo::GetDebugName();
    pbVar17 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        ((basic_ostream *)local_258,"{\"function\":\"",0xd);
    pcVar7 = local_5b0[0];
    sVar18 = strlen(local_5b0[0]);
    pbVar17 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (pbVar17,pcVar7,sVar18);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (pbVar17,"\", \"source\":\"",0xd);
    local_4d0 = (char *)0x0;
    local_4c8 = (ZoneStats *)0x0;
    local_4d8 = (PipelineStatistics *)&PTR__AccountingAllocator_01cbced0;
    local_3c0 = (undefined **)
                (std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>-in-std::__ndk1::
                 basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                 ::construction_vtable + 0x18);
    local_350[0] = (undefined **)0x1c6c8d0;
    std::__ndk1::ios_base::init((ios_base *)local_350,&local_3b8);
    local_2c0 = 0xffffffff;
    local_3b8 = &PTR__basic_streambuf_01c671a8;
    local_350[0] = &PTR__basic_ostringstream_01c6c880;
    local_2c8 = 0;
    local_3c0 = &PTR__basic_ostringstream_01c6c858;
    std::__ndk1::locale::locale(alStack_3b0);
    local_3b8 = &PTR__basic_stringbuf_01c67100;
    local_5e8 = (Node *)0x0;
    local_5e0 = (byte *)0x0;
    uStack_380 = 0;
    local_388 = 0;
    uStack_390 = 0;
    local_398 = 0;
    uStack_3a0 = 0;
    local_3a8 = 0;
    ppuStack_370 = (undefined **)0x0;
    local_378 = 0;
    uStack_360 = 0;
    local_368 = (void *)0x0;
    local_358 = 0x10;
    local_5f0 = (Node *)0x0;
    wasm::PrintRawWasmCode(&local_4d8,&local_540,param_8,0,&local_3c0,&local_5f0);
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    pbVar5 = (byte *)((ulong)&local_580 | 1);
    uVar21 = (ulong)local_580 >> 1 & 0x7f;
    if (((ulong)local_580 & 1) != 0) {
      pbVar5 = local_570;
      uVar21 = local_578;
    }
    for (; uVar21 != 0; uVar21 = uVar21 - 1) {
      local_278[0] = (ushort)*pbVar5;
      internal::operator<<((basic_ostream *)local_258,(AsEscapedUC16ForJSON *)local_278);
      pbVar5 = pbVar5 + 1;
    }
    if (((ulong)local_580 & 1) != 0) {
      operator_delete(local_570);
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)local_258,"\",\n\"sourceLineToBytecodePosition\" : [",0x25);
    pNVar6 = local_5e8;
    pNVar27 = local_5f0;
    if (local_5f0 != local_5e8) {
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)local_258,*(int *)local_5f0);
      while (pNVar27 = pNVar27 + 4, pNVar27 != pNVar6) {
        iVar3 = *(int *)pNVar27;
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)local_258,", ",2);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)local_258,iVar3);
      }
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)local_258,"],\n\"phases\":[",0xd);
    if (local_5f0 != (Node *)0x0) {
      local_5e8 = local_5f0;
      operator_delete(local_5f0);
    }
    local_350[0] = &PTR__basic_ostringstream_01c6c880;
    local_3b8 = &PTR__basic_stringbuf_01c67100;
    local_3c0 = &PTR__basic_ostringstream_01c6c858;
    if ((local_378 & 1) != 0) {
      operator_delete(local_368);
    }
    local_3b8 = &PTR__basic_streambuf_01c671a8;
    std::__ndk1::locale::~locale(alStack_3b0);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_350);
    AccountingAllocator::~AccountingAllocator((AccountingAllocator *)&local_4d8);
    pcVar7 = local_5b0[0];
    local_5b0[0] = (char *)0x0;
    if (pcVar7 != (char *)0x0) {
      operator_delete__(pcVar7);
    }
    TurboJsonFile::~TurboJsonFile(local_258);
    auVar30._8_8_ = extraout_x1_01;
    auVar30._0_8_ = DAT_01d418f8;
  }
  DAT_01d418f8 = auVar30._0_8_;
  this_01 = (compiler *)wasm::WasmInstructionBuffer::New((WasmInstructionBuffer *)0x0,auVar30._8_8_)
  ;
  WasmAssemblerOptions(this_01);
  PipelineData::PipelineData
            ((PipelineData *)local_258,aZStack_520,param_2,param_1,param_3,this_00,param_5,param_6,
             (AssemblerOptions *)&local_3c0);
  local_550 = local_258;
  if (((byte)local_240[1] & 0x60) != 0) {
    if (local_250 == (WasmEngine *)0x0) {
      puVar19 = (undefined8 *)Isolate::GetCodeTracer();
    }
    else {
      puVar19 = (undefined8 *)wasm::WasmEngine::GetCodeTracer(local_250);
    }
    p_Var26 = (__sFILE *)puVar19[0x12];
    if (FLAG_redirect_code_traces != '\0') {
      if (p_Var26 == (__sFILE *)0x0) {
        p_Var26 = (__sFILE *)base::OS::FOpen((char *)*puVar19,"ab");
        puVar19[0x12] = p_Var26;
      }
      *(int *)(puVar19 + 0x13) = *(int *)(puVar19 + 0x13) + 1;
    }
    OFStream::OFStream((OFStream *)&local_3c0,p_Var26);
    pbVar17 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        ((basic_ostream *)&local_3c0,
                         "---------------------------------------------------\n",0x34);
    pbVar17 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (pbVar17,"Begin compiling method ",0x17);
    OptimizedCompilationInfo::GetDebugName();
    pNVar27 = local_5f0;
    sVar18 = strlen((char *)local_5f0);
    pbVar17 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (pbVar17,(char *)pNVar27,sVar18);
    pbVar17 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (pbVar17," using TurboFan",0xf);
    std::__ndk1::ios_base::getloc();
    plVar15 = (long *)std::__ndk1::locale::use_facet
                                ((locale *)&local_4d8,(id *)&std::__ndk1::ctype<char>::id);
    cVar13 = (**(code **)(*plVar15 + 0x38))(plVar15,10);
    std::__ndk1::locale::~locale((locale *)&local_4d8);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar17,cVar13);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar17);
    pNVar27 = local_5f0;
    local_5f0 = (Node *)0x0;
    if (pNVar27 != (Node *)0x0) {
      operator_delete__(pNVar27);
    }
    local_3b8 = &PTR__basic_streambuf_01c671a8;
    ppuStack_370 = &PTR__OFStream_01ca1028;
    local_3c0 = &PTR__OFStream_01ca1000;
    std::__ndk1::locale::~locale(alStack_3b0);
    std::__ndk1::ios_base::~ios_base((ios_base *)&ppuStack_370);
    if ((FLAG_redirect_code_traces != '\0') &&
       (iVar3 = *(int *)(puVar19 + 0x13), *(int *)(puVar19 + 0x13) = iVar3 + -1, iVar3 + -1 == 0)) {
      fclose((FILE *)puVar19[0x12]);
      puVar19[0x12] = 0;
    }
  }
  local_3c0 = (undefined **)0x19fccb3;
  local_4d8 = (PipelineStatistics *)CONCAT71(local_4d8._1_7_,1);
  if ((*(byte *)(*(long *)(local_550 + 0x18) + 1) & 0x60) != 0) {
    PipelineImpl::Run<v8::internal::compiler::PrintGraphPhase,char_const*&>
              ((PipelineImpl *)&local_550,(char **)&local_3c0);
  }
  if (FLAG_turbo_verify != '\0') {
    PipelineImpl::Run<v8::internal::compiler::VerifyGraphPhase,bool&>
              ((PipelineImpl *)&local_550,(bool *)&local_4d8);
  }
  if (local_220 != (PipelineStatistics *)0x0) {
    PipelineStatistics::BeginPhaseKind(local_220,"V8.WasmOptimization");
  }
  cVar13 = *(char *)(param_8 + 0x178);
  if ((cVar13 == '\0') && (FLAG_turbo_splitting != '\0')) {
    *(uint *)local_240 = *(uint *)local_240 | 8;
  }
  if (FLAG_wasm_opt == '\0' && cVar13 == '\0') {
    local_4d8 = local_220;
    if (local_220 != (PipelineStatistics *)0x0) {
      PipelineStatistics::BeginPhase(local_220,"V8.OptimizeWasmBaseOptimization");
    }
    local_4d0 = "V8.OptimizeWasmBaseOptimization";
    local_4c8 = local_228;
    local_4c0 = (Zone *)0x0;
    local_4b8 = local_1a8;
    if (local_1a8 != (NodeOriginTable *)0x0) {
      local_4b0 = *(undefined8 *)(local_1a8 + 0x30);
      *(char **)(local_1a8 + 0x30) = "V8.OptimizeWasmBaseOptimization";
    }
    uStack_4a0 = 0;
    pRStack_4a8 = (RuntimeCallStats *)0x0;
    local_490 = 0;
    uStack_498 = 0;
    uStack_488 = 0;
    if ((local_80 == (RuntimeCallStats *)0x0) || (TracingFlags::runtime_stats == 0)) {
LAB_012a7d94:
      local_4c0 = (Zone *)ZoneStats::NewEmptyZone(local_4c8,local_4d0);
    }
    else {
      pRStack_4a8 = local_80;
      RuntimeCallStats::Enter(local_80,&uStack_4a0,0x4a1);
      if (local_4c0 == (Zone *)0x0) goto LAB_012a7d94;
    }
    pGVar10 = local_1b8;
    pZVar8 = local_4c0;
    pNVar27 = *(Node **)(local_178 + 0x160);
    pTVar1 = (TickCounter *)(local_240 + 0x98);
    if (pNVar27 == (Node *)0x0) {
      pGVar2 = *(Graph **)local_178;
      pOVar20 = (Operator *)CommonOperatorBuilder::Dead(*(CommonOperatorBuilder **)(local_178 + 8));
      local_5f0 = (Node *)0x0;
      pNVar27 = (Node *)Graph::NewNode(pGVar2,pOVar20,0,&local_5f0,false);
      *(Node **)(local_178 + 0x160) = pNVar27;
    }
    GraphReducer::GraphReducer((GraphReducer *)&local_3c0,pZVar8,pGVar10,pTVar1,pNVar27);
    if (local_4c0 == (Zone *)0x0) {
      local_4c0 = (Zone *)ZoneStats::NewEmptyZone(local_4c8,local_4d0);
    }
    pRVar24 = (Reducer *)&local_5f0;
    ValueNumberingReducer::ValueNumberingReducer
              ((ValueNumberingReducer *)&local_5f0,local_4c0,*(Zone **)local_1b8);
    uVar28 = *(uint *)local_240;
    if ((uVar28 >> 4 & 1) != 0) {
      pRVar24 = *(Reducer **)(local_1c0 + 0x10);
      if ((ulong)(*(long *)(local_1c0 + 0x18) - (long)pRVar24) < 0x18) {
        pRVar24 = (Reducer *)Zone::NewExpand(local_1c0,0x18);
      }
      else {
        *(Reducer **)(local_1c0 + 0x10) = pRVar24 + 0x18;
      }
      *(undefined ***)pRVar24 = &PTR__Reducer_01cbe858;
      *(Node **)(pRVar24 + 8) = (Node *)&local_5f0;
      *(CallDescriptor **)(pRVar24 + 0x10) = local_1b0;
      uVar28 = *(uint *)local_240;
    }
    pRVar25 = pRVar24;
    if ((uVar28 >> 0xd & 1) != 0) {
      pRVar25 = *(Reducer **)(local_1c0 + 0x10);
      if ((ulong)(*(long *)(local_1c0 + 0x18) - (long)pRVar25) < 0x18) {
        pRVar25 = (Reducer *)Zone::NewExpand(local_1c0,0x18);
      }
      else {
        *(Reducer **)(local_1c0 + 0x10) = pRVar25 + 0x18;
      }
      *(undefined ***)pRVar25 = &PTR__Reducer_01cbe890;
      *(Reducer **)(pRVar25 + 8) = pRVar24;
      *(NodeOriginTable **)(pRVar25 + 0x10) = local_1a8;
    }
    GraphReducer::AddReducer((GraphReducer *)&local_3c0,pRVar25);
    GraphReducer::ReduceGraph((GraphReducer *)&local_3c0);
    ValueNumberingReducer::~ValueNumberingReducer((ValueNumberingReducer *)&local_5f0);
    GraphReducer::~GraphReducer((GraphReducer *)&local_3c0);
    goto joined_r0x012a7ed4;
  }
  local_4d8 = local_220;
  if (local_220 != (PipelineStatistics *)0x0) {
    PipelineStatistics::BeginPhase(local_220,"V8.WasmFullOptimization");
  }
  local_4d0 = "V8.WasmFullOptimization";
  local_4c8 = local_228;
  local_4c0 = (Zone *)0x0;
  local_4b8 = local_1a8;
  if (local_1a8 != (NodeOriginTable *)0x0) {
    local_4b0 = *(undefined8 *)(local_1a8 + 0x30);
    *(char **)(local_1a8 + 0x30) = "V8.WasmFullOptimization";
  }
  uStack_4a0 = 0;
  pRStack_4a8 = (RuntimeCallStats *)0x0;
  local_490 = 0;
  uStack_498 = 0;
  uStack_488 = 0;
  if ((local_80 == (RuntimeCallStats *)0x0) || (TracingFlags::runtime_stats == 0)) {
LAB_012a7be8:
    local_4c0 = (Zone *)ZoneStats::NewEmptyZone(local_4c8,local_4d0);
  }
  else {
    pRStack_4a8 = local_80;
    RuntimeCallStats::Enter(local_80,&uStack_4a0,0x4a3);
    if (local_4c0 == (Zone *)0x0) goto LAB_012a7be8;
  }
  pMVar12 = local_178;
  pGVar10 = local_1b8;
  pZVar8 = local_4c0;
  pNVar27 = *(Node **)(local_178 + 0x160);
  pTVar1 = (TickCounter *)(local_240 + 0x98);
  if (pNVar27 == (Node *)0x0) {
    pGVar2 = *(Graph **)local_178;
    pOVar20 = (Operator *)CommonOperatorBuilder::Dead(*(CommonOperatorBuilder **)(local_178 + 8));
    local_5f0 = (Node *)0x0;
    pNVar27 = (Node *)Graph::NewNode(pGVar2,pOVar20,0,&local_5f0,false);
    *(Node **)(pMVar12 + 0x160) = pNVar27;
  }
  GraphReducer::GraphReducer((GraphReducer *)&local_3c0,pZVar8,pGVar10,pTVar1,pNVar27);
  pCVar11 = local_190;
  pGVar10 = local_1b8;
  if (local_4c0 == (Zone *)0x0) {
    local_4c0 = (Zone *)ZoneStats::NewEmptyZone(local_4c8,local_4d0);
  }
  DeadCodeElimination::DeadCodeElimination
            ((DeadCodeElimination *)&local_580,(Editor *)&local_3c0,pGVar10,pCVar11,local_4c0);
  if (local_4c0 == (Zone *)0x0) {
    local_4c0 = (Zone *)ZoneStats::NewEmptyZone(local_4c8,local_4d0);
  }
  ValueNumberingReducer::ValueNumberingReducer
            ((ValueNumberingReducer *)local_5b0,local_4c0,*(Zone **)local_1b8);
  MachineOperatorReducer::MachineOperatorReducer
            ((MachineOperatorReducer *)local_278,(Editor *)&local_3c0,local_178,cVar13 != '\0');
  if (local_4c0 == (Zone *)0x0) {
    local_4c0 = (Zone *)ZoneStats::NewEmptyZone(local_4c8,local_4d0);
  }
  CommonOperatorReducer::CommonOperatorReducer
            ((CommonOperatorReducer *)&local_5f0,(Editor *)&local_3c0,local_1b8,local_118,local_190,
             local_198,local_4c0);
  uVar28 = *(uint *)local_240;
  if ((uVar28 >> 4 & 1) == 0) {
    pRVar24 = (Reducer *)&local_580;
  }
  else {
    pRVar24 = *(Reducer **)(local_1c0 + 0x10);
    if ((ulong)(*(long *)(local_1c0 + 0x18) - (long)pRVar24) < 0x18) {
      pRVar24 = (Reducer *)Zone::NewExpand(local_1c0,0x18);
    }
    else {
      *(Reducer **)(local_1c0 + 0x10) = pRVar24 + 0x18;
    }
    *(undefined ***)pRVar24 = &PTR__Reducer_01cbe858;
    *(CallDescriptor **)(pRVar24 + 8) = (CallDescriptor *)&local_580;
    *(CallDescriptor **)(pRVar24 + 0x10) = local_1b0;
    uVar28 = *(uint *)local_240;
  }
  pRVar25 = pRVar24;
  if ((uVar28 >> 0xd & 1) != 0) {
    pRVar25 = *(Reducer **)(local_1c0 + 0x10);
    if ((ulong)(*(long *)(local_1c0 + 0x18) - (long)pRVar25) < 0x18) {
      pRVar25 = (Reducer *)Zone::NewExpand(local_1c0,0x18);
    }
    else {
      *(Reducer **)(local_1c0 + 0x10) = pRVar25 + 0x18;
    }
    *(undefined ***)pRVar25 = &PTR__Reducer_01cbe890;
    *(Reducer **)(pRVar25 + 8) = pRVar24;
    *(NodeOriginTable **)(pRVar25 + 0x10) = local_1a8;
  }
  GraphReducer::AddReducer((GraphReducer *)&local_3c0,pRVar25);
  uVar28 = *(uint *)local_240;
  if ((uVar28 >> 4 & 1) == 0) {
    pRVar24 = (Reducer *)local_278;
  }
  else {
    pRVar24 = *(Reducer **)(local_1c0 + 0x10);
    if ((ulong)(*(long *)(local_1c0 + 0x18) - (long)pRVar24) < 0x18) {
      pRVar24 = (Reducer *)Zone::NewExpand(local_1c0,0x18);
    }
    else {
      *(Reducer **)(local_1c0 + 0x10) = pRVar24 + 0x18;
    }
    *(undefined ***)pRVar24 = &PTR__Reducer_01cbe858;
    *(ushort **)(pRVar24 + 8) = local_278;
    *(CallDescriptor **)(pRVar24 + 0x10) = local_1b0;
    uVar28 = *(uint *)local_240;
  }
  if ((uVar28 >> 0xd & 1) != 0) {
    pRVar25 = *(Reducer **)(local_1c0 + 0x10);
    if ((ulong)(*(long *)(local_1c0 + 0x18) - (long)pRVar25) < 0x18) {
      pRVar25 = (Reducer *)Zone::NewExpand(local_1c0,0x18);
    }
    else {
      *(Reducer **)(local_1c0 + 0x10) = pRVar25 + 0x18;
    }
    *(undefined ***)pRVar25 = &PTR__Reducer_01cbe890;
    *(Reducer **)(pRVar25 + 8) = pRVar24;
    *(NodeOriginTable **)(pRVar25 + 0x10) = local_1a8;
    pRVar24 = pRVar25;
  }
  GraphReducer::AddReducer((GraphReducer *)&local_3c0,pRVar24);
  uVar28 = *(uint *)local_240;
  if ((uVar28 >> 4 & 1) == 0) {
    pRVar24 = (Reducer *)&local_5f0;
  }
  else {
    pRVar24 = *(Reducer **)(local_1c0 + 0x10);
    if ((ulong)(*(long *)(local_1c0 + 0x18) - (long)pRVar24) < 0x18) {
      pRVar24 = (Reducer *)Zone::NewExpand(local_1c0,0x18);
    }
    else {
      *(Reducer **)(local_1c0 + 0x10) = pRVar24 + 0x18;
    }
    *(undefined ***)pRVar24 = &PTR__Reducer_01cbe858;
    *(Node **)(pRVar24 + 8) = (Node *)&local_5f0;
    *(CallDescriptor **)(pRVar24 + 0x10) = local_1b0;
    uVar28 = *(uint *)local_240;
  }
  if ((uVar28 >> 0xd & 1) != 0) {
    pRVar25 = *(Reducer **)(local_1c0 + 0x10);
    if ((ulong)(*(long *)(local_1c0 + 0x18) - (long)pRVar25) < 0x18) {
      pRVar25 = (Reducer *)Zone::NewExpand(local_1c0,0x18);
    }
    else {
      *(Reducer **)(local_1c0 + 0x10) = pRVar25 + 0x18;
    }
    *(undefined ***)pRVar25 = &PTR__Reducer_01cbe890;
    *(Reducer **)(pRVar25 + 8) = pRVar24;
    *(NodeOriginTable **)(pRVar25 + 0x10) = local_1a8;
    pRVar24 = pRVar25;
  }
  GraphReducer::AddReducer((GraphReducer *)&local_3c0,pRVar24);
  uVar28 = *(uint *)local_240;
  if ((uVar28 >> 4 & 1) == 0) {
    pRVar24 = (Reducer *)local_5b0;
  }
  else {
    pRVar24 = *(Reducer **)(local_1c0 + 0x10);
    if ((ulong)(*(long *)(local_1c0 + 0x18) - (long)pRVar24) < 0x18) {
      pRVar24 = (Reducer *)Zone::NewExpand(local_1c0,0x18);
    }
    else {
      *(Reducer **)(local_1c0 + 0x10) = pRVar24 + 0x18;
    }
    *(undefined ***)pRVar24 = &PTR__Reducer_01cbe858;
    *(char ***)(pRVar24 + 8) = local_5b0;
    *(CallDescriptor **)(pRVar24 + 0x10) = local_1b0;
    uVar28 = *(uint *)local_240;
  }
  if ((uVar28 >> 0xd & 1) != 0) {
    pRVar25 = *(Reducer **)(local_1c0 + 0x10);
    if ((ulong)(*(long *)(local_1c0 + 0x18) - (long)pRVar25) < 0x18) {
      pRVar25 = (Reducer *)Zone::NewExpand(local_1c0,0x18);
    }
    else {
      *(Reducer **)(local_1c0 + 0x10) = pRVar25 + 0x18;
    }
    *(undefined ***)pRVar25 = &PTR__Reducer_01cbe890;
    *(Reducer **)(pRVar25 + 8) = pRVar24;
    *(NodeOriginTable **)(pRVar25 + 0x10) = local_1a8;
    pRVar24 = pRVar25;
  }
  GraphReducer::AddReducer((GraphReducer *)&local_3c0,pRVar24);
  GraphReducer::ReduceGraph((GraphReducer *)&local_3c0);
  MachineOperatorReducer::~MachineOperatorReducer((MachineOperatorReducer *)local_278);
  ValueNumberingReducer::~ValueNumberingReducer((ValueNumberingReducer *)local_5b0);
  GraphReducer::~GraphReducer((GraphReducer *)&local_3c0);
joined_r0x012a7ed4:
  if (pRStack_4a8 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(pRStack_4a8,(RuntimeCallTimer *)&uStack_4a0);
  }
  if (local_4b8 != (NodeOriginTable *)0x0) {
    *(undefined8 *)(local_4b8 + 0x30) = local_4b0;
  }
  if (local_4c0 != (Zone *)0x0) {
    ZoneStats::ReturnZone((Zone *)local_4c8);
  }
  local_4c0 = (Zone *)0x0;
  if (local_4d8 != (PipelineStatistics *)0x0) {
    PipelineStatistics::EndPhase(local_4d8);
  }
  local_3c0 = (undefined **)0x19fce82;
  local_4d8 = (PipelineStatistics *)CONCAT71(local_4d8._1_7_,1);
  if ((*(byte *)(*(long *)(local_550 + 0x18) + 1) & 0x60) != 0) {
    PipelineImpl::Run<v8::internal::compiler::PrintGraphPhase,char_const*&>
              ((PipelineImpl *)&local_550,(char **)&local_3c0);
  }
  if (FLAG_turbo_verify != '\0') {
    PipelineImpl::Run<v8::internal::compiler::VerifyGraphPhase,bool&>
              ((PipelineImpl *)&local_550,(bool *)&local_4d8);
  }
  if (local_1a8 != (NodeOriginTable *)0x0) {
    NodeOriginTable::RemoveDecorator(local_1a8);
  }
  PipelineImpl::ComputeScheduledGraph((PipelineImpl *)&local_550);
  local_580 = param_4;
  uVar21 = PipelineImpl::SelectInstructions((PipelineImpl *)&local_550,(Linkage *)&local_580);
  if ((uVar21 & 1) != 0) {
    wasm::WasmInstructionBuffer::CreateView();
    PipelineImpl::AssembleCode((PipelineImpl *)&local_550,&local_580,&local_5f8);
    plVar15 = local_5f8;
    local_5f8 = (long *)0x0;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 8))();
    }
    pCVar22 = operator_new(0x88);
    *(undefined8 *)(pCVar22 + 0x80) = 0;
    *(undefined8 *)(pCVar22 + 8) = 0;
    *(undefined8 *)pCVar22 = 0;
    *(undefined8 *)(pCVar22 + 0x18) = 0;
    *(undefined8 *)(pCVar22 + 0x10) = 0;
    *(undefined8 *)(pCVar22 + 0x28) = 0;
    *(undefined8 *)(pCVar22 + 0x20) = 0;
    *(undefined8 *)(pCVar22 + 0x38) = 0;
    *(undefined8 *)(pCVar22 + 0x30) = 0;
    *(undefined8 *)(pCVar22 + 0x48) = 0;
    *(undefined8 *)(pCVar22 + 0x40) = 0;
    *(undefined8 *)(pCVar22 + 0x58) = 0;
    *(undefined8 *)(pCVar22 + 0x50) = 0;
    *(undefined8 *)(pCVar22 + 0x68) = 0;
    *(undefined8 *)(pCVar22 + 0x60) = 0;
    *(undefined8 *)(pCVar22 + 0x78) = 0;
    *(undefined8 *)(pCVar22 + 0x70) = 0;
    *(undefined4 *)(pCVar22 + 0x80) = 0xffffffff;
    pCVar22[0x86] = (CodeDesc)0x0;
    lVar29 = *(long *)(local_550 + 0x68);
    Assembler::GetCode((Assembler *)(lVar29 + 0xd0),(Isolate *)0x0,pCVar22,
                       (SafepointTableBuilder *)(lVar29 + 0x298),*(int *)(lVar29 + 0x3b8));
    wasm::WasmInstructionBuffer::ReleaseBuffer();
    ppuVar9 = local_3c0;
    pvVar23 = *(void **)(pCVar22 + 0x50);
    local_3c0 = (undefined **)0x0;
    *(undefined ***)(pCVar22 + 0x50) = ppuVar9;
    if (pvVar23 == (void *)0x0) {
      local_3c0 = (undefined **)0x0;
    }
    else {
      operator_delete__(pvVar23);
      ppuVar9 = local_3c0;
      local_3c0 = (undefined **)0x0;
      if (ppuVar9 != (undefined **)0x0) {
        operator_delete__(ppuVar9);
      }
    }
    *(undefined4 *)(pCVar22 + 0x58) = *(undefined4 *)(**(long **)(lVar29 + 0x18) + 4);
    uVar14 = CallDescriptor::GetTaggedParameterSlots(param_4);
    *(undefined4 *)(pCVar22 + 0x5c) = uVar14;
    CodeGenerator::GetSourcePositionTable();
    ppuVar9 = local_3c0;
    pvVar23 = *(void **)(pCVar22 + 0x60);
    local_3c0 = (undefined **)0x0;
    *(undefined ***)(pCVar22 + 0x60) = ppuVar9;
    if (pvVar23 == (void *)0x0) {
      local_3c0 = (undefined **)0x0;
      *(undefined ***)(pCVar22 + 0x68) = local_3b8;
    }
    else {
      operator_delete__(pvVar23);
      ppuVar9 = local_3c0;
      local_3c0 = (undefined **)0x0;
      *(undefined ***)(pCVar22 + 0x68) = local_3b8;
      if (ppuVar9 != (undefined **)0x0) {
        operator_delete__(ppuVar9);
      }
    }
    CodeGenerator::GetProtectedInstructions();
    ppuVar9 = local_3c0;
    pvVar23 = *(void **)(pCVar22 + 0x70);
    local_3c0 = (undefined **)0x0;
    *(undefined ***)(pCVar22 + 0x70) = ppuVar9;
    if (pvVar23 == (void *)0x0) {
      local_3c0 = (undefined **)0x0;
      *(undefined ***)(pCVar22 + 0x78) = local_3b8;
    }
    else {
      operator_delete__(pvVar23);
      ppuVar9 = local_3c0;
      local_3c0 = (undefined **)0x0;
      *(undefined ***)(pCVar22 + 0x78) = local_3b8;
      if (ppuVar9 != (undefined **)0x0) {
        operator_delete__(ppuVar9);
      }
    }
    pCVar22[0x85] = (CodeDesc)0x3;
    uVar28 = *(uint *)local_240;
    if ((uVar28 >> 0xd & 1) != 0) {
      TurboJsonFile::TurboJsonFile((TurboJsonFile *)&local_3c0,local_240,1);
      pbVar17 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          ((basic_ostream *)&local_3c0,
                           "{\"name\":\"disassembly\",\"type\":\"disassembly\"",0x2a);
      local_4d8 = (PipelineStatistics *)(lVar29 + 0x460);
      pbVar17 = (basic_ostream *)compiler::operator<<(pbVar17,(BlockStartsAsJSON *)&local_4d8);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (pbVar17,"\"data\":\"",8);
      local_4d8 = (PipelineStatistics *)0x1c670a0;
      local_458[0] = (undefined **)0x1c670c8;
      local_4d0 = (char *)0x0;
      local_4c8 = (ZoneStats *)&PTR__basic_stringstream_01c66fb0;
      std::__ndk1::ios_base::init((ios_base *)local_458,&local_4c0);
      local_4d8 = (PipelineStatistics *)&PTR__basic_stringstream_01c66f88;
      local_458[0] = &PTR__basic_stringstream_01c66fd8;
      local_4c0 = (Zone *)&PTR__basic_streambuf_01c671a8;
      local_3c8 = 0xffffffff;
      local_3d0 = 0;
      local_4c8 = (ZoneStats *)&PTR__basic_stringstream_01c66fb0;
      std::__ndk1::locale::locale((locale *)&local_4b8);
      local_4c0 = (Zone *)&PTR__basic_stringbuf_01c67100;
      uStack_488 = 0;
      local_490 = 0;
      uStack_498 = 0;
      uStack_4a0 = 0;
      pRStack_4a8 = (RuntimeCallStats *)0x0;
      local_4b0 = 0;
      uStack_478 = 0;
      local_480 = 0;
      uStack_468 = 0;
      local_470 = (void *)0x0;
      local_460 = 0x18;
      Disassembler::Decode
                ((Disassembler *)0x0,&local_4c8,*(long *)pCVar22,
                 *(long *)pCVar22 + (long)*(int *)(pCVar22 + 0x10),3,pCVar22,0);
      std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
      ::str();
      pbVar5 = (byte *)((ulong)&local_5f0 | 1);
      pNVar27 = (Node *)((ulong)local_5f0 >> 1 & 0x7f);
      if (((ulong)local_5f0 & 1) != 0) {
        pbVar5 = local_5e0;
        pNVar27 = local_5e8;
      }
      for (; pNVar27 != (Node *)0x0; pNVar27 = pNVar27 + -1) {
        uVar21 = (ulong)local_5b0[0] >> 0x10;
        local_5b0[0] = (char *)CONCAT62((int6)uVar21,(ushort)*pbVar5);
        internal::operator<<((basic_ostream *)&local_3c0,(AsEscapedUC16ForJSON *)local_5b0);
        pbVar5 = pbVar5 + 1;
      }
      if (((ulong)local_5f0 & 1) != 0) {
        operator_delete(local_5e0);
      }
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_3c0,"\"}\n]",4);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_3c0,"\n}",2);
      local_4d8 = (PipelineStatistics *)&PTR__basic_stringstream_01c66f88;
      local_4c8 = (ZoneStats *)&PTR__basic_stringstream_01c66fb0;
      local_458[0] = &PTR__basic_stringstream_01c66fd8;
      local_4c0 = (Zone *)&PTR__basic_stringbuf_01c67100;
      if ((local_480 & 1) != 0) {
        operator_delete(local_470);
      }
      local_4c0 = (Zone *)&PTR__basic_streambuf_01c671a8;
      std::__ndk1::locale::~locale((locale *)&local_4b8);
      std::__ndk1::ios_base::~ios_base((ios_base *)local_458);
      TurboJsonFile::~TurboJsonFile((TurboJsonFile *)&local_3c0);
      uVar28 = *(uint *)local_240;
    }
    if ((uVar28 & 0x6000) != 0) {
      if (local_250 == (WasmEngine *)0x0) {
        puVar19 = (undefined8 *)Isolate::GetCodeTracer();
      }
      else {
        puVar19 = (undefined8 *)wasm::WasmEngine::GetCodeTracer(local_250);
      }
      p_Var26 = (__sFILE *)puVar19[0x12];
      if (FLAG_redirect_code_traces != '\0') {
        if (p_Var26 == (__sFILE *)0x0) {
          p_Var26 = (__sFILE *)base::OS::FOpen((char *)*puVar19,"ab");
          puVar19[0x12] = p_Var26;
        }
        *(int *)(puVar19 + 0x13) = *(int *)(puVar19 + 0x13) + 1;
      }
      OFStream::OFStream((OFStream *)&local_3c0,p_Var26);
      pbVar17 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          ((basic_ostream *)&local_3c0,
                           "---------------------------------------------------\n",0x34);
      pbVar17 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          (pbVar17,"Finished compiling method ",0x1a);
      OptimizedCompilationInfo::GetDebugName();
      pNVar27 = local_5f0;
      sVar18 = strlen((char *)local_5f0);
      pbVar17 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          (pbVar17,(char *)pNVar27,sVar18);
      pbVar17 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          (pbVar17," using TurboFan",0xf);
      std::__ndk1::ios_base::getloc();
      plVar15 = (long *)std::__ndk1::locale::use_facet
                                  ((locale *)&local_4d8,(id *)&std::__ndk1::ctype<char>::id);
      cVar13 = (**(code **)(*plVar15 + 0x38))(plVar15,10);
      std::__ndk1::locale::~locale((locale *)&local_4d8);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar17,cVar13);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar17);
      pNVar27 = local_5f0;
      local_5f0 = (Node *)0x0;
      if (pNVar27 != (Node *)0x0) {
        operator_delete__(pNVar27);
      }
      local_3b8 = &PTR__basic_streambuf_01c671a8;
      ppuStack_370 = &PTR__OFStream_01ca1028;
      local_3c0 = &PTR__OFStream_01ca1000;
      std::__ndk1::locale::~locale(alStack_3b0);
      std::__ndk1::ios_base::~ios_base((ios_base *)&ppuStack_370);
      if ((FLAG_redirect_code_traces != '\0') &&
         (iVar3 = *(int *)(puVar19 + 0x13), *(int *)(puVar19 + 0x13) = iVar3 + -1, iVar3 + -1 == 0))
      {
        fclose((FILE *)puVar19[0x12]);
        puVar19[0x12] = 0;
      }
    }
    local_600 = pCVar22;
    OptimizedCompilationInfo::SetWasmCompilationResult(param_1,&local_600);
    pCVar22 = local_600;
    local_600 = (CodeDesc *)0x0;
    if (pCVar22 != (CodeDesc *)0x0) {
      pvVar23 = *(void **)(pCVar22 + 0x70);
      *(undefined8 *)(pCVar22 + 0x70) = 0;
      if (pvVar23 != (void *)0x0) {
        operator_delete__(pvVar23);
      }
      pvVar23 = *(void **)(pCVar22 + 0x60);
      *(undefined8 *)(pCVar22 + 0x60) = 0;
      if (pvVar23 != (void *)0x0) {
        operator_delete__(pvVar23);
      }
      pvVar23 = *(void **)(pCVar22 + 0x50);
      *(undefined8 *)(pCVar22 + 0x50) = 0;
      if (pvVar23 != (void *)0x0) {
        operator_delete__(pvVar23);
      }
      operator_delete(pCVar22);
    }
  }
  PipelineData::~PipelineData((PipelineData *)local_258);
  this = local_548;
  local_548 = (WasmInstructionBuffer *)0x0;
  if (this != (WasmInstructionBuffer *)0x0) {
    wasm::WasmInstructionBuffer::~WasmInstructionBuffer(this);
    operator_delete(this);
  }
  if (this_00 != (PipelineStatistics *)0x0) {
    PipelineStatistics::~PipelineStatistics(this_00);
    Malloced::operator_delete((Malloced *)this_00,extraout_x1_02);
  }
  ZoneStats::~ZoneStats(aZStack_520);
  if (*(long *)(lVar4 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

