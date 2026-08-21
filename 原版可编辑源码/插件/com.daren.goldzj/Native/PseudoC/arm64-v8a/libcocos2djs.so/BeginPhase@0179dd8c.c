
/* v8::internal::compiler::PipelineStatistics::BeginPhase(char const*) */

void __thiscall
v8::internal::compiler::PipelineStatistics::BeginPhase(PipelineStatistics *this,char *param_1)

{
  byte *pbVar1;
  long *plVar2;
  long *local_40;
  long *local_38;
  
  if (DAT_01d524a8 == (byte *)0x0) {
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d524a8 = (byte *)(**(code **)(*plVar2 + 0x10))
                                     (plVar2,
                                      "disabled-by-default-v8.turbofan,disabled-by-default-v8.wasm")
    ;
  }
  pbVar1 = DAT_01d524a8;
  if ((*DAT_01d524a8 & 5) != 0) {
    local_40 = (long *)0x0;
    local_38 = (long *)0x0;
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar2 + 0x18))(plVar2,0x42,pbVar1,param_1,0,0,0,0,0,0,0,&local_40,0);
    plVar2 = local_38;
    local_38 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = local_40;
    local_40 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  *(char **)(this + 0x80) = param_1;
  CommonStats::Begin((CommonStats *)(this + 0x88),this);
  return;
}

