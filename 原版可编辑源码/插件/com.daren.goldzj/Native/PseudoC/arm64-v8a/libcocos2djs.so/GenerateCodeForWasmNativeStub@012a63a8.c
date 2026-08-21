
/* v8::internal::compiler::Pipeline::GenerateCodeForWasmNativeStub(v8::internal::wasm::WasmEngine*,
   v8::internal::compiler::CallDescriptor*, v8::internal::compiler::MachineGraph*,
   v8::internal::Code::Kind, int, char const*, v8::internal::AssemblerOptions const&,
   v8::internal::compiler::SourcePositionTable*) */

void __thiscall
v8::internal::compiler::Pipeline::GenerateCodeForWasmNativeStub
          (CodeDesc *param_1_00,Pipeline *this,CallDescriptor *param_1,MachineGraph *param_2,
          undefined4 param_5,undefined8 param_6,char *param_7,AssemblerOptions *param_8,
          SourcePositionTable *param_9)

{
  int iVar1;
  long lVar2;
  byte *pbVar3;
  WasmInstructionBuffer *this_00;
  undefined **ppuVar4;
  char cVar5;
  undefined4 uVar6;
  size_t sVar7;
  Zone *this_01;
  CompilationStatistics *pCVar8;
  undefined8 *puVar9;
  basic_ostream *pbVar10;
  long *plVar11;
  char *pcVar12;
  ulong uVar13;
  void *pvVar14;
  NodeOriginTable *this_02;
  ulong extraout_x1;
  ulong extraout_x1_00;
  __sFILE *p_Var15;
  void *extraout_x1_01;
  Graph *pGVar16;
  long lVar17;
  PipelineStatistics *local_5e8;
  ushort local_5d8 [4];
  char *local_5d0;
  ulong local_5c8;
  byte *local_5c0;
  long *local_5b8;
  CallDescriptor *local_5b0;
  PipelineData *local_5a8;
  WasmInstructionBuffer *local_5a0;
  ZoneStats aZStack_598 [72];
  uint local_550 [40];
  Graph *local_4b0;
  undefined8 local_4a8;
  undefined **local_4a0;
  undefined **local_498;
  locale alStack_490 [8];
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  ulong local_458;
  undefined8 uStack_450;
  void *local_448;
  undefined8 uStack_440;
  undefined4 local_438;
  undefined **local_430 [17];
  undefined8 local_3a8;
  undefined4 local_3a0;
  undefined **local_398;
  undefined **local_390;
  locale alStack_388 [8];
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined **local_348;
  undefined8 local_340;
  undefined **local_338 [17];
  undefined8 local_2b0;
  undefined4 local_2a8;
  PipelineData local_250 [8];
  WasmEngine *local_248;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  pGVar16 = *(Graph **)param_2;
  sVar7 = strlen(param_7);
  OptimizedCompilationInfo::OptimizedCompilationInfo
            ((OptimizedCompilationInfo *)local_550,param_7,sVar7,*(undefined8 *)pGVar16,param_5);
  ZoneStats::ZoneStats(aZStack_598,(AccountingAllocator *)(this + 0x58));
  this_01 = *(Zone **)pGVar16;
  this_02 = *(NodeOriginTable **)(this_01 + 0x10);
  if ((ulong)(*(long *)(this_01 + 0x18) - (long)this_02) < 0x58) {
    this_02 = (NodeOriginTable *)Zone::NewExpand(this_01,0x58);
  }
  else {
    *(NodeOriginTable **)(this_01 + 0x10) = this_02 + 0x58;
  }
  NodeOriginTable::NodeOriginTable(this_02,pGVar16);
  wasm::WasmInstructionBuffer::New((WasmInstructionBuffer *)0x0,extraout_x1);
  PipelineData::PipelineData
            (local_250,aZStack_598,(WasmEngine *)this,(OptimizedCompilationInfo *)local_550,param_2,
             (PipelineStatistics *)0x0,param_9,this_02,param_8);
  if (FLAG_turbo_stats_nvp == '\0' && FLAG_turbo_stats == '\0') {
    local_5e8 = (PipelineStatistics *)0x0;
  }
  else {
    local_5e8 = Malloced::operator_new((Malloced *)0xa8,extraout_x1_00);
    pCVar8 = (CompilationStatistics *)
             wasm::WasmEngine::GetOrCreateTurboStatistics((WasmEngine *)this);
    PipelineStatistics::PipelineStatistics
              (local_5e8,(OptimizedCompilationInfo *)local_550,pCVar8,aZStack_598);
    PipelineStatistics::BeginPhaseKind(local_5e8,"V8.WasmStubCodegen");
  }
  local_5a8 = local_250;
  if ((local_550[0] & 0x6000) != 0) {
    if (local_248 == (WasmEngine *)0x0) {
      puVar9 = (undefined8 *)Isolate::GetCodeTracer();
    }
    else {
      puVar9 = (undefined8 *)wasm::WasmEngine::GetCodeTracer(local_248);
    }
    p_Var15 = (__sFILE *)puVar9[0x12];
    if (FLAG_redirect_code_traces != '\0') {
      if (p_Var15 == (__sFILE *)0x0) {
        p_Var15 = (__sFILE *)base::OS::FOpen((char *)*puVar9,"ab");
        puVar9[0x12] = p_Var15;
      }
      *(int *)(puVar9 + 0x13) = *(int *)(puVar9 + 0x13) + 1;
    }
    OFStream::OFStream((OFStream *)&local_398,p_Var15);
    pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        ((basic_ostream *)&local_398,
                         "---------------------------------------------------\n",0x34);
    pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (pbVar10,"Begin compiling method ",0x17);
    OptimizedCompilationInfo::GetDebugName();
    pcVar12 = local_5d0;
    sVar7 = strlen(local_5d0);
    pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (pbVar10,pcVar12,sVar7);
    pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (pbVar10," using TurboFan",0xf);
    std::__ndk1::ios_base::getloc();
    plVar11 = (long *)std::__ndk1::locale::use_facet
                                ((locale *)&local_4b0,(id *)&std::__ndk1::ctype<char>::id);
    cVar5 = (**(code **)(*plVar11 + 0x38))(plVar11,10);
    std::__ndk1::locale::~locale((locale *)&local_4b0);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10,cVar5);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10);
    pcVar12 = local_5d0;
    local_5d0 = (char *)0x0;
    if (pcVar12 != (char *)0x0) {
      operator_delete__(pcVar12);
    }
    local_390 = &PTR__basic_streambuf_01c671a8;
    local_348 = &PTR__OFStream_01ca1028;
    local_398 = &PTR__OFStream_01ca1000;
    std::__ndk1::locale::~locale(alStack_388);
    std::__ndk1::ios_base::~ios_base((ios_base *)&local_348);
    if ((FLAG_redirect_code_traces != '\0') &&
       (iVar1 = *(int *)(puVar9 + 0x13), *(int *)(puVar9 + 0x13) = iVar1 + -1, iVar1 + -1 == 0)) {
      fclose((FILE *)puVar9[0x12]);
      puVar9[0x12] = 0;
    }
  }
  if ((local_550[0] >> 0xe & 1) != 0) {
    local_398 = (undefined **)
                (std::__ndk1::
                 basic_ostream<char,v8::internal::StdoutStream::char_traits<char>>-in-v8::internal::
                 StdoutStream::construction_vtable + 0x18);
    local_338[0] = (undefined **)0x1ca11a0;
    std::__ndk1::ios_base::init((ios_base *)local_338,(AndroidLogStream *)&local_390);
    local_390 = &PTR__basic_streambuf_01c671a8;
    local_2a8 = 0xffffffff;
    local_2b0 = 0;
    local_398 = &PTR__StdoutStream_01ca1128;
    local_338[0] = &PTR__StdoutStream_01ca1150;
    std::__ndk1::locale::locale(alStack_388);
    local_390 = &PTR__AndroidLogStream_01cbc008;
    uStack_358 = 0;
    local_360 = 0;
    uStack_368 = 0;
    local_370 = 0;
    uStack_378 = 0;
    local_380 = 0;
    local_350 = 0;
    local_340 = 0;
    local_348 = (undefined **)0x0;
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_398,"-- wasm stub ",0xd);
    pcVar12 = (char *)Code::Kind2String(param_5);
    sVar7 = strlen(pcVar12);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_398,pcVar12,sVar7);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_398," graph -- ",10);
    std::__ndk1::ios_base::getloc();
    plVar11 = (long *)std::__ndk1::locale::use_facet
                                ((locale *)&local_4b0,(id *)&std::__ndk1::ctype<char>::id);
    cVar5 = (**(code **)(*plVar11 + 0x38))(plVar11,10);
    std::__ndk1::locale::~locale((locale *)&local_4b0);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_398,cVar5);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_398);
    local_4b0 = pGVar16;
    compiler::operator<<((basic_ostream *)&local_398,(AsRPO *)&local_4b0);
    local_398 = &PTR__StdoutStream_01ca1128;
    local_338[0] = &PTR__StdoutStream_01ca1150;
    AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_390);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_338);
  }
  if ((local_550[0] >> 0xd & 1) != 0) {
    TurboJsonFile::TurboJsonFile
              ((TurboJsonFile *)&local_398,(OptimizedCompilationInfo *)local_550,0x20);
    pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        ((basic_ostream *)&local_398,"{\"function\":\"",0xd);
    OptimizedCompilationInfo::GetDebugName();
    pGVar16 = local_4b0;
    sVar7 = strlen((char *)local_4b0);
    pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (pbVar10,(char *)pGVar16,sVar7);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (pbVar10,"\", \"source\":\"\",\n\"phases\":[",0x1a);
    pGVar16 = local_4b0;
    local_4b0 = (Graph *)0x0;
    if (pGVar16 != (Graph *)0x0) {
      operator_delete__(pGVar16);
    }
    TurboJsonFile::~TurboJsonFile((TurboJsonFile *)&local_398);
  }
  local_398 = (undefined **)0x19fcde0;
  local_4b0 = (Graph *)CONCAT71(local_4b0._1_7_,1);
  if ((*(byte *)(*(long *)(local_5a8 + 0x18) + 1) & 0x60) != 0) {
    PipelineImpl::Run<v8::internal::compiler::PrintGraphPhase,char_const*&>
              ((PipelineImpl *)&local_5a8,(char **)&local_398);
  }
  if (FLAG_turbo_verify != '\0') {
    PipelineImpl::Run<v8::internal::compiler::VerifyGraphPhase,bool&>
              ((PipelineImpl *)&local_5a8,(bool *)&local_4b0);
  }
  PipelineImpl::ComputeScheduledGraph((PipelineImpl *)&local_5a8);
  local_5b0 = param_1;
  uVar13 = PipelineImpl::SelectInstructions((PipelineImpl *)&local_5a8,(Linkage *)&local_5b0);
  if ((uVar13 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","pipeline.SelectInstructions(&linkage)");
  }
  wasm::WasmInstructionBuffer::CreateView();
  PipelineImpl::AssembleCode((PipelineImpl *)&local_5a8,&local_5b0,&local_5b8);
  plVar11 = local_5b8;
  local_5b8 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 8))();
  }
  lVar17 = *(long *)(local_5a8 + 0x68);
  *(undefined4 *)(param_1_00 + 0x40) = 0;
  *(undefined8 *)(param_1_00 + 0x28) = 0;
  *(undefined8 *)(param_1_00 + 0x20) = 0;
  *(undefined8 *)(param_1_00 + 0x38) = 0;
  *(undefined8 *)(param_1_00 + 0x30) = 0;
  *(undefined8 *)(param_1_00 + 8) = 0;
  *(undefined8 *)param_1_00 = 0;
  *(undefined8 *)(param_1_00 + 0x18) = 0;
  *(undefined8 *)(param_1_00 + 0x10) = 0;
  *(undefined8 *)(param_1_00 + 0x50) = 0;
  *(undefined8 *)(param_1_00 + 0x48) = 0;
  *(undefined8 *)(param_1_00 + 0x60) = 0;
  *(undefined8 *)(param_1_00 + 0x58) = 0;
  *(undefined8 *)(param_1_00 + 0x70) = 0;
  *(undefined8 *)(param_1_00 + 0x68) = 0;
  *(undefined8 *)(param_1_00 + 0x78) = 0;
  *(undefined4 *)(param_1_00 + 0x80) = 0xffffffff;
  param_1_00[0x86] = (CodeDesc)0x0;
  Assembler::GetCode((Assembler *)(lVar17 + 0xd0),(Isolate *)0x0,param_1_00,
                     (SafepointTableBuilder *)(lVar17 + 0x298),*(int *)(lVar17 + 0x3b8));
  wasm::WasmInstructionBuffer::ReleaseBuffer();
  ppuVar4 = local_398;
  pvVar14 = *(void **)(param_1_00 + 0x50);
  local_398 = (undefined **)0x0;
  *(undefined ***)(param_1_00 + 0x50) = ppuVar4;
  if (pvVar14 == (void *)0x0) {
    local_398 = (undefined **)0x0;
  }
  else {
    operator_delete__(pvVar14);
    ppuVar4 = local_398;
    local_398 = (undefined **)0x0;
    if (ppuVar4 != (undefined **)0x0) {
      operator_delete__(ppuVar4);
    }
  }
  CodeGenerator::GetSourcePositionTable();
  ppuVar4 = local_398;
  pvVar14 = *(void **)(param_1_00 + 0x60);
  local_398 = (undefined **)0x0;
  *(undefined ***)(param_1_00 + 0x60) = ppuVar4;
  if (pvVar14 == (void *)0x0) {
    local_398 = (undefined **)0x0;
    *(undefined ***)(param_1_00 + 0x68) = local_390;
  }
  else {
    operator_delete__(pvVar14);
    ppuVar4 = local_398;
    local_398 = (undefined **)0x0;
    *(undefined ***)(param_1_00 + 0x68) = local_390;
    if (ppuVar4 != (undefined **)0x0) {
      operator_delete__(ppuVar4);
    }
  }
  CodeGenerator::GetProtectedInstructions();
  ppuVar4 = local_398;
  pvVar14 = *(void **)(param_1_00 + 0x70);
  local_398 = (undefined **)0x0;
  *(undefined ***)(param_1_00 + 0x70) = ppuVar4;
  if (pvVar14 == (void *)0x0) {
    local_398 = (undefined **)0x0;
    *(undefined ***)(param_1_00 + 0x78) = local_390;
  }
  else {
    operator_delete__(pvVar14);
    ppuVar4 = local_398;
    local_398 = (undefined **)0x0;
    *(undefined ***)(param_1_00 + 0x78) = local_390;
    if (ppuVar4 != (undefined **)0x0) {
      operator_delete__(ppuVar4);
    }
  }
  *(undefined4 *)(param_1_00 + 0x58) = *(undefined4 *)(**(long **)(lVar17 + 0x18) + 4);
  uVar6 = CallDescriptor::GetTaggedParameterSlots(param_1);
  *(undefined4 *)(param_1_00 + 0x5c) = uVar6;
  param_1_00[0x85] = (CodeDesc)0x3;
  if ((local_550[0] >> 0xd & 1) != 0) {
    TurboJsonFile::TurboJsonFile
              ((TurboJsonFile *)&local_398,(OptimizedCompilationInfo *)local_550,1);
    pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        ((basic_ostream *)&local_398,
                         "{\"name\":\"disassembly\",\"type\":\"disassembly\"",0x2a);
    local_4b0 = (Graph *)(lVar17 + 0x460);
    pbVar10 = (basic_ostream *)compiler::operator<<(pbVar10,(BlockStartsAsJSON *)&local_4b0);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (pbVar10,"\"data\":\"",8);
    local_4b0 = (Graph *)0x1c670a0;
    local_430[0] = (undefined **)0x1c670c8;
    local_4a8 = 0;
    local_4a0 = &PTR__basic_stringstream_01c66fb0;
    std::__ndk1::ios_base::init((ios_base *)local_430,&local_498);
    local_4b0 = (Graph *)&PTR__basic_stringstream_01c66f88;
    local_430[0] = &PTR__basic_stringstream_01c66fd8;
    local_498 = &PTR__basic_streambuf_01c671a8;
    local_3a0 = 0xffffffff;
    local_3a8 = 0;
    local_4a0 = &PTR__basic_stringstream_01c66fb0;
    std::__ndk1::locale::locale(alStack_490);
    local_498 = &PTR__basic_stringbuf_01c67100;
    uStack_460 = 0;
    local_468 = 0;
    uStack_470 = 0;
    local_478 = 0;
    uStack_480 = 0;
    local_488 = 0;
    uStack_450 = 0;
    local_458 = 0;
    uStack_440 = 0;
    local_448 = (void *)0x0;
    local_438 = 0x18;
    Disassembler::Decode
              ((Disassembler *)0x0,&local_4a0,*(long *)param_1_00,
               *(long *)param_1_00 + (long)*(int *)(param_1_00 + 0x10),3,param_1_00,0);
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    pbVar3 = (byte *)((ulong)&local_5d0 | 1);
    uVar13 = (ulong)local_5d0 >> 1 & 0x7f;
    if (((ulong)local_5d0 & 1) != 0) {
      pbVar3 = local_5c0;
      uVar13 = local_5c8;
    }
    for (; uVar13 != 0; uVar13 = uVar13 - 1) {
      local_5d8[0] = (ushort)*pbVar3;
      internal::operator<<((basic_ostream *)&local_398,(AsEscapedUC16ForJSON *)local_5d8);
      pbVar3 = pbVar3 + 1;
    }
    if (((ulong)local_5d0 & 1) != 0) {
      operator_delete(local_5c0);
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_398,"\"}\n]",4);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_398,"\n}",2);
    local_4b0 = (Graph *)&PTR__basic_stringstream_01c66f88;
    local_4a0 = &PTR__basic_stringstream_01c66fb0;
    local_430[0] = &PTR__basic_stringstream_01c66fd8;
    local_498 = &PTR__basic_stringbuf_01c67100;
    if ((local_458 & 1) != 0) {
      operator_delete(local_448);
    }
    local_498 = &PTR__basic_streambuf_01c671a8;
    std::__ndk1::locale::~locale(alStack_490);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_430);
    TurboJsonFile::~TurboJsonFile((TurboJsonFile *)&local_398);
  }
  if ((local_550[0] & 0x6000) != 0) {
    if (local_248 == (WasmEngine *)0x0) {
      puVar9 = (undefined8 *)Isolate::GetCodeTracer();
    }
    else {
      puVar9 = (undefined8 *)wasm::WasmEngine::GetCodeTracer(local_248);
    }
    p_Var15 = (__sFILE *)puVar9[0x12];
    if (FLAG_redirect_code_traces != '\0') {
      if (p_Var15 == (__sFILE *)0x0) {
        p_Var15 = (__sFILE *)base::OS::FOpen((char *)*puVar9,"ab");
        puVar9[0x12] = p_Var15;
      }
      *(int *)(puVar9 + 0x13) = *(int *)(puVar9 + 0x13) + 1;
    }
    OFStream::OFStream((OFStream *)&local_398,p_Var15);
    pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        ((basic_ostream *)&local_398,
                         "---------------------------------------------------\n",0x34);
    pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (pbVar10,"Finished compiling method ",0x1a);
    OptimizedCompilationInfo::GetDebugName();
    pcVar12 = local_5d0;
    sVar7 = strlen(local_5d0);
    pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (pbVar10,pcVar12,sVar7);
    pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (pbVar10," using TurboFan",0xf);
    std::__ndk1::ios_base::getloc();
    plVar11 = (long *)std::__ndk1::locale::use_facet
                                ((locale *)&local_4b0,(id *)&std::__ndk1::ctype<char>::id);
    cVar5 = (**(code **)(*plVar11 + 0x38))(plVar11,10);
    std::__ndk1::locale::~locale((locale *)&local_4b0);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10,cVar5);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10);
    pcVar12 = local_5d0;
    local_5d0 = (char *)0x0;
    if (pcVar12 != (char *)0x0) {
      operator_delete__(pcVar12);
    }
    local_390 = &PTR__basic_streambuf_01c671a8;
    local_348 = &PTR__OFStream_01ca1028;
    local_398 = &PTR__OFStream_01ca1000;
    std::__ndk1::locale::~locale(alStack_388);
    std::__ndk1::ios_base::~ios_base((ios_base *)&local_348);
    if ((FLAG_redirect_code_traces != '\0') &&
       (iVar1 = *(int *)(puVar9 + 0x13), *(int *)(puVar9 + 0x13) = iVar1 + -1, iVar1 + -1 == 0)) {
      fclose((FILE *)puVar9[0x12]);
      puVar9[0x12] = 0;
    }
  }
  if (local_5e8 != (PipelineStatistics *)0x0) {
    PipelineStatistics::~PipelineStatistics(local_5e8);
    Malloced::operator_delete((Malloced *)local_5e8,extraout_x1_01);
  }
  PipelineData::~PipelineData(local_250);
  this_00 = local_5a0;
  local_5a0 = (WasmInstructionBuffer *)0x0;
  if (this_00 != (WasmInstructionBuffer *)0x0) {
    wasm::WasmInstructionBuffer::~WasmInstructionBuffer(this_00);
    operator_delete(this_00);
  }
  ZoneStats::~ZoneStats(aZStack_598);
  OptimizedCompilationInfo::~OptimizedCompilationInfo((OptimizedCompilationInfo *)local_550);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

