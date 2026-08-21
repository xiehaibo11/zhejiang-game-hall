
/* void v8::internal::compiler::PipelineImpl::Run<v8::internal::compiler::ComputeSchedulePhase>() */

void __thiscall
v8::internal::compiler::PipelineImpl::Run<v8::internal::compiler::ComputeSchedulePhase>
          (PipelineImpl *this)

{
  PipelineStatistics *this_00;
  RuntimeCallStats *pRVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  ZoneStats *this_01;
  long lVar5;
  long lVar6;
  undefined8 local_60;
  RuntimeCallStats *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar6 = *(long *)this;
  this_00 = *(PipelineStatistics **)(lVar6 + 0x38);
  if (this_00 != (PipelineStatistics *)0x0) {
    PipelineStatistics::BeginPhase(this_00,"V8.TFScheduling");
  }
  this_01 = *(ZoneStats **)(lVar6 + 0x30);
  lVar5 = *(long *)(lVar6 + 0xb0);
  if (lVar5 != 0) {
    local_60 = *(undefined8 *)(lVar5 + 0x30);
    *(char **)(lVar5 + 0x30) = "V8.TFScheduling";
  }
  pRVar1 = *(RuntimeCallStats **)(lVar6 + 0x1d8);
  local_38 = 0;
  uStack_40 = 0;
  local_48 = 0;
  uStack_50 = 0;
  local_58 = (RuntimeCallStats *)0x0;
  if ((pRVar1 == (RuntimeCallStats *)0x0) || (TracingFlags::runtime_stats == 0)) {
    lVar6 = *(long *)this;
  }
  else {
    uVar4 = 0x48d;
    if (*(int *)(pRVar1 + 0x14) == 1) {
      uVar4 = 0x48e;
    }
    RuntimeCallStats::Enter(pRVar1,(RuntimeCallTimer *)&uStack_50,uVar4);
    lVar6 = *(long *)this;
    local_58 = pRVar1;
  }
  lVar2 = ZoneStats::NewEmptyZone(this_01,"V8.TFScheduling");
  uVar3 = Scheduler::ComputeSchedule
                    (lVar2,*(undefined8 *)(lVar6 + 0xa0),**(uint **)(lVar6 + 0x18) >> 2 & 2,
                     *(uint **)(lVar6 + 0x18) + 0x26);
  *(undefined8 *)(lVar6 + 0xe8) = uVar3;
  if (local_58 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_58,(RuntimeCallTimer *)&uStack_50);
  }
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x30) = local_60;
  }
  if (lVar2 != 0) {
    ZoneStats::ReturnZone((Zone *)this_01);
  }
  if (this_00 != (PipelineStatistics *)0x0) {
    PipelineStatistics::EndPhase(this_00);
  }
  return;
}

