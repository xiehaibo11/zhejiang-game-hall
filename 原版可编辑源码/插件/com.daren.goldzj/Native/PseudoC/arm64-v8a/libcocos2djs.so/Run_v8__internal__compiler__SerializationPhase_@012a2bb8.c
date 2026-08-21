
/* void v8::internal::compiler::PipelineImpl::Run<v8::internal::compiler::SerializationPhase>() */

void __thiscall
v8::internal::compiler::PipelineImpl::Run<v8::internal::compiler::SerializationPhase>
          (PipelineImpl *this)

{
  PipelineStatistics *this_00;
  RuntimeCallStats *pRVar1;
  ZoneStats *this_01;
  long lVar2;
  Zone *pZVar3;
  long lVar4;
  undefined8 local_60;
  RuntimeCallStats *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  PipelineData aPStack_18 [8];
  
  lVar4 = *(long *)this;
  this_00 = *(PipelineStatistics **)(lVar4 + 0x38);
  if (this_00 != (PipelineStatistics *)0x0) {
    PipelineStatistics::BeginPhase(this_00,"V8.TFSerialization");
  }
  this_01 = *(ZoneStats **)(lVar4 + 0x30);
  lVar2 = *(long *)(lVar4 + 0xb0);
  if (lVar2 != 0) {
    local_60 = *(undefined8 *)(lVar2 + 0x30);
    *(char **)(lVar2 + 0x30) = "V8.TFSerialization";
  }
  pRVar1 = *(RuntimeCallStats **)(lVar4 + 0x1d8);
  local_38 = 0;
  uStack_40 = 0;
  local_48 = 0;
  uStack_50 = 0;
  local_58 = (RuntimeCallStats *)0x0;
  if ((pRVar1 == (RuntimeCallStats *)0x0) || (TracingFlags::runtime_stats == 0)) {
    pZVar3 = *(Zone **)this;
  }
  else {
    RuntimeCallStats::Enter(pRVar1,(RuntimeCallTimer *)&uStack_50,0xac);
    pZVar3 = *(Zone **)this;
    local_58 = pRVar1;
  }
  lVar4 = ZoneStats::NewEmptyZone(this_01,"V8.TFSerialization");
  SerializationPhase::Run(aPStack_18,pZVar3);
  if (local_58 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_58,(RuntimeCallTimer *)&uStack_50);
  }
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x30) = local_60;
  }
  if (lVar4 != 0) {
    ZoneStats::ReturnZone((Zone *)this_01);
  }
  if (this_00 != (PipelineStatistics *)0x0) {
    PipelineStatistics::EndPhase(this_00);
  }
  return;
}

