
/* void v8::internal::compiler::PipelineImpl::Run<v8::internal::compiler::OptimizeMovesPhase>() */

void __thiscall
v8::internal::compiler::PipelineImpl::Run<v8::internal::compiler::OptimizeMovesPhase>
          (PipelineImpl *this)

{
  PipelineStatistics *this_00;
  RuntimeCallStats *pRVar1;
  Zone *pZVar2;
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
  MoveOptimizer aMStack_a0 [16];
  long local_90;
  long local_88;
  long local_70;
  long local_68;
  long local_50;
  long local_48;
  
  lVar5 = *(long *)this;
  this_00 = *(PipelineStatistics **)(lVar5 + 0x38);
  if (this_00 != (PipelineStatistics *)0x0) {
    PipelineStatistics::BeginPhase(this_00,"V8.TFOptimizeMoves");
  }
  this_01 = *(ZoneStats **)(lVar5 + 0x30);
  lVar4 = *(long *)(lVar5 + 0xb0);
  if (lVar4 != 0) {
    local_d0 = *(undefined8 *)(lVar4 + 0x30);
    *(char **)(lVar4 + 0x30) = "V8.TFOptimizeMoves";
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
    uVar3 = 0x47f;
    if (*(int *)(pRVar1 + 0x14) == 1) {
      uVar3 = 0x480;
    }
    RuntimeCallStats::Enter(pRVar1,(RuntimeCallTimer *)&uStack_c0,uVar3);
    lVar5 = *(long *)this;
    local_c8 = pRVar1;
  }
  pZVar2 = (Zone *)ZoneStats::NewEmptyZone(this_01,"V8.TFOptimizeMoves");
  MoveOptimizer::MoveOptimizer(aMStack_a0,pZVar2,*(InstructionSequence **)(lVar5 + 0x110));
  MoveOptimizer::Run(aMStack_a0);
  if (local_50 != 0) {
    local_48 = local_50;
  }
  if (local_70 != 0) {
    local_68 = local_70;
  }
  if (local_90 != 0) {
    local_88 = local_90;
  }
  if (local_c8 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_c8,(RuntimeCallTimer *)&uStack_c0);
  }
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x30) = local_d0;
  }
  if (pZVar2 != (Zone *)0x0) {
    ZoneStats::ReturnZone((Zone *)this_01);
  }
  if (this_00 != (PipelineStatistics *)0x0) {
    PipelineStatistics::EndPhase(this_00);
  }
  return;
}

