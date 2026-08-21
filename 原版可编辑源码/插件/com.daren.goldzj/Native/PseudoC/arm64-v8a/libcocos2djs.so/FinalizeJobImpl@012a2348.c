
/* v8::internal::compiler::WasmHeapStubCompilationJob::FinalizeJobImpl(v8::internal::Isolate*) */

undefined8 __thiscall
v8::internal::compiler::WasmHeapStubCompilationJob::FinalizeJobImpl
          (WasmHeapStubCompilationJob *this,Isolate *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  CompilationDependencies *pCVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  __sFILE *p_Var7;
  char *local_140;
  undefined **local_138;
  undefined **ppuStack_130;
  locale alStack_128 [64];
  undefined **local_e8 [19];
  undefined8 local_38;
  
  puVar2 = (undefined8 *)
           PipelineImpl::FinalizeCode((PipelineImpl *)(this + 0x328),*(long *)(this + 0xe8) != 0);
  if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    V8::FatalProcessOutOfMemory(param_1,"WasmHeapStubCompilationJob::FinalizeJobImpl",false);
  }
  pCVar3 = *(CompilationDependencies **)(*(long *)(this + 0x328) + 0x138);
  if ((pCVar3 == (CompilationDependencies *)0x0) ||
     (uVar4 = CompilationDependencies::Commit(pCVar3,puVar2), (uVar4 & 1) != 0)) {
    *(undefined8 **)(this + 0x70) = puVar2;
    if (FLAG_print_opt_code != '\0') {
      puVar5 = (undefined8 *)Isolate::GetCodeTracer();
      p_Var7 = (__sFILE *)puVar5[0x12];
      if (FLAG_redirect_code_traces != '\0') {
        if (p_Var7 == (__sFILE *)0x0) {
          p_Var7 = (__sFILE *)base::OS::FOpen((char *)*puVar5,"ab");
          puVar5[0x12] = p_Var7;
        }
        *(int *)(puVar5 + 0x13) = *(int *)(puVar5 + 0x13) + 1;
      }
      OFStream::OFStream((OFStream *)&local_138,p_Var7);
      local_38 = *puVar2;
      OptimizedCompilationInfo::GetDebugName();
      Code::Disassemble((Code *)&local_38,local_140,(basic_ostream *)&local_138,param_1,0);
      if (local_140 != (char *)0x0) {
        operator_delete__(local_140);
      }
      local_138 = &PTR__OFStream_01ca1000;
      local_e8[0] = &PTR__OFStream_01ca1028;
      ppuStack_130 = &PTR__basic_streambuf_01c671a8;
      std::__ndk1::locale::~locale(alStack_128);
      std::__ndk1::ios_base::~ios_base((ios_base *)local_e8);
      if ((FLAG_redirect_code_traces != '\0') &&
         (iVar1 = *(int *)(puVar5 + 0x13), *(int *)(puVar5 + 0x13) = iVar1 + -1, iVar1 + -1 == 0)) {
        fclose((FILE *)puVar5[0x12]);
        puVar5[0x12] = 0;
        return 0;
      }
    }
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  return uVar6;
}

