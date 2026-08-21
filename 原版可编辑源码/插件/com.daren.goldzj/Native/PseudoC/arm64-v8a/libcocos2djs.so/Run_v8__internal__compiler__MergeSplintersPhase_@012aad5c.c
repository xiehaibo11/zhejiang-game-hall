
/* void v8::internal::compiler::PipelineImpl::Run<v8::internal::compiler::MergeSplintersPhase>() */

void __thiscall
v8::internal::compiler::PipelineImpl::Run<v8::internal::compiler::MergeSplintersPhase>
          (PipelineImpl *this)

{
  PipelineStatistics *this_00;
  RuntimeCallStats *pRVar1;
  long lVar2;
  undefined4 uVar3;
  ZoneStats *this_01;
  long lVar4;
  long lVar5;
  undefined8 local_70;
  RuntimeCallStats *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  long lStack_38;
  
  lVar5 = *(long *)this;
  this_00 = *(PipelineStatistics **)(lVar5 + 0x38);
  if (this_00 != (PipelineStatistics *)0x0) {
    PipelineStatistics::BeginPhase(this_00,"V8.TFMergeSplinteredRanges");
  }
  this_01 = *(ZoneStats **)(lVar5 + 0x30);
  lVar4 = *(long *)(lVar5 + 0xb0);
  if (lVar4 != 0) {
    local_70 = *(undefined8 *)(lVar4 + 0x30);
    *(char **)(lVar4 + 0x30) = "V8.TFMergeSplinteredRanges";
  }
  pRVar1 = *(RuntimeCallStats **)(lVar5 + 0x1d8);
  local_48 = 0;
  uStack_50 = 0;
  local_58 = 0;
  uStack_60 = 0;
  local_68 = (RuntimeCallStats *)0x0;
  if ((pRVar1 == (RuntimeCallStats *)0x0) || (TracingFlags::runtime_stats == 0)) {
    lVar5 = *(long *)this;
  }
  else {
    uVar3 = 0x47d;
    if (*(int *)(pRVar1 + 0x14) == 1) {
      uVar3 = 0x47e;
    }
    RuntimeCallStats::Enter(pRVar1,(RuntimeCallTimer *)&uStack_60,uVar3);
    lVar5 = *(long *)this;
    local_68 = pRVar1;
  }
  lVar2 = ZoneStats::NewEmptyZone(this_01,"V8.TFMergeSplinteredRanges");
  local_40 = *(undefined8 *)(lVar5 + 0x170);
  lStack_38 = lVar2;
  LiveRangeMerger::Merge((LiveRangeMerger *)&local_40);
  if (local_68 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_68,(RuntimeCallTimer *)&uStack_60);
  }
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x30) = local_70;
  }
  if (lVar2 != 0) {
    ZoneStats::ReturnZone((Zone *)this_01);
  }
  if (this_00 != (PipelineStatistics *)0x0) {
    PipelineStatistics::EndPhase(this_00);
  }
  return;
}

