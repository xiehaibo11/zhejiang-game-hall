
/* void 
   v8::internal::compiler::PipelineImpl::Run<v8::internal::compiler::CsaEarlyOptimizationPhase>() */

void __thiscall
v8::internal::compiler::PipelineImpl::Run<v8::internal::compiler::CsaEarlyOptimizationPhase>
          (PipelineImpl *this)

{
  PipelineStatistics *this_00;
  RuntimeCallStats *pRVar1;
  Zone *pZVar2;
  undefined4 uVar3;
  ZoneStats *this_01;
  long lVar4;
  PipelineData *pPVar5;
  long lVar6;
  undefined8 local_60;
  RuntimeCallStats *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  CsaEarlyOptimizationPhase aCStack_18 [8];
  
  lVar6 = *(long *)this;
  this_00 = *(PipelineStatistics **)(lVar6 + 0x38);
  if (this_00 != (PipelineStatistics *)0x0) {
    PipelineStatistics::BeginPhase(this_00,"V8.TFCSAEarlyOptimization");
  }
  this_01 = *(ZoneStats **)(lVar6 + 0x30);
  lVar4 = *(long *)(lVar6 + 0xb0);
  if (lVar4 != 0) {
    local_60 = *(undefined8 *)(lVar4 + 0x30);
    *(char **)(lVar4 + 0x30) = "V8.TFCSAEarlyOptimization";
  }
  pRVar1 = *(RuntimeCallStats **)(lVar6 + 0x1d8);
  local_38 = 0;
  uStack_40 = 0;
  local_48 = 0;
  uStack_50 = 0;
  local_58 = (RuntimeCallStats *)0x0;
  if ((pRVar1 == (RuntimeCallStats *)0x0) || (TracingFlags::runtime_stats == 0)) {
    pPVar5 = *(PipelineData **)this;
  }
  else {
    uVar3 = 0x44f;
    if (*(int *)(pRVar1 + 0x14) == 1) {
      uVar3 = 0x450;
    }
    RuntimeCallStats::Enter(pRVar1,(RuntimeCallTimer *)&uStack_50,uVar3);
    pPVar5 = *(PipelineData **)this;
    local_58 = pRVar1;
  }
  pZVar2 = (Zone *)ZoneStats::NewEmptyZone(this_01,"V8.TFCSAEarlyOptimization");
  CsaEarlyOptimizationPhase::Run(aCStack_18,pPVar5,pZVar2);
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

