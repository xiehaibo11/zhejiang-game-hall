
/* v8::internal::compiler::PrintGraphPhase::Run(v8::internal::compiler::PipelineData*,
   v8::internal::Zone*, char const*) */

void __thiscall
v8::internal::compiler::PrintGraphPhase::Run
          (PrintGraphPhase *this,PipelineData *param_1,Zone *param_2,char *param_3)

{
  int iVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  basic_ostream *pbVar5;
  size_t sVar6;
  undefined8 *puVar7;
  WasmEngine *this_00;
  long *plVar8;
  __sFILE *p_Var9;
  long lVar10;
  OptimizedCompilationInfo *pOVar11;
  undefined **ppuVar12;
  undefined **local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  long local_1a8;
  undefined **local_1a0;
  undefined **ppuStack_198;
  locale alStack_190 [64];
  undefined **local_150 [31];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  pOVar11 = *(OptimizedCompilationInfo **)(param_1 + 0x18);
  ppuVar12 = *(undefined ***)(param_1 + 0xa0);
  uVar4 = *(uint *)pOVar11;
  if ((uVar4 >> 0xd & 1) != 0) {
    TurboJsonFile::TurboJsonFile((TurboJsonFile *)&local_1a0,pOVar11,1);
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_1a0,"{\"name\":\"",9);
    sVar6 = strlen(param_3);
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar5,param_3,sVar6);
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar5,"\",\"type\":\"graph\",\"data\":",0x18);
    uStack_1b0 = *(undefined8 *)(param_1 + 0xb0);
    local_1b8 = *(undefined8 *)(param_1 + 0xa8);
    local_1c0 = ppuVar12;
    pbVar5 = (basic_ostream *)compiler::operator<<(pbVar5,(GraphAsJSON *)&local_1c0);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,"},\n",3);
    this = (PrintGraphPhase *)TurboJsonFile::~TurboJsonFile((TurboJsonFile *)&local_1a0);
    uVar4 = *(uint *)pOVar11;
  }
  if ((uVar4 >> 0xf & 1) == 0) {
    if ((uVar4 >> 0xe & 1) != 0) {
      if (*(WasmEngine **)(param_1 + 8) == (WasmEngine *)0x0) {
        puVar7 = (undefined8 *)Isolate::GetCodeTracer();
      }
      else {
        puVar7 = (undefined8 *)wasm::WasmEngine::GetCodeTracer(*(WasmEngine **)(param_1 + 8));
      }
      p_Var9 = (__sFILE *)puVar7[0x12];
      if (FLAG_redirect_code_traces != '\0') {
        if (p_Var9 == (__sFILE *)0x0) {
          p_Var9 = (__sFILE *)base::OS::FOpen((char *)*puVar7,"ab");
          puVar7[0x12] = p_Var9;
        }
        *(int *)(puVar7 + 0x13) = *(int *)(puVar7 + 0x13) + 1;
      }
      OFStream::OFStream((OFStream *)&local_1a0,p_Var9);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_1a0,"-- Graph after ",0xf);
      sVar6 = strlen(param_3);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,param_3,sVar6);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5," -- ",4);
      std::__ndk1::ios_base::getloc();
      plVar8 = (long *)std::__ndk1::locale::use_facet
                                 ((locale *)&local_1c0,(id *)&std::__ndk1::ctype<char>::id);
      cVar3 = (**(code **)(*plVar8 + 0x38))(plVar8,10);
      std::__ndk1::locale::~locale((locale *)&local_1c0);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,cVar3);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5);
      local_1c0 = ppuVar12;
      compiler::operator<<((basic_ostream *)&local_1a0,(AsRPO *)&local_1c0);
      local_1a0 = &PTR__OFStream_01ca1000;
      local_150[0] = &PTR__OFStream_01ca1028;
      ppuStack_198 = &PTR__basic_streambuf_01c671a8;
      std::__ndk1::locale::~locale(alStack_190);
      this = (PrintGraphPhase *)std::__ndk1::ios_base::~ios_base((ios_base *)local_150);
      if ((FLAG_redirect_code_traces != '\0') &&
         (iVar1 = *(int *)(puVar7 + 0x13), *(int *)(puVar7 + 0x13) = iVar1 + -1, iVar1 + -1 == 0)) {
        uVar4 = fclose((FILE *)puVar7[0x12]);
        this = (PrintGraphPhase *)(ulong)uVar4;
        puVar7[0x12] = 0;
      }
    }
    goto LAB_012ac90c;
  }
  uStack_1b0 = 0;
  local_1c0 = &PTR__AccountingAllocator_01cbced0;
  local_1b8 = 0;
  lVar10 = *(long *)(param_1 + 0xe8);
  if (lVar10 == 0) {
    lVar10 = Scheduler::ComputeSchedule(param_2,*(undefined8 *)(param_1 + 0xa0),0,pOVar11 + 0x98);
    this_00 = *(WasmEngine **)(param_1 + 8);
    if (this_00 == (WasmEngine *)0x0) goto LAB_012ac7ac;
LAB_012ac784:
    puVar7 = (undefined8 *)wasm::WasmEngine::GetCodeTracer(this_00);
  }
  else {
    this_00 = *(WasmEngine **)(param_1 + 8);
    if (this_00 != (WasmEngine *)0x0) goto LAB_012ac784;
LAB_012ac7ac:
    puVar7 = (undefined8 *)Isolate::GetCodeTracer();
  }
  p_Var9 = (__sFILE *)puVar7[0x12];
  if (FLAG_redirect_code_traces != '\0') {
    if (p_Var9 == (__sFILE *)0x0) {
      p_Var9 = (__sFILE *)base::OS::FOpen((char *)*puVar7,"ab");
      puVar7[0x12] = p_Var9;
    }
    *(int *)(puVar7 + 0x13) = *(int *)(puVar7 + 0x13) + 1;
  }
  OFStream::OFStream((OFStream *)&local_1a0,p_Var9);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&local_1a0,"-- Graph after ",0xf);
  sVar6 = strlen(param_3);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,param_3,sVar6);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5," -- ",4);
  std::__ndk1::ios_base::getloc();
  plVar8 = (long *)std::__ndk1::locale::use_facet
                             ((locale *)&local_1a8,(id *)&std::__ndk1::ctype<char>::id);
  cVar3 = (**(code **)(*plVar8 + 0x38))(plVar8,10);
  std::__ndk1::locale::~locale((locale *)&local_1a8);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,cVar3);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5);
  local_1a8 = lVar10;
  compiler::operator<<((basic_ostream *)&local_1a0,(AsScheduledGraph *)&local_1a8);
  local_1a0 = &PTR__OFStream_01ca1000;
  local_150[0] = &PTR__OFStream_01ca1028;
  ppuStack_198 = &PTR__basic_streambuf_01c671a8;
  std::__ndk1::locale::~locale(alStack_190);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_150);
  if ((FLAG_redirect_code_traces != '\0') &&
     (iVar1 = *(int *)(puVar7 + 0x13), *(int *)(puVar7 + 0x13) = iVar1 + -1, iVar1 + -1 == 0)) {
    fclose((FILE *)puVar7[0x12]);
    puVar7[0x12] = 0;
  }
  this = (PrintGraphPhase *)
         AccountingAllocator::~AccountingAllocator((AccountingAllocator *)&local_1c0);
LAB_012ac90c:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}

