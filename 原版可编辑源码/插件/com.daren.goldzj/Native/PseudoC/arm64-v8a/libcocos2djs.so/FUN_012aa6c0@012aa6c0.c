
void FUN_012aa6c0(OptimizedCompilationInfo *param_1,long param_2,char *param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  basic_ostream *pbVar4;
  size_t sVar5;
  OptimizedCompilationInfo *pOVar6;
  undefined8 *puVar7;
  __sFILE *p_Var8;
  undefined8 local_1a8;
  undefined **local_1a0;
  undefined **ppuStack_198;
  locale alStack_190 [64];
  undefined **local_150 [31];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar3 = *(uint *)param_1;
  pOVar6 = param_1;
  if ((uVar3 >> 0xd & 1) != 0) {
    v8::internal::compiler::TurboJsonFile::TurboJsonFile((TurboJsonFile *)&local_1a0,param_1,1);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_1a0,"{\"name\":\"",9);
    sVar5 = strlen(param_3);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar4,param_3,sVar5);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (pbVar4,"\",\"type\":\"sequence\",",0x14);
    local_1a8 = *(undefined8 *)(param_2 + 0x110);
    v8::internal::compiler::operator<<
              ((basic_ostream *)&local_1a0,(InstructionSequenceAsJSON *)&local_1a8);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_1a0,"},\n",3);
    pOVar6 = (OptimizedCompilationInfo *)
             v8::internal::compiler::TurboJsonFile::~TurboJsonFile((TurboJsonFile *)&local_1a0);
    uVar3 = *(uint *)param_1;
  }
  if ((uVar3 >> 0xe & 1) != 0) {
    if (*(WasmEngine **)(param_2 + 8) == (WasmEngine *)0x0) {
      puVar7 = (undefined8 *)v8::internal::Isolate::GetCodeTracer();
    }
    else {
      puVar7 = (undefined8 *)
               v8::internal::wasm::WasmEngine::GetCodeTracer(*(WasmEngine **)(param_2 + 8));
    }
    p_Var8 = (__sFILE *)puVar7[0x12];
    if (v8::internal::FLAG_redirect_code_traces != '\0') {
      if (p_Var8 == (__sFILE *)0x0) {
        p_Var8 = (__sFILE *)v8::base::OS::FOpen((char *)*puVar7,"ab");
        puVar7[0x12] = p_Var8;
      }
      *(int *)(puVar7 + 0x13) = *(int *)(puVar7 + 0x13) + 1;
    }
    v8::internal::OFStream::OFStream((OFStream *)&local_1a0,p_Var8);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_1a0,"----- Instruction sequence ",0x1b);
    sVar5 = strlen(param_3);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar4,param_3,sVar5);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar4," -----\n",7);
    v8::internal::compiler::operator<<(pbVar4,*(InstructionSequence **)(param_2 + 0x110));
    local_1a0 = &PTR__OFStream_01ca1000;
    local_150[0] = &PTR__OFStream_01ca1028;
    ppuStack_198 = &PTR__basic_streambuf_01c671a8;
    std::__ndk1::locale::~locale(alStack_190);
    pOVar6 = (OptimizedCompilationInfo *)std::__ndk1::ios_base::~ios_base((ios_base *)local_150);
    if ((v8::internal::FLAG_redirect_code_traces != '\0') &&
       (iVar1 = *(int *)(puVar7 + 0x13), *(int *)(puVar7 + 0x13) = iVar1 + -1, iVar1 + -1 == 0)) {
      uVar3 = fclose((FILE *)puVar7[0x12]);
      pOVar6 = (OptimizedCompilationInfo *)(ulong)uVar3;
      puVar7[0x12] = 0;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pOVar6);
}

