
/* void 
   v8::internal::compiler::PipelineImpl::Run<v8::internal::compiler::CopyMetadataForConcurrentCompilePhase>()
    */

void __thiscall
v8::internal::compiler::PipelineImpl::
Run<v8::internal::compiler::CopyMetadataForConcurrentCompilePhase>(PipelineImpl *this)

{
  PipelineStatistics *this_00;
  RuntimeCallStats *pRVar1;
  Zone *pZVar2;
  ZoneStats *this_01;
  long lVar3;
  PipelineData *pPVar4;
  long lVar5;
  undefined8 local_60;
  RuntimeCallStats *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  CopyMetadataForConcurrentCompilePhase aCStack_18 [8];
  
  lVar5 = *(long *)this;
  this_00 = *(PipelineStatistics **)(lVar5 + 0x38);
  if (this_00 != (PipelineStatistics *)0x0) {
    PipelineStatistics::BeginPhase(this_00,"V8.TFSerializeMetadata");
  }
  this_01 = *(ZoneStats **)(lVar5 + 0x30);
  lVar3 = *(long *)(lVar5 + 0xb0);
  if (lVar3 != 0) {
    local_60 = *(undefined8 *)(lVar3 + 0x30);
    *(char **)(lVar3 + 0x30) = "V8.TFSerializeMetadata";
  }
  pRVar1 = *(RuntimeCallStats **)(lVar5 + 0x1d8);
  local_38 = 0;
  uStack_40 = 0;
  local_48 = 0;
  uStack_50 = 0;
  local_58 = (RuntimeCallStats *)0x0;
  if ((pRVar1 == (RuntimeCallStats *)0x0) || (TracingFlags::runtime_stats == 0)) {
    pPVar4 = *(PipelineData **)this;
  }
  else {
    RuntimeCallStats::Enter(pRVar1,(RuntimeCallTimer *)&uStack_50,0xad);
    pPVar4 = *(PipelineData **)this;
    local_58 = pRVar1;
  }
  pZVar2 = (Zone *)ZoneStats::NewEmptyZone(this_01,"V8.TFSerializeMetadata");
  CopyMetadataForConcurrentCompilePhase::Run(aCStack_18,pPVar4,pZVar2);
  if (local_58 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_58,(RuntimeCallTimer *)&uStack_50);
  }
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x30) = local_60;
  }
  if (pZVar2 != (Zone *)0x0) {
    ZoneStats::ReturnZone((Zone *)this_01);
  }
  if (this_00 != (PipelineStatistics *)0x0) {
    PipelineStatistics::EndPhase(this_00);
  }
  return;
}

