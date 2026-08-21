
/* v8::internal::compiler::PipelineImpl::Serialize() */

void __thiscall v8::internal::compiler::PipelineImpl::Serialize(PipelineImpl *this)

{
  int iVar1;
  long lVar2;
  char cVar3;
  basic_ostream *pbVar4;
  size_t sVar5;
  long *plVar6;
  OptimizedCompilationInfo *this_00;
  ulong uVar7;
  ulong *puVar8;
  __sFILE *p_Var9;
  undefined8 *puVar10;
  Isolate *pIVar11;
  JSHeapBroker *pJVar12;
  undefined8 *puVar13;
  char *local_1c0;
  undefined8 local_1b8;
  undefined **local_1b0;
  undefined **ppuStack_1a8;
  locale alStack_1a0 [64];
  undefined **local_160 [31];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  puVar13 = *(undefined8 **)this;
  puVar10 = puVar13;
  if ((PipelineStatistics *)puVar13[7] != (PipelineStatistics *)0x0) {
    PipelineStatistics::BeginPhaseKind
              ((PipelineStatistics *)puVar13[7],"V8.TFBrokerInitAndSerialization");
    puVar10 = *(undefined8 **)this;
  }
  if ((*(byte *)(puVar10[3] + 1) & 0x60) != 0) {
    if ((WasmEngine *)puVar13[1] == (WasmEngine *)0x0) {
      puVar10 = (undefined8 *)Isolate::GetCodeTracer();
    }
    else {
      puVar10 = (undefined8 *)wasm::WasmEngine::GetCodeTracer((WasmEngine *)puVar13[1]);
    }
    p_Var9 = (__sFILE *)puVar10[0x12];
    if (FLAG_redirect_code_traces != '\0') {
      if (p_Var9 == (__sFILE *)0x0) {
        p_Var9 = (__sFILE *)base::OS::FOpen((char *)*puVar10,"ab");
        puVar10[0x12] = p_Var9;
      }
      *(int *)(puVar10 + 0x13) = *(int *)(puVar10 + 0x13) + 1;
    }
    OFStream::OFStream((OFStream *)&local_1b0,p_Var9);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_1b0,
                        "---------------------------------------------------\n",0x34);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar4,"Begin compiling method ",0x17);
    OptimizedCompilationInfo::GetDebugName();
    sVar5 = strlen(local_1c0);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar4,local_1c0,sVar5);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar4," using TurboFan",0xf);
    std::__ndk1::ios_base::getloc();
    plVar6 = (long *)std::__ndk1::locale::use_facet
                               ((locale *)&local_1b8,(id *)&std::__ndk1::ctype<char>::id);
    cVar3 = (**(code **)(*plVar6 + 0x38))(plVar6,10);
    std::__ndk1::locale::~locale((locale *)&local_1b8);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,cVar3);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4);
    if (local_1c0 != (char *)0x0) {
      operator_delete__(local_1c0);
    }
    local_1b0 = &PTR__OFStream_01ca1000;
    local_160[0] = &PTR__OFStream_01ca1028;
    ppuStack_1a8 = &PTR__basic_streambuf_01c671a8;
    std::__ndk1::locale::~locale(alStack_1a0);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_160);
    if ((FLAG_redirect_code_traces != '\0') &&
       (iVar1 = *(int *)(puVar10 + 0x13), *(int *)(puVar10 + 0x13) = iVar1 + -1, iVar1 + -1 == 0)) {
      fclose((FILE *)puVar10[0x12]);
      puVar10[0x12] = 0;
    }
  }
  if ((*(byte *)((*(undefined8 **)this)[3] + 1) >> 5 & 1) != 0) {
    TurboCfgFile::TurboCfgFile((TurboCfgFile *)&local_1b0,(Isolate *)**(undefined8 **)this);
    local_1b8 = *(undefined8 *)(*(long *)this + 0x18);
    compiler::operator<<((basic_ostream *)&local_1b0,(AsC1VCompilation *)&local_1b8);
    TurboCfgFile::~TurboCfgFile((TurboCfgFile *)&local_1b0);
  }
  SourcePositionTable::AddDecorator((SourcePositionTable *)puVar13[0x15]);
  this_00 = (OptimizedCompilationInfo *)puVar13[3];
  if (((byte)this_00[1] >> 5 & 1) != 0) {
    NodeOriginTable::AddDecorator((NodeOriginTable *)puVar13[0x16]);
    this_00 = (OptimizedCompilationInfo *)puVar13[3];
  }
  pJVar12 = (JSHeapBroker *)puVar13[0x28];
  uVar7 = OptimizedCompilationInfo::native_context(this_00);
  pIVar11 = (Isolate *)*puVar13;
  if (*(CanonicalHandleScope **)(pIVar11 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar8 = *(ulong **)(pIVar11 + 0x95a0);
    if (puVar8 == *(ulong **)(pIVar11 + 0x95a8)) {
      puVar8 = (ulong *)HandleScope::Extend(pIVar11);
    }
    *(ulong **)(pIVar11 + 0x95a0) = puVar8 + 1;
    *puVar8 = uVar7;
  }
  else {
    puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar11 + 0x95b8),uVar7);
  }
  JSHeapBroker::SetTargetNativeContextRef(pJVar12,puVar8);
  if (FLAG_concurrent_inlining != '\0') {
    Run<v8::internal::compiler::HeapBrokerInitializationPhase>(this);
    Run<v8::internal::compiler::SerializationPhase>(this);
    JSHeapBroker::StopSerializing((JSHeapBroker *)puVar13[0x28]);
  }
  if ((PipelineStatistics *)puVar13[7] != (PipelineStatistics *)0x0) {
    PipelineStatistics::EndPhaseKind((PipelineStatistics *)puVar13[7]);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

