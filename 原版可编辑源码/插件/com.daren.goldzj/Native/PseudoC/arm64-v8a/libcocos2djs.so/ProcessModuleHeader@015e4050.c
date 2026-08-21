
/* v8::internal::wasm::AsyncStreamingProcessor::ProcessModuleHeader(v8::internal::Vector<unsigned
   char const>, unsigned int) */

undefined8
v8::internal::wasm::AsyncStreamingProcessor::ProcessModuleHeader
          (AsyncStreamingProcessor *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4
          )

{
  ModuleDecoder *this;
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  __shared_weak_count *local_68;
  WasmError aWStack_60 [8];
  byte local_58;
  void *local_48;
  
  this = (ModuleDecoder *)(param_1 + 8);
  ModuleDecoder::StartDecoding
            (this,*(undefined8 *)(**(long **)(param_1 + 0x18) + 0x9520),
             *(long *)(**(long **)(param_1 + 0x18) + 0xc770) + 0x58,0);
  ModuleDecoder::DecodeModuleHeader(this,param_2,param_3,param_4);
  uVar4 = ModuleDecoder::ok(this);
  if ((uVar4 & 1) == 0) {
    ModuleDecoder::FinishDecoding(this,false);
    FinishAsyncCompileJobWithError(param_1,aWStack_60);
    if ((local_58 & 1) != 0) {
      operator_delete(local_48);
    }
    if (local_68 != (__shared_weak_count *)0x0) {
      p_Var1 = local_68 + 8;
      do {
        lVar6 = *(long *)p_Var1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar3) {
          *(long *)p_Var1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*(long *)local_68 + 0x10))(local_68);
        std::__ndk1::__shared_weak_count::__release_weak(local_68);
      }
    }
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}

