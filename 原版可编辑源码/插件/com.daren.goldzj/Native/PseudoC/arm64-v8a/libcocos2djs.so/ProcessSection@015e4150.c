
/* v8::internal::wasm::AsyncStreamingProcessor::ProcessSection(v8::internal::wasm::SectionCode,
   v8::internal::Vector<unsigned char const>, unsigned int) */

undefined8
v8::internal::wasm::AsyncStreamingProcessor::ProcessSection
          (AsyncStreamingProcessor *param_1,uint param_2,__shared_weak_count *param_3,long param_4,
          int param_5)

{
  ModuleDecoder *this;
  __shared_weak_count *p_Var1;
  char cVar2;
  __shared_weak_count *this_00;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined **local_98;
  __shared_weak_count *local_90;
  __shared_weak_count *local_88;
  __shared_weak_count *local_80;
  int local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  ulong local_68;
  undefined8 uStack_60;
  void *local_58;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    CommitCompilationUnits(param_1);
    FUN_015e43c0(param_1 + 0x28,0);
  }
  if ((param_2 & 0xff) == 0) {
    local_80 = param_3 + (int)param_4;
    local_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = (void *)0x0;
    local_98 = &PTR__Decoder_01cbc3a8;
    local_90 = param_3;
    local_88 = param_3;
    local_78 = param_5;
    param_2 = ModuleDecoder::IdentifyUnknownSection((Decoder *)&local_98,(uchar *)local_80);
    bVar3 = (param_2 & 0xff) != 0;
    if (bVar3) {
      param_5 = (int)((long)local_88 - (long)local_90) + param_5;
      uVar4 = (long)local_88 - (long)local_90 & 0xffffffff;
      param_3 = param_3 + uVar4;
      param_4 = param_4 - uVar4;
    }
    local_98 = &PTR__Decoder_01cbc3a8;
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
    if (!bVar3) {
      return 1;
    }
  }
  this = (ModuleDecoder *)(param_1 + 8);
  ModuleDecoder::DecodeSection(this,param_2,param_3,param_4,param_5,0);
  uVar4 = ModuleDecoder::ok(this);
  if ((uVar4 & 1) != 0) {
    return 1;
  }
  ModuleDecoder::FinishDecoding(this,false);
  FinishAsyncCompileJobWithError(param_1,(WasmError *)&local_88);
  if (((ulong)local_80 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_6c,local_70));
  }
  this_00 = local_90;
  if (local_90 != (__shared_weak_count *)0x0) {
    p_Var1 = local_90 + 8;
    do {
      lVar5 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*(long *)local_90 + 0x10))(local_90);
      std::__ndk1::__shared_weak_count::__release_weak(this_00);
    }
  }
  return 0;
}

