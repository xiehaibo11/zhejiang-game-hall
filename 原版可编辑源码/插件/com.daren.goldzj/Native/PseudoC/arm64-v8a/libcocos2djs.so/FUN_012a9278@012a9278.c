
void FUN_012a9278(OptimizedCompilationInfo *param_1,long param_2,Schedule *param_3,char *param_4)

{
  int iVar1;
  long lVar2;
  byte *pbVar3;
  ulong uVar4;
  uint uVar5;
  basic_ostream *pbVar6;
  size_t sVar7;
  OptimizedCompilationInfo *pOVar8;
  undefined8 *puVar9;
  __sFILE *p_Var10;
  ushort local_2f0 [4];
  byte local_2e8 [8];
  ulong local_2e0;
  byte *local_2d8;
  undefined **local_2d0;
  undefined8 local_2c8;
  undefined **local_2c0;
  undefined **local_2b8;
  locale alStack_2b0 [8];
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  ulong local_278;
  undefined8 uStack_270;
  void *local_268;
  undefined8 uStack_260;
  undefined4 local_258;
  undefined **local_250 [17];
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined **local_1b8;
  undefined **ppuStack_1b0;
  locale alStack_1a8 [64];
  undefined **local_168 [31];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  uVar5 = *(uint *)param_1;
  pOVar8 = param_1;
  if ((uVar5 >> 0xd & 1) != 0) {
    v8::internal::compiler::TurboJsonFile::TurboJsonFile((TurboJsonFile *)&local_1b8,param_1,1);
    pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_1b8,"{\"name\":\"",9);
    sVar7 = strlen(param_4);
    pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar6,param_4,sVar7);
    pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar6,"\",\"type\":\"schedule\"",0x13);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (pbVar6,",\"data\":\"",9);
    local_2d0 = (undefined **)0x1c670a0;
    local_250[0] = (undefined **)0x1c670c8;
    local_2c8 = 0;
    local_2c0 = &PTR__basic_stringstream_01c66fb0;
    std::__ndk1::ios_base::init((ios_base *)local_250,&local_2b8);
    local_2d0 = &PTR__basic_stringstream_01c66f88;
    local_250[0] = &PTR__basic_stringstream_01c66fd8;
    local_2b8 = &PTR__basic_streambuf_01c671a8;
    local_1c0 = 0xffffffff;
    local_1c8 = 0;
    local_2c0 = &PTR__basic_stringstream_01c66fb0;
    std::__ndk1::locale::locale(alStack_2b0);
    local_2b8 = &PTR__basic_stringbuf_01c67100;
    uStack_280 = 0;
    local_288 = 0;
    uStack_290 = 0;
    local_298 = 0;
    uStack_2a0 = 0;
    local_2a8 = 0;
    uStack_270 = 0;
    local_278 = 0;
    uStack_260 = 0;
    local_268 = (void *)0x0;
    local_258 = 0x18;
    v8::internal::compiler::operator<<((basic_ostream *)&local_2c0,param_3);
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    pbVar3 = (byte *)((ulong)local_2e8 | 1);
    uVar4 = (ulong)(local_2e8[0] >> 1);
    if ((local_2e8[0] & 1) != 0) {
      pbVar3 = local_2d8;
      uVar4 = local_2e0;
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      local_2f0[0] = (ushort)*pbVar3;
      v8::internal::operator<<((basic_ostream *)&local_1b8,(AsEscapedUC16ForJSON *)local_2f0);
      pbVar3 = pbVar3 + 1;
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_1b8,"\"},\n",4);
    if ((local_2e8[0] & 1) != 0) {
      operator_delete(local_2d8);
    }
    local_2d0 = &PTR__basic_stringstream_01c66f88;
    local_2c0 = &PTR__basic_stringstream_01c66fb0;
    local_250[0] = &PTR__basic_stringstream_01c66fd8;
    local_2b8 = &PTR__basic_stringbuf_01c67100;
    if ((local_278 & 1) != 0) {
      operator_delete(local_268);
    }
    local_2b8 = &PTR__basic_streambuf_01c671a8;
    std::__ndk1::locale::~locale(alStack_2b0);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_250);
    pOVar8 = (OptimizedCompilationInfo *)
             v8::internal::compiler::TurboJsonFile::~TurboJsonFile((TurboJsonFile *)&local_1b8);
    uVar5 = *(uint *)param_1;
  }
  if (((uVar5 >> 0xe & 1) != 0) || (v8::internal::FLAG_trace_turbo_scheduler != '\0')) {
    if (*(WasmEngine **)(param_2 + 8) == (WasmEngine *)0x0) {
      puVar9 = (undefined8 *)v8::internal::Isolate::GetCodeTracer();
    }
    else {
      puVar9 = (undefined8 *)
               v8::internal::wasm::WasmEngine::GetCodeTracer(*(WasmEngine **)(param_2 + 8));
    }
    p_Var10 = (__sFILE *)puVar9[0x12];
    if (v8::internal::FLAG_redirect_code_traces != '\0') {
      if (p_Var10 == (__sFILE *)0x0) {
        p_Var10 = (__sFILE *)v8::base::OS::FOpen((char *)*puVar9,"ab");
        puVar9[0x12] = p_Var10;
      }
      *(int *)(puVar9 + 0x13) = *(int *)(puVar9 + 0x13) + 1;
    }
    v8::internal::OFStream::OFStream((OFStream *)&local_1b8,p_Var10);
    pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_1b8,
                        "-- Schedule --------------------------------------\n",0x33);
    v8::internal::compiler::operator<<(pbVar6,param_3);
    ppuStack_1b0 = &PTR__basic_streambuf_01c671a8;
    local_1b8 = &PTR__OFStream_01ca1000;
    local_168[0] = &PTR__OFStream_01ca1028;
    std::__ndk1::locale::~locale(alStack_1a8);
    pOVar8 = (OptimizedCompilationInfo *)std::__ndk1::ios_base::~ios_base((ios_base *)local_168);
    if ((v8::internal::FLAG_redirect_code_traces != '\0') &&
       (iVar1 = *(int *)(puVar9 + 0x13), *(int *)(puVar9 + 0x13) = iVar1 + -1, iVar1 + -1 == 0)) {
      uVar5 = fclose((FILE *)puVar9[0x12]);
      pOVar8 = (OptimizedCompilationInfo *)(ulong)uVar5;
      puVar9[0x12] = 0;
    }
  }
  if (v8::internal::FLAG_turbo_verify != '\0') {
    pOVar8 = (OptimizedCompilationInfo *)v8::internal::compiler::ScheduleVerifier::Run(param_3);
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pOVar8);
  }
  return;
}

