
/* v8::internal::compiler::WasmHeapStubCompilationJob::ExecuteJobImpl(v8::internal::RuntimeCallStats*)
    */

undefined4 __thiscall
v8::internal::compiler::WasmHeapStubCompilationJob::ExecuteJobImpl
          (WasmHeapStubCompilationJob *this,RuntimeCallStats *param_1)

{
  OptimizedCompilationInfo *pOVar1;
  PipelineImpl *this_00;
  int iVar2;
  long lVar3;
  char cVar4;
  PipelineStatistics *this_01;
  CompilationStatistics *pCVar5;
  undefined8 *puVar6;
  basic_ostream *pbVar7;
  size_t sVar8;
  long *plVar9;
  char *__s;
  ulong uVar10;
  __sFILE *p_Var11;
  void *extraout_x1;
  uint uVar12;
  undefined4 uVar13;
  char *local_1c8;
  long *local_1c0;
  undefined **local_1b8;
  undefined **local_1b0;
  locale alStack_1a8 [8];
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined **local_168;
  undefined8 local_160;
  undefined **local_158 [17];
  undefined8 local_d0;
  undefined4 local_c8;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  if (FLAG_turbo_stats_nvp == '\0' && FLAG_turbo_stats == '\0') {
    this_01 = (PipelineStatistics *)0x0;
  }
  else {
    this_01 = Malloced::operator_new((Malloced *)0xa8,(ulong)param_1);
    pCVar5 = (CompilationStatistics *)
             wasm::WasmEngine::GetOrCreateTurboStatistics(*(WasmEngine **)(this + 0x330));
    PipelineStatistics::PipelineStatistics
              (this_01,(OptimizedCompilationInfo *)(this + 0x48),pCVar5,(ZoneStats *)(this + 0xf0));
    PipelineStatistics::BeginPhaseKind(this_01,"V8.WasmStubCodegen");
  }
  pOVar1 = (OptimizedCompilationInfo *)(this + 0x48);
  if (((byte)this[0x49] & 0x60) != 0) {
    if (*(WasmEngine **)(this + 0x150) == (WasmEngine *)0x0) {
      puVar6 = (undefined8 *)Isolate::GetCodeTracer();
    }
    else {
      puVar6 = (undefined8 *)wasm::WasmEngine::GetCodeTracer(*(WasmEngine **)(this + 0x150));
    }
    p_Var11 = (__sFILE *)puVar6[0x12];
    if (FLAG_redirect_code_traces != '\0') {
      if (p_Var11 == (__sFILE *)0x0) {
        p_Var11 = (__sFILE *)base::OS::FOpen((char *)*puVar6,"ab");
        puVar6[0x12] = p_Var11;
      }
      *(int *)(puVar6 + 0x13) = *(int *)(puVar6 + 0x13) + 1;
    }
    OFStream::OFStream((OFStream *)&local_1b8,p_Var11);
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_1b8,
                        "---------------------------------------------------\n",0x34);
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar7,"Begin compiling method ",0x17);
    OptimizedCompilationInfo::GetDebugName();
    sVar8 = strlen(local_1c8);
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar7,local_1c8,sVar8);
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar7," using TurboFan",0xf);
    std::__ndk1::ios_base::getloc();
    plVar9 = (long *)std::__ndk1::locale::use_facet
                               ((locale *)&local_1c0,(id *)&std::__ndk1::ctype<char>::id);
    cVar4 = (**(code **)(*plVar9 + 0x38))(plVar9,10);
    std::__ndk1::locale::~locale((locale *)&local_1c0);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,cVar4);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7);
    if (local_1c8 != (char *)0x0) {
      operator_delete__(local_1c8);
    }
    local_1b0 = &PTR__basic_streambuf_01c671a8;
    local_168 = &PTR__OFStream_01ca1028;
    local_1b8 = &PTR__OFStream_01ca1000;
    std::__ndk1::locale::~locale(alStack_1a8);
    std::__ndk1::ios_base::~ios_base((ios_base *)&local_168);
    if ((FLAG_redirect_code_traces != '\0') &&
       (iVar2 = *(int *)(puVar6 + 0x13), *(int *)(puVar6 + 0x13) = iVar2 + -1, iVar2 + -1 == 0)) {
      fclose((FILE *)puVar6[0x12]);
      puVar6[0x12] = 0;
      uVar12 = *(uint *)pOVar1;
      goto joined_r0x012a1ef0;
    }
  }
  uVar12 = *(uint *)pOVar1;
