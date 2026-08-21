
/* void v8::internal::compiler::PipelineImpl::Run<v8::internal::compiler::SimplifiedLoweringPhase>()
    */

void __thiscall
v8::internal::compiler::PipelineImpl::Run<v8::internal::compiler::SimplifiedLoweringPhase>
          (PipelineImpl *this)

{
  PipelineStatistics *this_00;
  RuntimeCallStats *pRVar1;
  long lVar2;
  undefined4 uVar3;
  ZoneStats *this_01;
  long lVar4;
  long lVar5;
  undefined8 local_d0;
  RuntimeCallStats *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  SimplifiedLowering aSStack_a0 [112];
  
  lVar5 = *(long *)this;
  this_00 = *(PipelineStatistics **)(lVar5 + 0x38);
  if (this_00 != (PipelineStatistics *)0x0) {
    PipelineStatistics::BeginPhase(this_00,"V8.TFSimplifiedLowering");
  }
  this_01 = *(ZoneStats **)(lVar5 + 0x30);
  lVar4 = *(long *)(lVar5 + 0xb0);
  if (lVar4 != 0) {
    local_d0 = *(undefined8 *)(lVar4 + 0x30);
    *(char **)(lVar4 + 0x30) = "V8.TFSimplifiedLowering";
  }
  pRVar1 = *(RuntimeCallStats **)(lVar5 + 0x1d8);
  local_a8 = 0;
  uStack_b0 = 0;
  local_b8 = 0;
  uStack_c0 = 0;
  local_c8 = (RuntimeCallStats *)0x0;
  if ((pRVar1 == (RuntimeCallStats *)0x0) || (TracingFlags::runtime_stats == 0)) {
    lVar5 = *(long *)this;
  }
  else {
    uVar3 = 0x491;
    if (*(int *)(pRVar1 + 0x14) == 1) {
      uVar3 = 0x492;
    }
    RuntimeCallStats::Enter(pRVar1,(RuntimeCallTimer *)&uStack_c0,uVar3);
    lVar5 = *(long *)this;
    local_c8 = pRVar1;
  }
  lVar2 = ZoneStats::NewEmptyZone(this_01,"V8.TFSimplifiedLowering");
  SimplifiedLowering::SimplifiedLowering
            (aSStack_a0,*(undefined8 *)(lVar5 + 0xd8),*(undefined8 *)(lVar5 + 0x140),lVar2,
             *(undefined8 *)(lVar5 + 0xa8),*(undefined8 *)(lVar5 + 0xb0),
             *(undefined4 *)(*(long *)(lVar5 + 0x18) + 4),*(long *)(lVar5 + 0x18) + 0x98);
  SimplifiedLowering::LowerAllNodes(aSStack_a0);
  if (local_c8 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_c8,(RuntimeCallTimer *)&uStack_c0);
  }
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x30) = local_d0;
  }
  if (lVar2 != 0) {
    ZoneStats::ReturnZone((Zone *)this_01);
  }
  if (this_00 != (PipelineStatistics *)0x0) {
    PipelineStatistics::EndPhase(this_00);
  }
  return;
}

