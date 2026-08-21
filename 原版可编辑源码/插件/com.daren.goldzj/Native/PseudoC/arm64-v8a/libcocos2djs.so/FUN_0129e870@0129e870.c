
PipelineStatistics *
FUN_0129e870(undefined8 param_1,OptimizedCompilationInfo *param_2,undefined8 param_3,
            ZoneStats *param_4)

{
  OptimizedCompilationInfo OVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  PipelineStatistics *this;
  CompilationStatistics *pCVar5;
  undefined1 auVar6 [16];
  void *local_1a8;
  TurboJsonFile aTStack_1a0 [328];
  long local_58;
  
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = DAT_01d418f0;
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (DAT_01d418f0 == (byte *)0x0) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    auVar6 = (**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.turbofan");
  }
  DAT_01d418f0 = auVar6._0_8_;
  if (((*DAT_01d418f0 & 5) == 0 && v8::internal::FLAG_turbo_stats == '\0') &&
      v8::internal::FLAG_turbo_stats_nvp == '\0') {
    this = (PipelineStatistics *)0x0;
    OVar1 = param_2[1];
  }
  else {
    this = v8::internal::Malloced::operator_new((Malloced *)0xa8,auVar6._8_8_);
    pCVar5 = (CompilationStatistics *)v8::internal::Isolate::GetTurboStatistics();
    v8::internal::compiler::PipelineStatistics::PipelineStatistics(this,param_2,pCVar5,param_4);
    v8::internal::compiler::PipelineStatistics::BeginPhaseKind(this,"V8.TFInitializing");
    OVar1 = param_2[1];
  }
  if (((byte)OVar1 >> 5 & 1) != 0) {
    v8::internal::compiler::TurboJsonFile::TurboJsonFile(aTStack_1a0,param_2,0x20);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)aTStack_1a0,"{\"function\" : ",0xe);
    v8::internal::OptimizedCompilationInfo::GetDebugName();
    v8::internal::compiler::JsonPrintFunctionSource
              (aTStack_1a0,0xffffffff,&local_1a8,param_1,param_3,*(undefined8 *)(param_2 + 0x18),0);
    pvVar3 = local_1a8;
    local_1a8 = (void *)0x0;
    if (pvVar3 != (void *)0x0) {
      operator_delete__(pvVar3);
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)aTStack_1a0,",\n\"phases\":[",0xc);
    v8::internal::compiler::TurboJsonFile::~TurboJsonFile(aTStack_1a0);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

