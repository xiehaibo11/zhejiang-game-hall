
/* void 
   v8::internal::compiler::PipelineImpl::Run<v8::internal::compiler::HeapBrokerInitializationPhase>()
    */

void __thiscall
v8::internal::compiler::PipelineImpl::Run<v8::internal::compiler::HeapBrokerInitializationPhase>
          (PipelineImpl *this)

{
  PipelineStatistics *this_00;
  RuntimeCallStats *pRVar1;
  ulong uVar2;
  ulong *puVar3;
  ZoneStats *this_01;
  long lVar4;
  Isolate *pIVar5;
  long lVar6;
  JSHeapBroker *pJVar7;
  undefined8 *puVar8;
  undefined8 local_60;
  RuntimeCallStats *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar6 = *(long *)this;
  this_00 = *(PipelineStatistics **)(lVar6 + 0x38);
  if (this_00 != (PipelineStatistics *)0x0) {
    PipelineStatistics::BeginPhase(this_00,"V8.TFHeapBrokerInitialization");
  }
  this_01 = *(ZoneStats **)(lVar6 + 0x30);
  lVar4 = *(long *)(lVar6 + 0xb0);
  if (lVar4 != 0) {
    local_60 = *(undefined8 *)(lVar4 + 0x30);
    *(char **)(lVar4 + 0x30) = "V8.TFHeapBrokerInitialization";
  }
  pRVar1 = *(RuntimeCallStats **)(lVar6 + 0x1d8);
  local_38 = 0;
  uStack_40 = 0;
  local_48 = 0;
  uStack_50 = 0;
  local_58 = (RuntimeCallStats *)0x0;
  if ((pRVar1 == (RuntimeCallStats *)0x0) || (TracingFlags::runtime_stats == 0)) {
    puVar8 = *(undefined8 **)this;
  }
  else {
    RuntimeCallStats::Enter(pRVar1,(RuntimeCallTimer *)&uStack_50,0xaa);
    puVar8 = *(undefined8 **)this;
    local_58 = pRVar1;
  }
  lVar6 = ZoneStats::NewEmptyZone(this_01,"V8.TFHeapBrokerInitialization");
  pJVar7 = (JSHeapBroker *)puVar8[0x28];
  uVar2 = OptimizedCompilationInfo::native_context((OptimizedCompilationInfo *)puVar8[3]);
  pIVar5 = (Isolate *)*puVar8;
  if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(pIVar5 + 0x95a0);
    if (puVar3 == *(ulong **)(pIVar5 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(pIVar5);
    }
    *(ulong **)(pIVar5 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar2;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar2);
  }
  JSHeapBroker::InitializeAndStartSerializing(pJVar7,puVar3);
  if (local_58 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_58,(RuntimeCallTimer *)&uStack_50);
  }
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x30) = local_60;
  }
  if (lVar6 != 0) {
    ZoneStats::ReturnZone((Zone *)this_01);
  }
  if (this_00 != (PipelineStatistics *)0x0) {
    PipelineStatistics::EndPhase(this_00);
  }
  return;
}

