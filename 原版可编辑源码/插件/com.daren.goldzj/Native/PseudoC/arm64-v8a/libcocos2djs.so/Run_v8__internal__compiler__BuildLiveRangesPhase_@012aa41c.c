
/* void v8::internal::compiler::PipelineImpl::Run<v8::internal::compiler::BuildLiveRangesPhase>() */

void __thiscall
v8::internal::compiler::PipelineImpl::Run<v8::internal::compiler::BuildLiveRangesPhase>
          (PipelineImpl *this)

{
  PipelineStatistics *this_00;
  RuntimeCallStats *pRVar1;
  Zone *pZVar2;
  undefined4 uVar3;
  ZoneStats *this_01;
  long lVar4;
  long lVar5;
  undefined8 local_88;
  RuntimeCallStats *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  LiveRangeBuilder aLStack_58 [8];
  __tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand*,v8::internal::compiler::UsePosition*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand*,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand*,v8::internal::compiler::UsePosition*>,std::__ndk1::less<v8::internal::compiler::InstructionOperand*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand*,v8::internal::compiler::UsePosition*>>>
  a_Stack_50 [8];
  __tree_node *local_48;
  
  lVar5 = *(long *)this;
  this_00 = *(PipelineStatistics **)(lVar5 + 0x38);
  if (this_00 != (PipelineStatistics *)0x0) {
    PipelineStatistics::BeginPhase(this_00,"V8.TFBuildLiveRanges");
  }
  this_01 = *(ZoneStats **)(lVar5 + 0x30);
  lVar4 = *(long *)(lVar5 + 0xb0);
  if (lVar4 != 0) {
    local_88 = *(undefined8 *)(lVar4 + 0x30);
    *(char **)(lVar4 + 0x30) = "V8.TFBuildLiveRanges";
  }
  pRVar1 = *(RuntimeCallStats **)(lVar5 + 0x1d8);
  local_60 = 0;
  uStack_78 = 0;
  local_80 = (RuntimeCallStats *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  if ((pRVar1 == (RuntimeCallStats *)0x0) || (TracingFlags::runtime_stats == 0)) {
    lVar5 = *(long *)this;
  }
  else {
    uVar3 = 0x447;
    if (*(int *)(pRVar1 + 0x14) == 1) {
      uVar3 = 0x448;
    }
    RuntimeCallStats::Enter(pRVar1,(RuntimeCallTimer *)&uStack_78,uVar3);
    lVar5 = *(long *)this;
    local_80 = pRVar1;
  }
  pZVar2 = (Zone *)ZoneStats::NewEmptyZone(this_01,"V8.TFBuildLiveRanges");
  LiveRangeBuilder::LiveRangeBuilder(aLStack_58,*(RegisterAllocationData **)(lVar5 + 0x170),pZVar2);
  LiveRangeBuilder::BuildLiveRanges(aLStack_58);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand*,v8::internal::compiler::UsePosition*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand*,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand*,v8::internal::compiler::UsePosition*>,std::__ndk1::less<v8::internal::compiler::InstructionOperand*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand*,v8::internal::compiler::UsePosition*>>>
  ::destroy(a_Stack_50,local_48);
  if (local_80 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)&uStack_78);
  }
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x30) = local_88;
  }
  if (pZVar2 != (Zone *)0x0) {
    ZoneStats::ReturnZone((Zone *)this_01);
  }
  if (this_00 != (PipelineStatistics *)0x0) {
    PipelineStatistics::EndPhase(this_00);
  }
  return;
}

