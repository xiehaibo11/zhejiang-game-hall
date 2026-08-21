
/* void v8::internal::compiler::PipelineImpl::Run<v8::internal::compiler::EarlyGraphTrimmingPhase>()
    */

void __thiscall
v8::internal::compiler::PipelineImpl::Run<v8::internal::compiler::EarlyGraphTrimmingPhase>
          (PipelineImpl *this)

{
  PipelineStatistics *this_00;
  RuntimeCallStats *pRVar1;
  Zone *pZVar2;
  undefined4 uVar3;
  ZoneStats *this_01;
  long lVar4;
  long lVar5;
  undefined8 local_b0;
  RuntimeCallStats *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long local_80;
  long local_78;
  undefined8 local_70;
  Zone *pZStack_68;
  GraphTrimmer aGStack_60 [48];
  
  lVar5 = *(long *)this;
  this_00 = *(PipelineStatistics **)(lVar5 + 0x38);
  if (this_00 != (PipelineStatistics *)0x0) {
    PipelineStatistics::BeginPhase(this_00,"V8.TFEarlyTrimming");
  }
  this_01 = *(ZoneStats **)(lVar5 + 0x30);
  lVar4 = *(long *)(lVar5 + 0xb0);
  if (lVar4 != 0) {
    local_b0 = *(undefined8 *)(lVar4 + 0x30);
    *(char **)(lVar4 + 0x30) = "V8.TFEarlyTrimming";
  }
  pRVar1 = *(RuntimeCallStats **)(lVar5 + 0x1d8);
  local_88 = 0;
  uStack_90 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_a8 = (RuntimeCallStats *)0x0;
  if ((pRVar1 == (RuntimeCallStats *)0x0) || (TracingFlags::runtime_stats == 0)) {
    lVar5 = *(long *)this;
  }
  else {
    uVar3 = 0x459;
    if (*(int *)(pRVar1 + 0x14) == 1) {
      uVar3 = 0x45a;
    }
    RuntimeCallStats::Enter(pRVar1,(RuntimeCallTimer *)&uStack_a0,uVar3);
    lVar5 = *(long *)this;
    local_a8 = pRVar1;
  }
  pZVar2 = (Zone *)ZoneStats::NewEmptyZone(this_01,"V8.TFEarlyTrimming");
  GraphTrimmer::GraphTrimmer(aGStack_60,pZVar2,*(Graph **)(lVar5 + 0xa0));
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  pZStack_68 = pZVar2;
  JSGraph::GetCachedNodes(*(JSGraph **)(lVar5 + 0xd8),(ZoneVector *)&local_80);
  GraphTrimmer::TrimGraph<std::__ndk1::__wrap_iter<v8::internal::compiler::Node**>>
            (aGStack_60,local_80,local_78);
  if (local_80 != 0) {
    local_78 = local_80;
  }
  GraphTrimmer::~GraphTrimmer(aGStack_60);
  if (local_a8 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_a8,(RuntimeCallTimer *)&uStack_a0);
  }
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x30) = local_b0;
  }
  if (pZVar2 != (Zone *)0x0) {
    ZoneStats::ReturnZone((Zone *)this_01);
  }
  if (this_00 != (PipelineStatistics *)0x0) {
    PipelineStatistics::EndPhase(this_00);
  }
  return;
}