joined_r0x012a1ef0:
  if ((uVar12 >> 0xe & 1) != 0) {
    local_1b8 = (undefined **)
                (std::__ndk1::
                 basic_ostream<char,v8::internal::StdoutStream::char_traits<char>>-in-v8::internal::
                 StdoutStream::construction_vtable + 0x18);
    local_158[0] = (undefined **)0x1ca11a0;
    std::__ndk1::ios_base::init((ios_base *)local_158,(AndroidLogStream *)&local_1b0);
    local_1b0 = &PTR__basic_streambuf_01c671a8;
    local_c8 = 0xffffffff;
    local_d0 = 0;
    local_1b8 = &PTR__StdoutStream_01ca1128;
    local_158[0] = &PTR__StdoutStream_01ca1150;
    std::__ndk1::locale::locale(alStack_1a8);
    local_1b0 = &PTR__AndroidLogStream_01cbc008;
    local_170 = 0;
    local_168 = (undefined **)0x0;
    uStack_188 = 0;
    local_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_198 = 0;
    local_1a0 = 0;
    local_160 = 0;
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_1b8,"-- wasm stub ",0xd);
    __s = (char *)Code::Kind2String(*(undefined4 *)(this + 0x50));
    sVar8 = strlen(__s);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_1b8,__s,sVar8);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_1b8," graph -- ",10);
    std::__ndk1::ios_base::getloc();
    plVar9 = (long *)std::__ndk1::locale::use_facet
                               ((locale *)&local_1c0,(id *)&std::__ndk1::ctype<char>::id);
    cVar4 = (**(code **)(*plVar9 + 0x38))(plVar9,10);
    std::__ndk1::locale::~locale((locale *)&local_1c0);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_1b8,cVar4);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_1b8);
    local_1c0 = *(long **)(this + 0x1e8);
    compiler::operator<<((basic_ostream *)&local_1b8,(AsRPO *)&local_1c0);
    local_1b8 = &PTR__StdoutStream_01ca1128;
    local_158[0] = &PTR__StdoutStream_01ca1150;
    AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_1b0);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_158);
    uVar12 = *(uint *)(this + 0x48);
  }
  if ((uVar12 >> 0xd & 1) != 0) {
    TurboJsonFile::TurboJsonFile((TurboJsonFile *)&local_1b8,pOVar1,0x20);
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_1b8,"{\"function\":\"",0xd);
    OptimizedCompilationInfo::GetDebugName();
    plVar9 = local_1c0;
    sVar8 = strlen((char *)local_1c0);
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar7,(char *)plVar9,sVar8);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (pbVar7,"\", \"source\":\"\",\n\"phases\":[",0x1a);
    plVar9 = local_1c0;
    local_1c0 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      operator_delete__(plVar9);
    }
    TurboJsonFile::~TurboJsonFile((TurboJsonFile *)&local_1b8);
  }
  local_1b8 = (undefined **)0x19fccb3;
  local_1c0 = (long *)CONCAT71(local_1c0._1_7_,1);
  this_00 = (PipelineImpl *)(this + 0x328);
  if ((*(byte *)(*(long *)(*(long *)(this + 0x328) + 0x18) + 1) & 0x60) != 0) {
    PipelineImpl::Run<v8::internal::compiler::PrintGraphPhase,char_const*&>
              (this_00,(char **)&local_1b8);
  }
  if (FLAG_turbo_verify != '\0') {
    PipelineImpl::Run<v8::internal::compiler::VerifyGraphPhase,bool&>(this_00,(bool *)&local_1c0);
  }
  PipelineImpl::ComputeScheduledGraph(this_00);
  local_1b8 = *(undefined ***)(this + 0xe8);
  uVar10 = PipelineImpl::SelectInstructions(this_00,(Linkage *)&local_1b8);
  if ((uVar10 & 1) == 0) {
    uVar13 = 1;
  }
  else {
    local_1c0 = (long *)0x0;
    PipelineImpl::AssembleCode(this_00,&local_1b8,&local_1c0);
    plVar9 = local_1c0;
    local_1c0 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
    }
    uVar13 = 0;
  }
  if (this_01 != (PipelineStatistics *)0x0) {
    PipelineStatistics::~PipelineStatistics(this_01);
    Malloced::operator_delete((Malloced *)this_01,extraout_x1);
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

