
/* void 
   v8::internal::compiler::PipelineImpl::Run<v8::internal::compiler::ScheduledEffectControlLinearizationPhase>()
    */

void __thiscall
v8::internal::compiler::PipelineImpl::
Run<v8::internal::compiler::ScheduledEffectControlLinearizationPhase>(PipelineImpl *this)

{
  PipelineStatistics *this_00;
  RuntimeCallStats *pRVar1;
  Zone *pZVar2;
  undefined4 uVar3;
  ZoneStats *this_01;
  long lVar4;
  long lVar5;
  undefined8 local_60;
  RuntimeCallStats *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar5 = *(long *)this;
  this_00 = *(PipelineStatistics **)(lVar5 + 0x38);
  if (this_00 != (PipelineStatistics *)0x0) {
    PipelineStatistics::BeginPhase(this_00,"V8.TFScheduledEffectControlLinearization");
  }
  this_01 = *(ZoneStats **)(lVar5 + 0x30);
  lVar4 = *(long *)(lVar5 + 0xb0);
  if (lVar4 != 0) {
    local_60 = *(undefined8 *)(lVar4 + 0x30);
    *(char **)(lVar4 + 0x30) = "V8.TFScheduledEffectControlLinearization";
  }
  pRVar1 = *(RuntimeCallStats **)(lVar5 + 0x1d8);
  local_38 = 0;
  uStack_40 = 0;
  local_48 = 0;
  uStack_50 = 0;
  local_58 = (RuntimeCallStats *)0x0;
  if ((pRVar1 == (RuntimeCallStats *)0x0) || (TracingFlags::runtime_stats == 0)) {
    lVar5 = *(long *)this;
  }
  else {
    uVar3 = 0x489;
    if (*(int *)(pRVar1 + 0x14) == 1) {
      uVar3 = 0x48a;
    }
    RuntimeCallStats::Enter(pRVar1,(RuntimeCallTimer *)&uStack_50,uVar3);
    lVar5 = *(long *)this;
    local_58 = pRVar1;
  }
  pZVar2 = (Zone *)ZoneStats::NewEmptyZone(this_01,"V8.TFScheduledEffectControlLinearization");
  LinearizeEffectControl
            (*(undefined8 *)(lVar5 + 0xd8),*(undefined8 *)(lVar5 + 0xe8),pZVar2,
             *(undefined8 *)(lVar5 + 0xa8),*(undefined8 *)(lVar5 + 0xb0),
             *(int *)(*(long *)(lVar5 + 0x18) + 4) != 1,0);
  Scheduler::ComputeSpecialRPO(pZVar2,*(Schedule **)(lVar5 + 0xe8));
  if (FLAG_turbo_verify != '\0') {
    Scheduler::GenerateDominatorTree(*(Schedule **)(lVar5 + 0xe8));
  }
  FUN_012a9278(*(undefined8 *)(lVar5 + 0x18),lVar5,*(undefined8 *)(lVar5 + 0xe8),
               "effect linearization schedule");
  if (local_58 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_58,(RuntimeCallTimer *)&uStack_50);
  }
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x30) = local_60;
  }
  if (pZVar2 != (Zone *)0x0) {
    ZoneStats::ReturnZone((Zone *)this_01);
  }
  if (this_00 != (PipelineStatistics *)0x0) {
    PipelineStatistics::EndPhase(this_00);
  }
  return;
}

