
/* v8::internal::compiler::PipelineStatistics::BeginPhaseKind(char const*) */

void __thiscall
v8::internal::compiler::PipelineStatistics::BeginPhaseKind(PipelineStatistics *this,char *param_1)

{
  byte *pbVar1;
  long *plVar2;
  long *local_40;
  long *local_38;
  
  if (*(long *)(this + 0x60) != 0) {
    EndPhaseKind(this);
  }
  if (DAT_01d52498 == (byte *)0x0) {
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d52498 = (byte *)(**(code **)(*plVar2 + 0x10))
                                     (plVar2,
                                      "disabled-by-default-v8.turbofan,disabled-by-default-v8.wasm")
    ;
  }
  pbVar1 = DAT_01d52498;
  if ((*DAT_01d52498 & 5) != 0) {
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
  *(char **)(this + 0x58) = param_1;
  CommonStats::Begin((CommonStats *)(this + 0x60),this);
  return;
}

