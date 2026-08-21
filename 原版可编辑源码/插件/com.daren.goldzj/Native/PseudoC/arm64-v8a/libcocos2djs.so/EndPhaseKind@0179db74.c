
/* v8::internal::compiler::PipelineStatistics::EndPhaseKind() */

void __thiscall v8::internal::compiler::PipelineStatistics::EndPhaseKind(PipelineStatistics *this)

{
  byte *pbVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulong local_60;
  undefined8 uStack_58;
  void *local_50;
  long *local_40;
  long *local_38;
  
  local_50 = (void *)0x0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  CommonStats::End((CommonStats *)(this + 0x60),this,(BasicStats *)&local_80);
  CompilationStatistics::RecordPhaseKindStats
            (*(CompilationStatistics **)(this + 0x10),*(char **)(this + 0x58),
             (BasicStats *)&local_80);
  if (DAT_01d524a0 == (byte *)0x0) {
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d524a0 = (byte *)(**(code **)(*plVar2 + 0x10))
                                     (plVar2,
                                      "disabled-by-default-v8.turbofan,disabled-by-default-v8.wasm")
    ;
  }
  pbVar1 = DAT_01d524a0;
  if ((*DAT_01d524a0 & 5) != 0) {
    uVar3 = *(undefined8 *)(this + 0x58);
    local_40 = (long *)0x0;
    local_38 = (long *)0x0;
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar2 + 0x18))(plVar2,0x45,pbVar1,uVar3,0,0,0,0,0,0,0,&local_40,0);
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
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  return;
}

