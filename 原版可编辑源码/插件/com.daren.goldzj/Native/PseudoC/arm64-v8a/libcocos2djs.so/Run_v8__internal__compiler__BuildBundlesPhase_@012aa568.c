
/* void v8::internal::compiler::PipelineImpl::Run<v8::internal::compiler::BuildBundlesPhase>() */

void __thiscall
v8::internal::compiler::PipelineImpl::Run<v8::internal::compiler::BuildBundlesPhase>
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
  undefined8 local_78;
  RuntimeCallStats *local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar6 = *(long *)this;
  this_00 = *(PipelineStatistics **)(lVar6 + 0x38);
  if (this_00 != (PipelineStatistics *)0x0) {
    PipelineStatistics::BeginPhase(this_00,"V8.TFBuildLiveRangeBundles");
  }
  this_01 = *(ZoneStats **)(lVar6 + 0x30);
  lVar5 = *(long *)(lVar6 + 0xb0);
  if (lVar5 != 0) {
    local_78 = *(undefined8 *)(lVar5 + 0x30);
    *(char **)(lVar5 + 0x30) = "V8.TFBuildLiveRangeBundles";
  }
  pRVar2 = *(RuntimeCallStats **)(lVar6 + 0x1d8);
  local_50 = 0;
  uStack_68 = 0;
  local_70 = (RuntimeCallStats *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  if ((pRVar2 == (RuntimeCallStats *)0x0) || (TracingFlags::runtime_stats == 0)) {
    lVar6 = *(long *)this;
  }
  else {
    uVar4 = 0x445;
    if (*(int *)(pRVar2 + 0x14) == 1) {
      uVar4 = 0x446;
    }
    RuntimeCallStats::Enter(pRVar2,(RuntimeCallTimer *)&uStack_68,uVar4);
    lVar6 = *(long *)this;
    local_70 = pRVar2;
  }
  lVar3 = ZoneStats::NewEmptyZone(this_01,"V8.TFBuildLiveRangeBundles");
  local_48 = *(undefined8 *)(lVar6 + 0x170);
  local_40 = 0;
  BundleBuilder::BuildBundles((BundleBuilder *)&local_48);
  if (local_70 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_70,(RuntimeCallTimer *)&uStack_68);
  }
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x30) = local_78;
  }
  if (lVar3 != 0) {
    ZoneStats::ReturnZone((Zone *)this_01);
  }
  if (this_00 != (PipelineStatistics *)0x0) {
    PipelineStatistics::EndPhase(this_00);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

