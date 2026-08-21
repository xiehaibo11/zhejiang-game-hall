
/* void v8::internal::compiler::PipelineImpl::Run<v8::internal::compiler::JumpThreadingPhase,
   bool&>(bool&) */

void __thiscall
v8::internal::compiler::PipelineImpl::Run<v8::internal::compiler::JumpThreadingPhase,bool&>
          (PipelineImpl *this,bool *param_1)

{
  PipelineStatistics *this_00;
  RuntimeCallStats *pRVar1;
  Zone *pZVar2;
  ulong uVar3;
  undefined4 uVar4;
  ZoneStats *this_01;
  long lVar5;
  long lVar6;
  undefined8 local_80;
  RuntimeCallStats *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  undefined8 local_40;
  Zone *pZStack_38;
  
  lVar6 = *(long *)this;
  this_00 = *(PipelineStatistics **)(lVar6 + 0x38);
  if (this_00 != (PipelineStatistics *)0x0) {
    PipelineStatistics::BeginPhase(this_00,"V8.TFJumpThreading");
  }
  this_01 = *(ZoneStats **)(lVar6 + 0x30);
  lVar5 = *(long *)(lVar6 + 0xb0);
  if (lVar5 != 0) {
    local_80 = *(undefined8 *)(lVar5 + 0x30);
    *(char **)(lVar5 + 0x30) = "V8.TFJumpThreading";
  }
  pRVar1 = *(RuntimeCallStats **)(lVar6 + 0x1d8);
  local_58 = 0;
  uStack_60 = 0;
  local_68 = 0;
  uStack_70 = 0;
  local_78 = (RuntimeCallStats *)0x0;
  if ((pRVar1 == (RuntimeCallStats *)0x0) || (TracingFlags::runtime_stats == 0)) {
    lVar6 = *(long *)this;
  }
  else {
    uVar4 = 0x469;
    if (*(int *)(pRVar1 + 0x14) == 1) {
      uVar4 = 0x46a;
    }
    RuntimeCallStats::Enter(pRVar1,(RuntimeCallTimer *)&uStack_70,uVar4);
    lVar6 = *(long *)this;
    local_78 = pRVar1;
  }
  pZVar2 = (Zone *)ZoneStats::NewEmptyZone(this_01,"V8.TFJumpThreading");
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  pZStack_38 = pZVar2;
  uVar3 = JumpThreading::ComputeForwarding
                    (pZVar2,(ZoneVector *)&local_50,*(InstructionSequence **)(lVar6 + 0x110),
                     *param_1);
  if ((uVar3 & 1) != 0) {
    JumpThreading::ApplyForwarding
              (pZVar2,(ZoneVector *)&local_50,*(InstructionSequence **)(lVar6 + 0x110));
  }
  if (local_50 != 0) {
    local_48 = local_50;
  }
  if (local_78 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_78,(RuntimeCallTimer *)&uStack_70);
  }
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x30) = local_80;
  }
  if (pZVar2 != (Zone *)0x0) {
    ZoneStats::ReturnZone((Zone *)this_01);
  }
  if (this_00 != (PipelineStatistics *)0x0) {
    PipelineStatistics::EndPhase(this_00);
  }
  return;
}

