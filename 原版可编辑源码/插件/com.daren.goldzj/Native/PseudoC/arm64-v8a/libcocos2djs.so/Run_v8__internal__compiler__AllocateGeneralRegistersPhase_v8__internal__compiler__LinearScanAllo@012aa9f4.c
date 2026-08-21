
/* void 
   v8::internal::compiler::PipelineImpl::Run<v8::internal::compiler::AllocateGeneralRegistersPhase<v8::internal::compiler::LinearScanAllocator>>()
    */

void __thiscall
v8::internal::compiler::PipelineImpl::
Run<v8::internal::compiler::AllocateGeneralRegistersPhase<v8::internal::compiler::LinearScanAllocator>>
          (PipelineImpl *this)

{
  long lVar1;
  PipelineStatistics *this_00;
  RuntimeCallStats *pRVar2;
  long lVar3;
  undefined4 uVar4;
  ZoneStats *this_01;
  long lVar5;
  long lVar6;
  undefined8 local_108;
  RuntimeCallStats *local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  LinearScanAllocator aLStack_d8 [40];
  __tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
  a_Stack_b0 [8];
  __tree_node *local_a8;
  long local_90;
  long local_88;
  __tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
  *local_70;
  __tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
  *local_68;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar6 = *(long *)this;
  this_00 = *(PipelineStatistics **)(lVar6 + 0x38);
  if (this_00 != (PipelineStatistics *)0x0) {
    PipelineStatistics::BeginPhase(this_00,"V8.TFAllocateGeneralRegisters");
  }
  this_01 = *(ZoneStats **)(lVar6 + 0x30);
  lVar5 = *(long *)(lVar6 + 0xb0);
  if (lVar5 != 0) {
    local_108 = *(undefined8 *)(lVar5 + 0x30);
    *(char **)(lVar5 + 0x30) = "V8.TFAllocateGeneralRegisters";
  }
  pRVar2 = *(RuntimeCallStats **)(lVar6 + 0x1d8);
  local_e0 = 0;
  uStack_f8 = 0;
  local_100 = (RuntimeCallStats *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  if ((pRVar2 == (RuntimeCallStats *)0x0) || (TracingFlags::runtime_stats == 0)) {
    lVar6 = *(long *)this;
  }
  else {
    uVar4 = 0x43f;
    if (*(int *)(pRVar2 + 0x14) == 1) {
      uVar4 = 0x440;
    }
    RuntimeCallStats::Enter(pRVar2,(RuntimeCallTimer *)&uStack_f8,uVar4);
    lVar6 = *(long *)this;
    local_100 = pRVar2;
  }
  lVar3 = ZoneStats::NewEmptyZone(this_01,"V8.TFAllocateGeneralRegisters");
  LinearScanAllocator::LinearScanAllocator(aLStack_d8,*(undefined8 *)(lVar6 + 0x170),0,lVar3);
  LinearScanAllocator::AllocateRegisters(aLStack_d8);
  if (local_70 !=
      (__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
       *)0x0) {
    while (local_68 != local_70) {
      std::__ndk1::
      __tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
      ::destroy(local_68 + -0x20,*(__tree_node **)(local_68 + -0x18));
      local_68 = local_68 + -0x20;
    }
    local_68 = local_70;
  }
  if (local_90 != 0) {
    local_88 = local_90;
  }
  std::__ndk1::
  __tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
  ::destroy(a_Stack_b0,local_a8);
  if (local_100 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_100,(RuntimeCallTimer *)&uStack_f8);
  }
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x30) = local_108;
  }
  if (lVar3 != 0) {
    ZoneStats::ReturnZone((Zone *)this_01);
  }
  if (this_00 != (PipelineStatistics *)0x0) {
    PipelineStatistics::EndPhase(this_00);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

